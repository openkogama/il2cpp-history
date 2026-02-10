
/* Void AdLog(Exception) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_AdLog
               (Exception *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
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
  pIVar1 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar1 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar1,3,e);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AdLog(String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_AdLog_1
               (String *msg,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
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
  pIVar1 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar1 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar1,3,msg);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateAdManagerHack() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_CreateAdManagerHack(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Creating_an_ad_manager_that_shou);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  message = StringLiteral_Creating_an_ad_manager_that_shou;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0);
  pIVar1 = (IAdManager *)FUN_?(TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager);
  bVar2 = iRam_? != 0;
  (this->fields).sdkManager = pIVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).sdkManager >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  (this->fields).embeddedSiteSDKAvailable = 1;
  return;
}


/* Void ForceCreateEmbeddedSiteSDK(EmbeddedSiteConfigData) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_ForceCreateEmbeddedSiteSDK
               (WebAdManager *this,EmbeddedSiteConfigData *site,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EmbeddedSiteConfigData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__AdManager__unity_sdk__forcefull);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Creating_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  plVar1 = (longlong *)FUN_?(&(TypeInfo__EmbeddedSiteConfigData->_0).byval_arg);
  if (plVar1 == (longlong *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar3 = (String *)(**(code **)(*plVar1 + 0x2d8))(plVar1,*(undefined8 *)(*plVar1 + 0x2e0));
  pSVar3 = mscorlib.dll::System::String::String_Concat_5
                      (StringLiteral_Creating_,pSVar3,
                       StringLiteral__AdManager__unity_sdk__forcefull,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  pIVar4 = (IAdManager *)FUN_?(TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager)
  ;
  (this->fields).sdkManager = pIVar4;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).sdkManager >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  iVar10 = iRam_?;
  bVar11 = site->integratedSdk;
  bVar12 = site->allowsFallbackAds;
  bVar13 = site->showPlayButtonAd;
  bVar14 = site->hideGoldShop;
  bVar15 = site->allowInHouseAds;
  bVar16 = site->removeFullscreenButton;
  bVar17 = site->hideSignUp;
  bVar18 = site->noPlayButtonVideoIcon;
  iVar19 = site->siteEnum;
  bVar20 = site->showTouristPromotion;
  bVar21 = site->allowsOpenInNewTab;
  bVar22 = site->allowsRedirectToWebpage;
  bVar23 = site->allowsModals;
  (this->fields).siteData.sites = site->sites;
  (this->fields).siteData.siteEnum = iVar19;
  (this->fields).siteData.showTouristPromotion = bVar20;
  (this->fields).siteData.allowsOpenInNewTab = bVar21;
  (this->fields).siteData.allowsRedirectToWebpage = bVar22;
  (this->fields).siteData.allowsModals = bVar23;
  (this->fields).siteData.integratedSdk = bVar11;
  (this->fields).siteData.allowsFallbackAds = bVar12;
  (this->fields).siteData.showPlayButtonAd = bVar13;
  (this->fields).siteData.hideGoldShop = bVar14;
  (this->fields).siteData.allowInHouseAds = bVar15;
  (this->fields).siteData.removeFullscreenButton = bVar16;
  (this->fields).siteData.hideSignUp = bVar17;
  (this->fields).siteData.noPlayButtonVideoIcon = bVar18;
  if (iVar10 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).siteData >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  (this->fields).embeddedSiteSDKAvailable = 1;
  return;
}


/* Void InitializeAdConfigSettings(AdConfigSettings) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_InitializeAdConfigSettings
               (WebAdManager *this,AdConfigSettings *config,MethodInfo *method)

{
  if (config == (AdConfigSettings *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  iVar3 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.siteEnum;
  bVar4 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.showTouristPromotion;
  bVar5 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.allowsOpenInNewTab;
  bVar6 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.allowsRedirectToWebpage;
  bVar7 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.allowsModals;
  bVar8 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.integratedSdk;
  bVar9 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.allowsFallbackAds;
  bVar10 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.showPlayButtonAd;
  bVar11 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.hideGoldShop;
  bVar12 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.allowInHouseAds;
  bVar13 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.removeFullscreenButton;
  bVar14 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.hideSignUp;
  bVar15 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.noPlayButtonVideoIcon;
  (this->fields).siteData.sites = (config->fields)._EmbeddedSiteConfigData_k__BackingField.sites;
  (this->fields).siteData.siteEnum = iVar3;
  (this->fields).siteData.showTouristPromotion = bVar4;
  (this->fields).siteData.allowsOpenInNewTab = bVar5;
  (this->fields).siteData.allowsRedirectToWebpage = bVar6;
  (this->fields).siteData.allowsModals = bVar7;
  (this->fields).siteData.integratedSdk = bVar8;
  (this->fields).siteData.allowsFallbackAds = bVar9;
  (this->fields).siteData.showPlayButtonAd = bVar10;
  (this->fields).siteData.hideGoldShop = bVar11;
  (this->fields).siteData.allowInHouseAds = bVar12;
  (this->fields).siteData.removeFullscreenButton = bVar13;
  (this->fields).siteData.hideSignUp = bVar14;
  (this->fields).siteData.noPlayButtonVideoIcon = bVar15;
  if (bVar2) {
    uVar16 = (uint)((ulonglong)&(this->fields).siteData >> 0xc);
    uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
    do {
      uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
      puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar18 == *puVar19;
      if (bVar2) {
        *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  (this->fields).timeoutAdAfterDelayAsUnlocked =
       (config->fields)._AdTimeoutAsSuccess_k__BackingField;
  (this->fields).timeoutSuccessDelay = (config->fields)._AdTimeoutAsSuccessDelay_k__BackingField;
  (this->fields).interstitialTimeoutAfterRewardedAd =
       (float)(config->fields)._InterstitialTimeoutAfterRewardedAd_k__BackingField;
  return;
}


/* Void InitializeCallbackManager(IAdUIManager) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_InitializeCallbackManager
               (WebAdManager *this,IAdUIManager *adUIManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdIntegration__InHouse__InHouseAdManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).adUIManager = adUIManager;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).adUIManager >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar6 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar6 == (GameSessionData *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((pGVar6->fields).embedded != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVClientSettings);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (((TypeInfo__MVClientSettings->static_fields->flags & 0x10000U) != 0) &&
       ((this->fields).siteData.integratedSdk != 0)) {
      pIVar8 = (IAdManager *)
               FUN_?(TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager);
      (this->fields).sdkManager = pIVar8;
      func_?(&(this->fields).sdkManager);
      (this->fields).embeddedSiteSDKAvailable = 1;
    }
  }
  if ((this->fields).siteData.allowInHouseAds != 0) {
    pIVar8 = (IAdManager *)FUN_?(TypeInfo__AdIntegration__InHouse__InHouseAdManager);
    bVar1 = iRam_? != 0;
    *(undefined4 *)&pIVar8[4].klass = 0x14;
    (this->fields).inHouseAdManager = pIVar8;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).inHouseAdManager >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    (this->fields).inHouseAdManagerAvailable = 1;
  }
  return;
}


/* Void InitializeInHouse(InHouseAdController) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_InitializeInHouse
               (WebAdManager *this,InHouseAdController *inHouseAdController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdIntegration__InHouse__InHouseAdManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (InHouseAdManager *)(this->fields).inHouseAdManager;
  if (this_00 != (InHouseAdManager *)0x0) {
    bVar1 = (TypeInfo__AdIntegration__InHouse__InHouseAdManager->_1).naturalAligment;
    if ((bVar1 <= (this_00->klass->_1).naturalAligment) &&
       ((this_00->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo__AdIntegration__InHouse__InHouseAdManager)) {
      Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
      InHouseAdManager_InitializeAdController(this_00,inHouseAdController,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void InterstitialAdShownSDKCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_InterstitialAdShownSDKCallback
               (WebAdManager *this,InterstitialAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EmbeddedSite);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_InterstitialShown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_InterstitialShown_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InterstitialAdShownSDKCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InterstitialAdShownSDKCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Interstitial);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_InterstitialAdShownSDKCallback__;
  if ((result != InterstitialAdResult__Enum_Done) &&
     ((this->fields).siteData.allowsFallbackAds != 0)) {
    EStack_2.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult;
    EStack_2.monitor = (MonitorData *)0xffffffffffffffff;
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_InterstitialAdShownSDKCallback__,pSVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0)
    ;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<bool,_System::String>);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnInterstitialShownCallback_bool__System__String_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_RequestNonEmbeddedInterstitialAd);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_showVideoAd);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar1 = StringLiteral_RequestNonEmbeddedInterstitialAd;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0)
    ;
    pOVar3 = (Object__Class *)FUN_?(TypeInfo__System__Action<bool,_System::String>);
    FUN_?(pOVar3,this,
                  MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnInterstitialShownCallback_bool__System__String_
                 );
    if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_showVideoAd;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__BrowserComm,pOVar3,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__BrowserComm__Callback);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Object);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Would_have_sent_function__);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_callbackId);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral___to_JSBridge_with_callback__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
      FUN_?();
    }
    str0 = StringLiteral_Would_have_sent_function__;
    pSVar4 = StringLiteral___to_JSBridge_with_callback__;
    if (TypeInfo__BrowserComm->static_fields->enableExternalCall != 0) {
      if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_01 = TypeInfo__BrowserComm->static_fields->callbacks;
      if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__BrowserComm__ToJavaScript);
      }
      key = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
      pOVar5 = (Object *)FUN_?(TypeInfo__BrowserComm__Callback);
      bVar6 = iRam_? != 0;
      pOVar5[1].klass = pOVar3;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
        in_R9 = (ulonglong)(uVar7 & 0x3f);
        puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << in_R9;
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      if (this_01 != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0) {
        uVar11 = CONCAT71((int7)(in_R9 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,pOVar5,
                   (InsertionBehavior__Enum)uVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                   ->klass->rgctx_data[0x22].method);
        this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        aiStackX_20[0] = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
        pOVar5 = (Object *)FUN_?(uRam_?,aiStackX_20);
        if (this_02 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_02,
                     (Object *)StringLiteral_callbackId,pOVar5,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar4 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                              ((Object *)this_02,(MethodInfo *)0x0);
          pSVar1 = BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ToNameSpace
                              (pSVar1,(MethodInfo *)0x0);
          args = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
          if (args != (Object__Array *)0x0) {
            if ((pSVar4 != (String *)0x0) &&
               (lVar12 = FUN_?(pSVar4,(args->klass->_0).element_class), lVar12 == 0)) {
              uVar11 = FUN_?();
              FUN_?(uVar11,0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            FUN_?(args,0);
            pSVar1 = JSBridge::JSBridge_BuildInvocationForArguments(pSVar1,args,(MethodInfo *)0x0)
            ;
            JSBridge::JSBridge_DoKGMEval(pSVar1,(MethodInfo *)0x0);
            TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter =
                 TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter + 1;
            return;
          }
        }
      }
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if (pOVar3 == (Object__Class *)0x0) {
      str3 = (String *)0x0;
    }
    else {
      pIVar14 = (pOVar3->_0).image;
      str3 = (String *)(*(code *)pIVar14[5].name)(pOVar3,pIVar14[5].nameNoExt);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_6
                        (str0,pSVar1,pSVar4,str3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0)
    ;
    return;
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_Ad_InterstitialShown;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  EStack_2.klass = (Enum__Class *)TypeInfo__EmbeddedSite;
  EStack_2.monitor = (MonitorData *)0xffffffffffffffff;
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_Ad_InterstitialShown_,pSVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar15 != (MVGameControllerBase *)0x0) &&
      (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar16->fields).operationRequests,
     this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
              (this_00,AdType__Enum_InterstitialAd,AdActionType__Enum_Success,AdContext__Enum_None,
               (MethodInfo *)0x0);
    WebAdManager_SetFinishedWatchingAd(this,StringLiteral_Interstitial,(MethodInfo *)0x0);
    pIVar17 = (this->fields).adUIManager;
    if (pIVar17 != (IAdUIManager *)0x0) {
      uVar18 = 0;
      pIVar19 = pIVar17->klass;
      uVar20._0_1_ = (pIVar19->_1).rank;
      uVar20._1_1_ = (pIVar19->_1).minimumAlignment;
      if (uVar20 != 0) {
        do {
          if (pIVar19->interfaceOffsets[uVar18].interfaceType ==
              (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager) {
            pVVar21 = &(pIVar19->vtable).AdShowing + (pIVar19->interfaceOffsets[uVar18].offset + 3);
            goto code_?;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar20);
      }
      pVVar21 = (VirtualInvokeData *)FUN_?(pIVar17);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar21->methodPtr)(pIVar17,3,pVVar21->method,pVVar21->methodPtr);
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnInHouseInterstitialAdShownCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_OnInHouseInterstitialAdShownCallback
               (WebAdManager *this,InterstitialAdResult__Enum obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Interstitial);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).operationRequests,
     this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
              (this_00,AdType__Enum_InterstitialAd,AdActionType__Enum_Success,AdContext__Enum_None,
               (MethodInfo *)0x0);
    WebAdManager_SetFinishedWatchingAd(this,StringLiteral_Interstitial,(MethodInfo *)0x0);
    pIVar3 = (this->fields).adUIManager;
    if (pIVar3 != (IAdUIManager *)0x0) {
      uVar4 = 0;
      pIVar5 = pIVar3->klass;
      uVar6._0_1_ = (pIVar5->_1).rank;
      uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pIVar5->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager) {
            pVVar7 = &(pIVar5->vtable).AdShowing + (pIVar5->interfaceOffsets[uVar4].offset + 3);
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar6);
      }
      pVVar7 = (VirtualInvokeData *)FUN_?(pIVar3);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar7->methodPtr)(pIVar3,3,pVVar7->method,pVVar7->methodPtr);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnInHouseRewardedAdShownCallback(RewardedAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_OnInHouseRewardedAdShownCallback
               (WebAdManager *this,RewardedAdResult__Enum obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Rewarded);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  bVar4 = cRam_? == '\0';
  (this->fields).lastSeenRewardedAd = fVar3;
  if (bVar4) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 != (MVGameControllerBase *)0x0) &&
      (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar6->fields).operationRequests,
     this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
              (this_00,AdType__Enum_RewardedAd,AdActionType__Enum_Success,AdContext__Enum_None,
               (MethodInfo *)0x0);
    WebAdManager_SetFinishedWatchingAd(this,StringLiteral_Rewarded,(MethodInfo *)0x0);
    pIVar7 = (this->fields).adUIManager;
    if (pIVar7 != (IAdUIManager *)0x0) {
      uVar8 = 0;
      pIVar9 = pIVar7->klass;
      uVar10._0_1_ = (pIVar9->_1).rank;
      uVar10._1_1_ = (pIVar9->_1).minimumAlignment;
      if (uVar10 != 0) {
        do {
          if (pIVar9->interfaceOffsets[uVar8].interfaceType ==
              (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager) {
            pVVar11 = &(pIVar9->vtable).AdShowing + (pIVar9->interfaceOffsets[uVar8].offset + 4);
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar10);
      }
      pVVar11 = (VirtualInvokeData *)FUN_?(pIVar7);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar11->methodPtr)(pIVar7,3,pVVar11->method,pVVar11->methodPtr);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnInterstitialShownCallback(Boolean, String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_OnInterstitialShownCallback
               (WebAdManager *this,bool ok,String *json,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  Assets__Scripts__AdIntegration__Web__WebAdManager__JSONInterstitialAdSuccessful_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONInterstitialAdSuccessful>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnInHouseInterstitialAdShownCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_InterstitialShown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_InterstitialShown_Kogama);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnInterstitialShownCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Interstitial);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_False;
  if (ok != 0) {
    pSVar1 = StringLiteral_True;
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_6
                     (StringLiteral_OnInterstitialShownCallback__,pSVar1,::StringLiteral____,json,
                      (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_Ad_InterstitialShown;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_Ad_InterstitialShown_Kogama;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar2 = 
  Assets__Scripts__AdIntegration__Web__WebAdManager__JSONInterstitialAdSuccessful_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONInterstitialAdSuccessful>_System__String_
  ;
  if ((
      Assets__Scripts__AdIntegration__Web__WebAdManager__JSONInterstitialAdSuccessful_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONInterstitialAdSuccessful>_System__String_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    if ((pMVar2->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar2);
    }
  }
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  lVar3 = *(longlong *)(pMVar2->field7_0x38).methodMetadataHandle;
  if (*(longlong *)(lVar3 + 0x38) == 0) {
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    if (*(longlong *)(lVar3 + 0x38) == 0) {
      FUN_?(lVar3);
    }
  }
  lVar4 = **(longlong **)(lVar3 + 0x38);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  type = (Type *)0x0;
  if (lVar4 != 0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar4 = FUN_?(lVar4,1);
    type = (Type *)FUN_?(lVar4 + 0x20);
  }
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar5 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject
                     (json,type,(JsonSerializerSettings *)0x0,(MethodInfo *)0x0);
  lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_?(lVar3);
  }
  if (pOVar5 != (Object *)0x0) {
    if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lVar3 + 0x40)) {
      FUN_?(pOVar5,lVar3);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((ok == 0) || (*(char *)&pOVar5[1].klass == '\0')) &&
       ((this->fields).inHouseAdManagerAvailable != 0)) {
      pIVar7 = (this->fields).inHouseAdManager;
      this_01 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(
                             TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,(Object *)this,
                 MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnInHouseInterstitialAdShownCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 ,(MethodInfo *)0x0);
      if (pIVar7 != (IAdManager *)0x0) {
        FUN_?();
        return;
      }
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar8 != (MVGameControllerBase *)0x0) &&
          (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) &&
         (this_00 = (pMVar9->fields).operationRequests,
         this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                  (this_00,AdType__Enum_InterstitialAd,AdActionType__Enum_Success,
                   AdContext__Enum_None,(MethodInfo *)0x0);
        WebAdManager_SetFinishedWatchingAd(this,StringLiteral_Interstitial,(MethodInfo *)0x0);
        pIVar10 = (this->fields).adUIManager;
        if (pIVar10 != (IAdUIManager *)0x0) {
          FUN_?(3,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar10,3);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnRewardedAdShownCallback(Boolean, String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_OnRewardedAdShownCallback
               (WebAdManager *this,bool ok,String *json,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  Assets__Scripts__AdIntegration__Web__WebAdManager__JSONRewardedAdSuccessful_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONRewardedAdSuccessful>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnInHouseRewardedAdShownCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnRewardedAdShownCallback_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_RewardedShown);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_RewardedShown_Kogama);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnRewardedAdShownCallback___Ad_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_False;
  if (ok != 0) {
    pSVar1 = StringLiteral_True;
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_6
                     (StringLiteral_OnRewardedAdShownCallback_,pSVar1,::StringLiteral____,json,
                      (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  iVar2 = 4;
  if (ok != 0) {
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar3 = 
    Assets__Scripts__AdIntegration__Web__WebAdManager__JSONRewardedAdSuccessful_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONRewardedAdSuccessful>_System__String_
    ;
    if ((
        Assets__Scripts__AdIntegration__Web__WebAdManager__JSONRewardedAdSuccessful_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONRewardedAdSuccessful>_System__String_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
      LOCK();
      UNLOCK();
      if ((pMVar3->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(pMVar3);
      }
    }
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    lVar4 = *(longlong *)(pMVar3->field7_0x38).methodMetadataHandle;
    if (*(longlong *)(lVar4 + 0x38) == 0) {
      FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
      LOCK();
      UNLOCK();
      if (*(longlong *)(lVar4 + 0x38) == 0) {
        FUN_?(lVar4);
      }
    }
    lVar5 = **(longlong **)(lVar4 + 0x38);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    type = (Type *)0x0;
    if (lVar5 != 0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar5 = FUN_?(lVar5,1);
      type = (Type *)FUN_?(lVar5 + 0x20);
    }
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject
                       (json,type,(JsonSerializerSettings *)0x0,(MethodInfo *)0x0);
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_?(lVar4);
    }
    if (pOVar6 != (Object *)0x0) {
      if ((pOVar6->klass->_0).element_class == *(Il2CppClass **)(lVar4 + 0x40)) {
        if ((char)*(undefined2 *)&pOVar6[1].klass == '\0') {
          WebAdManager_AdLog_1(StringLiteral_OnRewardedAdShownCallback___Ad_s,(MethodInfo *)0x0);
          iVar2 = 0;
        }
        else if ((char)((ushort)*(undefined2 *)&pOVar6[1].klass >> 8) == '\0') {
          WebAdManager_SendStat(StringLiteral_Ad_RewardedShown,(MethodInfo *)0x0);
          WebAdManager_SendStat(StringLiteral_Ad_RewardedShown_Kogama,(MethodInfo *)0x0);
          iVar2 = 3;
        }
        goto code_?;
      }
      FUN_?(pOVar6);
    }
    FUN_?();
code_?:
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
code_?:
  if ((this->fields).timeoutAdAfterDelayAsUnlocked != 0) {
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
    goto code_?;
    pcRam_? = pcVar8;
    fVar9 = (float)(*pcRam_?)();
    if ((float)(this->fields).timeoutSuccessDelay <= fVar9 - (this->fields).timeOfRewardedAdStart)
    goto code_?;
  }
  if (iVar2 != 3) {
    if (iVar2 != 0) {
      return;
    }
    if ((this->fields).inHouseAdManagerAvailable == 0) {
      return;
    }
    pIVar10 = (this->fields).inHouseAdManager;
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              FUN_?(
                           TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                           );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnInHouseRewardedAdShownCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
               ,(MethodInfo *)0x0);
    if (pIVar10 != (IAdManager *)0x0) {
      FUN_?();
      return;
    }
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
code_?:
  WebAdManager_RewardAdSuccess(this,(MethodInfo *)0x0);
  return;
}


/* Void PrepareForAd(Boolean, AdContext, Action, Action) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_PrepareForAd
               (WebAdManager *this,bool rewarded,AdContext__Enum context,Action *onAdShowing,
               Action *requestAd,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_already_showing__aborting);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).adUIManager != (IAdUIManager *)0x0) {
    cVar1 = FUN_?(0);
    message = StringLiteral_Ad_already_showing__aborting;
    if (cVar1 == '\0') {
      (this->fields).probablyWatchingAd = 0;
      UNRECOVERED_JUMPTABLE = pcRam_?;
      (this->fields).currentAdType = context;
      (this->fields).showingAd = 1;
      pcVar2 = pcRam_?;
      if ((UNRECOVERED_JUMPTABLE == (code *)0x0) &&
         (UNRECOVERED_JUMPTABLE = (code *)FUN_?(&UNK_?),
         pcVar2 = UNRECOVERED_JUMPTABLE, UNRECOVERED_JUMPTABLE == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      pcRam_? = pcVar2;
      fVar4 = (float)(*UNRECOVERED_JUMPTABLE)();
      (this->fields).probablyWatchingAdStarted = fVar4;
      if (rewarded != 0) {
        UNRECOVERED_JUMPTABLE = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (UNRECOVERED_JUMPTABLE = (code *)FUN_?(&UNK_?),
           UNRECOVERED_JUMPTABLE == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          UNRECOVERED_JUMPTABLE = (code *)swi(3);
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        pcRam_? = UNRECOVERED_JUMPTABLE;
        fVar4 = (float)(*pcRam_?)();
        (this->fields).timeOfRewardedAdStart = fVar4;
      }
      WebAdManager_SendRequestStats(this,0,context,(MethodInfo *)0x0);
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if ((this_00 != (MVNetworkGame_OperationRequests *)0x0) &&
         (MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                    (this_00,(uint)rewarded,AdActionType__Enum_Start,context,(MethodInfo *)0x0),
         requestAd != (Action *)0x0)) {
        UNRECOVERED_JUMPTABLE = (requestAd->fields)._._.invoke_impl;
        pvVar5 = (requestAd->fields)._._.method;
        pvVar6 = (requestAd->fields)._._.method_code;
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(pvVar6,pvVar5);
        return;
      }
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      if (onAdShowing != (Action *)0x0) {
        UNRECOVERED_JUMPTABLE = (onAdShowing->fields)._._.invoke_impl;
        pvVar5 = (onAdShowing->fields)._._.method;
        pvVar6 = (onAdShowing->fields)._._.method_code;
        goto code_?;
      }
    }
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
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
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass49_0___RequestInterstitial_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass49_0___RequestInterstitial_b__1__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass49_0
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(
                        TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass49_0
                        );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  object[1].klass = (Object__Class *)interstitialCB;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  object[1].monitor = (MonitorData *)this;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  *(AdContext__Enum *)&object[2].klass = context;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,object,
             MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass49_0___RequestInterstitial_b__0__
             ,(MethodInfo *)0x0);
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,object,
             MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass49_0___RequestInterstitial_b__1__
             ,(MethodInfo *)0x0);
  WebAdManager_PrepareForAd(this,0,context,(Action *)this_00,(Action *)this_01,(MethodInfo *)0x0);
  return;
}


/* Void RequestNonEmbeddedInterstitialAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_RequestNonEmbeddedInterstitialAd(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool,_System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnInterstitialShownCallback_bool__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RequestNonEmbeddedInterstitialAd);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_showVideoAd);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_RequestNonEmbeddedInterstitialAd;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pOVar2 = (Object__Class *)FUN_?(TypeInfo__System__Action<bool,_System::String>);
  FUN_?(pOVar2,this,
                MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnInterstitialShownCallback_bool__System__String_
               );
  if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral_showVideoAd;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm,pOVar2,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__Callback);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Would_have_sent_function__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_callbackId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___to_JSBridge_with_callback__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?();
  }
  str0 = StringLiteral_Would_have_sent_function__;
  pSVar3 = StringLiteral___to_JSBridge_with_callback__;
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall != 0) {
    if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = TypeInfo__BrowserComm->static_fields->callbacks;
    if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    key = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
    pOVar4 = (Object *)FUN_?(TypeInfo__BrowserComm__Callback);
    bVar5 = iRam_? != 0;
    pOVar4[1].klass = pOVar2;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)(pOVar4 + 1) >> 0xc);
      in_R9 = (ulonglong)(uVar6 & 0x3f);
      puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << in_R9;
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    if (this_00 != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0) {
      uVar10 = CONCAT71((int7)(in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,pOVar4,
                 (InsertionBehavior__Enum)uVar10,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                 ->klass->rgctx_data[0x22].method);
      this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      aiStackX_20[0] = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
      pOVar4 = (Object *)FUN_?(uRam_?,aiStackX_20);
      if (this_01 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,
                   (Object *)StringLiteral_callbackId,pOVar4,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar10 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar3 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                           ((Object *)this_01,(MethodInfo *)0x0);
        pSVar1 = BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ToNameSpace
                           (pSVar1,(MethodInfo *)0x0);
        args = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
        if (args != (Object__Array *)0x0) {
          if ((pSVar3 != (String *)0x0) &&
             (lVar11 = FUN_?(pSVar3,(args->klass->_0).element_class), lVar11 == 0)) {
            uVar10 = FUN_?();
            FUN_?(uVar10,0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FUN_?(args,0);
          pSVar1 = JSBridge::JSBridge_BuildInvocationForArguments(pSVar1,args,(MethodInfo *)0x0);
          JSBridge::JSBridge_DoKGMEval(pSVar1,(MethodInfo *)0x0);
          TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter =
               TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter + 1;
          return;
        }
      }
    }
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (pOVar2 == (Object__Class *)0x0) {
    str3 = (String *)0x0;
  }
  else {
    pIVar13 = (pOVar2->_0).image;
    str3 = (String *)(*(code *)pIVar13[5].name)(pOVar2,pIVar13[5].nameNoExt);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_6(str0,pSVar1,pSVar3,str3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  return;
}


/* Void RequestNonEmbeddedRewardedAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_RequestNonEmbeddedRewardedAd(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool,_System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnRewardedAdShownCallback_bool__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RequestNonEmbeddedRewardedAd___n);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_showRewardedVideoAd);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_RequestNonEmbeddedRewardedAd___n;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pOVar2 = (Object__Class *)FUN_?(TypeInfo__System__Action<bool,_System::String>);
  FUN_?(pOVar2,this,
                MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnRewardedAdShownCallback_bool__System__String_
               );
  if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral_showRewardedVideoAd;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm,pOVar2,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__Callback);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Would_have_sent_function__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_callbackId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___to_JSBridge_with_callback__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?();
  }
  str0 = StringLiteral_Would_have_sent_function__;
  pSVar3 = StringLiteral___to_JSBridge_with_callback__;
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall != 0) {
    if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = TypeInfo__BrowserComm->static_fields->callbacks;
    if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    key = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
    pOVar4 = (Object *)FUN_?(TypeInfo__BrowserComm__Callback);
    bVar5 = iRam_? != 0;
    pOVar4[1].klass = pOVar2;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)(pOVar4 + 1) >> 0xc);
      in_R9 = (ulonglong)(uVar6 & 0x3f);
      puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << in_R9;
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    if (this_00 != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0) {
      uVar10 = CONCAT71((int7)(in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,pOVar4,
                 (InsertionBehavior__Enum)uVar10,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                 ->klass->rgctx_data[0x22].method);
      this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      aiStackX_20[0] = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
      pOVar4 = (Object *)FUN_?(uRam_?,aiStackX_20);
      if (this_01 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,
                   (Object *)StringLiteral_callbackId,pOVar4,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar10 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar3 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                           ((Object *)this_01,(MethodInfo *)0x0);
        pSVar1 = BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ToNameSpace
                           (pSVar1,(MethodInfo *)0x0);
        args = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
        if (args != (Object__Array *)0x0) {
          if ((pSVar3 != (String *)0x0) &&
             (lVar11 = FUN_?(pSVar3,(args->klass->_0).element_class), lVar11 == 0)) {
            uVar10 = FUN_?();
            FUN_?(uVar10,0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FUN_?(args,0);
          pSVar1 = JSBridge::JSBridge_BuildInvocationForArguments(pSVar1,args,(MethodInfo *)0x0);
          JSBridge::JSBridge_DoKGMEval(pSVar1,(MethodInfo *)0x0);
          TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter =
               TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter + 1;
          return;
        }
      }
    }
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (pOVar2 == (Object__Class *)0x0) {
    str3 = (String *)0x0;
  }
  else {
    pIVar13 = (pOVar2->_0).image;
    str3 = (String *)(*(code *)pIVar13[5].name)(pOVar2,pIVar13[5].nameNoExt);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_6(str0,pSVar1,pSVar3,str3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
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
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass46_0___RequestRewardedAd_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass46_0___RequestRewardedAd_b__1__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass46_0
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(
                        TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass46_0
                        );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  object[1].klass = (Object__Class *)rewardedAdCallback;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  object[1].monitor = (MonitorData *)this;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  *(AdContext__Enum *)&object[2].klass = context;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,object,
             MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass46_0___RequestRewardedAd_b__0__
             ,(MethodInfo *)0x0);
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,object,
             MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass46_0___RequestRewardedAd_b__1__
             ,(MethodInfo *)0x0);
  WebAdManager_PrepareForAd(this,1,context,(Action *)this_00,(Action *)this_01,(MethodInfo *)0x0);
  return;
}


/* Void RewardAdSuccess() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_RewardAdSuccess(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Rewarded);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  bVar4 = cRam_? == '\0';
  (this->fields).lastSeenRewardedAd = fVar3;
  if (bVar4) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 != (MVGameControllerBase *)0x0) &&
      (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar6->fields).operationRequests,
     this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
              (this_00,AdType__Enum_RewardedAd,AdActionType__Enum_Success,AdContext__Enum_None,
               (MethodInfo *)0x0);
    WebAdManager_SetFinishedWatchingAd(this,StringLiteral_Rewarded,(MethodInfo *)0x0);
    pIVar7 = (this->fields).adUIManager;
    if (pIVar7 != (IAdUIManager *)0x0) {
      uVar8 = 0;
      pIVar9 = pIVar7->klass;
      uVar10._0_1_ = (pIVar9->_1).rank;
      uVar10._1_1_ = (pIVar9->_1).minimumAlignment;
      if (uVar10 != 0) {
        do {
          if (pIVar9->interfaceOffsets[uVar8].interfaceType ==
              (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager) {
            pVVar11 = &(pIVar9->vtable).AdShowing + (pIVar9->interfaceOffsets[uVar8].offset + 4);
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar10);
      }
      pVVar11 = (VirtualInvokeData *)FUN_?(pIVar7);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar11->methodPtr)(pIVar7,3,pVVar11->method,pVVar11->methodPtr);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RewardedAdShownSDKCallback(RewardedAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_RewardedAdShownSDKCallback
               (WebAdManager *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EmbeddedSite);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Rewarded);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RewardedAdShownSDKCallback___tim);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_RewardedShown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RewardedAdShownSDKCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RewardedAdShownSDKCallback___Rew);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_RewardedShown_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_RewardedAdShownSDKCallback__,pSVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  if ((this->fields).timeoutAdAfterDelayAsUnlocked != 0) {
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    fVar5 = (float)(*pcRam_?)();
    pSVar2 = StringLiteral_RewardedAdShownSDKCallback___tim;
    if ((float)(this->fields).timeoutSuccessDelay <= fVar5 - (this->fields).timeOfRewardedAdStart)
    {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar2,(MethodInfo *)0x0);
      result = RewardedAdResult__Enum_RewardUnlocked;
      goto code_?;
    }
  }
  if ((1 < result - RewardedAdResult__Enum_RewardUnlocked) &&
     ((this->fields).siteData.allowsFallbackAds != 0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<bool,_System::String>);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnRewardedAdShownCallback_bool__System__String_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_RequestNonEmbeddedRewardedAd___n);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_showRewardedVideoAd);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar2 = StringLiteral_RequestNonEmbeddedRewardedAd___n;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0)
    ;
    pOVar6 = (Object__Class *)FUN_?(TypeInfo__System__Action<bool,_System::String>);
    FUN_?(pOVar6,this,
                  MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnRewardedAdShownCallback_bool__System__String_
                 );
    if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar2 = StringLiteral_showRewardedVideoAd;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__BrowserComm,pOVar6,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__BrowserComm__Callback);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Object);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Would_have_sent_function__);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_callbackId);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral___to_JSBridge_with_callback__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
      FUN_?();
    }
    str0 = StringLiteral_Would_have_sent_function__;
    pSVar7 = StringLiteral___to_JSBridge_with_callback__;
    if (TypeInfo__BrowserComm->static_fields->enableExternalCall != 0) {
      if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_01 = TypeInfo__BrowserComm->static_fields->callbacks;
      if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__BrowserComm__ToJavaScript);
      }
      key = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
      pOVar8 = (Object *)FUN_?(TypeInfo__BrowserComm__Callback);
      bVar9 = iRam_? != 0;
      pOVar8[1].klass = pOVar6;
      if (bVar9) {
        uVar10 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
        in_R9 = (ulonglong)(uVar10 & 0x3f);
        puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar12 = *puVar11;
          LOCK();
          uVar13 = *puVar11;
          if (uVar12 == uVar13) {
            *puVar11 = uVar12 | 1L << in_R9;
          }
          UNLOCK();
        } while (uVar12 != uVar13);
      }
      if (this_01 != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0) {
        uVar4 = CONCAT71((int7)(in_R9 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,pOVar8,
                   (InsertionBehavior__Enum)uVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                   ->klass->rgctx_data[0x22].method);
        this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        aiStackX_20[0] = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
        pOVar8 = (Object *)FUN_?(uRam_?,aiStackX_20);
        if (this_02 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_02,
                     (Object *)StringLiteral_callbackId,pOVar8,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar7 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                              ((Object *)this_02,(MethodInfo *)0x0);
          pSVar2 = BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ToNameSpace
                              (pSVar2,(MethodInfo *)0x0);
          args = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
          if (args != (Object__Array *)0x0) {
            if ((pSVar7 != (String *)0x0) &&
               (lVar14 = FUN_?(pSVar7,(args->klass->_0).element_class), lVar14 == 0)) {
              uVar4 = FUN_?();
              FUN_?(uVar4,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FUN_?(args,0);
            pSVar2 = JSBridge::JSBridge_BuildInvocationForArguments(pSVar2,args,(MethodInfo *)0x0)
            ;
            JSBridge::JSBridge_DoKGMEval(pSVar2,(MethodInfo *)0x0);
            TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter =
                 TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter + 1;
            return;
          }
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pOVar6 == (Object__Class *)0x0) {
      str3 = (String *)0x0;
    }
    else {
      pIVar15 = (pOVar6->_0).image;
      str3 = (String *)(*(code *)pIVar15[5].name)(pOVar6,pIVar15[5].nameNoExt);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_6
                        (str0,pSVar2,pSVar7,str3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0)
    ;
    return;
  }
code_?:
  pSVar2 = StringLiteral_RewardedAdShownSDKCallback___Rew;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_Ad_RewardedShown;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar2,1,(MethodInfo *)0x0);
  EStack_1.klass = (Enum__Class *)TypeInfo__EmbeddedSite;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_Ad_RewardedShown_,pSVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar2,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar16 != (MVGameControllerBase *)0x0) &&
      (pMVar17 = (pMVar16->fields).game, pMVar17 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar17->fields).operationRequests,
     this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
              (this_00,AdType__Enum_RewardedAd,AdActionType__Enum_Success,AdContext__Enum_None,
               (MethodInfo *)0x0);
    WebAdManager_SetFinishedWatchingAd(this,StringLiteral_Rewarded,(MethodInfo *)0x0);
    if (result == RewardedAdResult__Enum_RewardUnlocked) {
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      fVar5 = (float)(*pcRam_?)();
      (this->fields).lastSeenRewardedAd = fVar5;
    }
    pIVar18 = (this->fields).adUIManager;
    if (pIVar18 != (IAdUIManager *)0x0) {
      uVar19 = 0;
      pIVar20 = pIVar18->klass;
      uVar21._0_1_ = (pIVar20->_1).rank;
      uVar21._1_1_ = (pIVar20->_1).minimumAlignment;
      if (uVar21 != 0) {
        do {
          if (pIVar20->interfaceOffsets[uVar19].interfaceType ==
              (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager) {
            pVVar22 = &(pIVar20->vtable).AdShowing + (pIVar20->interfaceOffsets[uVar19].offset + 4);
            goto code_?;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar21);
      }
      pVVar22 = (VirtualInvokeData *)FUN_?(pIVar18);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar22->methodPtr)(pIVar18,(ulonglong)result,pVVar22->method,pVVar22->methodPtr);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SendRequestStats(Boolean, AdContext) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_SendRequestStats
               (WebAdManager *this,bool rewarded,AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_RewardRequest_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_InterstitialRequest_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_RewardRequest);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_InterstitialRequest);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Ad_InterstitialRequest;
  if (rewarded != 0) {
    pSVar1 = StringLiteral_Ad_RewardRequest;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_Ad_InterstitialRequest_;
  if (rewarded != 0) {
    pSVar1 = StringLiteral_Ad_RewardRequest_;
  }
  EStackY_28.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
  EStackY_28.monitor = (MonitorData *)0xffffffffffffffff;
  str1 = mscorlib.dll::System::Enum::Enum_ToString(&EStackY_28,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,str1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (pMVar4 = (pMVar3->fields).operationRequests, pMVar4 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    uVar5 = 0;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ,rewarded,0,0);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    value = (Object *)FUN_?(uRam_?,&stack0x00000010);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar6 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xc1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0xc1,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),method_00);
      pPVar7 = (pMVar4->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar7 != (PhotonPeer *)0x0) {
        (*(pPVar7->klass->vtable).SendOperation.methodPtr)
                  (pPVar7,CONCAT71((int7)((ulonglong)uVar6 >> 8),0x76),this_00,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
        return;
      }
    }
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SendStat(String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_SendStat
               (String *stat,MethodInfo *method)

{
  if (cRam_? == '\0') {
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper,1,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_standalone__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_fts__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_fts_standalone__1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__StatHatWrapper);
  }
  if ((TypeInfo__StatHatWrapper->static_fields->statHatConfig).isEnabled != 0) {
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__StatHatWrapper);
    }
    pSVar2 = StringLiteral__0__u__1_;
    PStack_3._arg0 = (Object *)0x0;
    PStack_3._arg1 = (Object *)0x0;
    PStack_3._arg2 = (Object *)0x0;
    PStack_3._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_3,
               (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
               (Object *)stat,(MethodInfo *)0x0);
    PStack_1._arg0 = PStack_3._arg0;
    PStack_1._arg1 = PStack_3._arg1;
    PStack_1._arg2 = PStack_3._arg2;
    PStack_1._args = PStack_3._args;
    pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar2,&PStack_1,(MethodInfo *)0x0);
    pSVar2 = StringLiteral__0__u_standalone__1_;
    PStack_1._arg0 = (Object *)0x0;
    PStack_1._arg1 = (Object *)0x0;
    PStack_1._arg2 = (Object *)0x0;
    PStack_1._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_1,
               (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
               (Object *)stat,(MethodInfo *)0x0);
    PStack_5._arg0 = PStack_1._arg0;
    PStack_5._arg1 = PStack_1._arg1;
    PStack_5._arg2 = PStack_1._arg2;
    PStack_5._args = PStack_1._args;
    pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar2,&PStack_5,(MethodInfo *)0x0);
    StatHatWrapper::StatHatWrapper_Count_1(pSVar4,pSVar2,1,(MethodInfo *)0x0);
    if (TypeInfo__StatHatWrapper->static_fields->isFirstTimeSession != 0) {
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__StatHatWrapper);
      }
      pSVar2 = StringLiteral__0__u_fts__1_;
      PStack_1._arg0 = (Object *)0x0;
      PStack_1._arg1 = (Object *)0x0;
      PStack_1._arg2 = (Object *)0x0;
      PStack_1._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_1,
                 (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                 (Object *)stat,(MethodInfo *)0x0);
      PStack_5._arg0 = PStack_1._arg0;
      PStack_5._arg1 = PStack_1._arg1;
      PStack_5._arg2 = PStack_1._arg2;
      PStack_5._args = PStack_1._args;
      pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar2,&PStack_5,(MethodInfo *)0x0);
      pSVar2 = StringLiteral__0__u_fts_standalone__1_;
      PStack_3._arg0 = (Object *)0x0;
      PStack_3._arg1 = (Object *)0x0;
      PStack_3._arg2 = (Object *)0x0;
      PStack_3._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_3,
                 (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                 (Object *)stat,(MethodInfo *)0x0);
      PStack_5._arg0 = PStack_3._arg0;
      PStack_5._arg1 = PStack_3._arg1;
      PStack_5._arg2 = PStack_3._arg2;
      PStack_5._args = PStack_3._args;
      pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar2,&PStack_5,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Count_1(pSVar4,pSVar2,1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void SetFinishedWatchingAd(String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_SetFinishedWatchingAd(WebAdManager *this,String *adType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
    LOCK();
    UNLOCK();
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?(&StringLiteral_Finished);
    LOCK();
    UNLOCK();
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?(&StringLiteral_Finished_);
    LOCK();
    UNLOCK();
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?(&StringLiteral__Success);
    LOCK();
    UNLOCK();
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?(&StringLiteral_Ad_);
    LOCK();
    UNLOCK();
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?(&StringLiteral__Failure);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).showingAd = 0;
  PStackY_68._arg1 = (Object *)&UNK_?;
  pSVar1 = mscorlib.dll::System::String::String_Concat_5
                     (StringLiteral_Ad_,adType,StringLiteral_Finished,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?();
  }
  PStackY_68._arg1 = (Object *)&UNK_?;
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  PStack_2._arg0 = (Object *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
  PStack_2._arg2 = (Object *)CONCAT44(PStack_2._arg2._4_4_,(this->fields).currentAdType);
  PStack_2._arg1 = (Object *)0xffffffffffffffff;
  PStackY_68._arg1 = (Object *)&UNK_?;
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&PStack_2,(MethodInfo *)0x0);
  PStackY_68._arg1 = (Object *)&UNK_?;
  pSVar1 = mscorlib.dll::System::String::String_Concat_6
                     (StringLiteral_Ad_,adType,StringLiteral_Finished_,pSVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?();
  }
  PStackY_68._arg1 = (Object *)&UNK_?;
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  if ((this->fields).probablyWatchingAd == 0) {
    PStackY_68._arg1 = (Object *)&UNK_?;
    values = (String__Array *)FUN_?(TypeInfo__System__String);
    if (values == (String__Array *)0x0) {
code_?:
      PStackY_68._arg1 = (Object *)&UNK_?;
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?(values,0,StringLiteral_Ad_);
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?(values,1,adType);
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?(values,2,StringLiteral_Finished_);
    PStack_2._arg0 = (Object *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
    PStack_2._arg2 = (Object *)CONCAT44(PStack_2._arg2._4_4_,(this->fields).currentAdType);
    PStack_2._arg1 = (Object *)0xffffffffffffffff;
    PStackY_68._arg1 = (Object *)&UNK_?;
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&PStack_2,(MethodInfo *)0x0);
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?(values,3,pSVar1);
    pSVar1 = StringLiteral__Failure;
  }
  else {
    (this->fields).probablyWatchingAd = 0;
    PStackY_68._arg1 = (Object *)&UNK_?;
    values = (String__Array *)FUN_?(TypeInfo__System__String,5);
    if (values == (String__Array *)0x0) goto code_?;
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?(values,0,StringLiteral_Ad_);
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?(values,1,adType);
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?(values,2,StringLiteral_Finished_);
    PStack_2._arg0 = (Object *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
    PStack_2._arg2 = (Object *)CONCAT44(PStack_2._arg2._4_4_,(this->fields).currentAdType);
    PStack_2._arg1 = (Object *)0xffffffffffffffff;
    PStackY_68._arg1 = (Object *)&UNK_?;
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&PStack_2,(MethodInfo *)0x0);
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?(values,3,pSVar1);
    pSVar1 = StringLiteral__Success;
  }
  PStackY_68._arg1 = (Object *)&UNK_?;
  FUN_?(values,4,pSVar1);
  PStackY_68._arg1 = (Object *)&UNK_?;
  pSVar1 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    PStackY_68._arg1 = (Object *)&UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper,1,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_standalone__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_fts__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_fts_standalone__1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__StatHatWrapper);
  }
  if ((TypeInfo__StatHatWrapper->static_fields->statHatConfig).isEnabled != 0) {
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__StatHatWrapper);
    }
    pSVar4 = StringLiteral__0__u__1_;
    PStackY_68._arg0 = (Object *)0x0;
    PStackY_68._arg1 = (Object *)0x0;
    PStackY_68._arg2 = (Object *)0x0;
    PStackY_68._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStackY_68,
               (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
               (Object *)pSVar1,(MethodInfo *)0x0);
    pOStackY_48 = PStackY_68._arg0;
    pOStackY_40 = PStackY_68._arg1;
    pSVar5 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar4,(ParamsArray *)&pOStackY_48,(MethodInfo *)0x0)
    ;
    pSVar4 = StringLiteral__0__u_standalone__1_;
    pOStackY_48 = (Object *)0x0;
    pOStackY_40 = (Object *)0x0;
    pOVar6 = (Object *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              ((ParamsArray *)&pOStackY_48,
               (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
               (Object *)pSVar1,(MethodInfo *)0x0);
    PStack_2._arg0 = pOStackY_48;
    PStack_2._arg1 = pOStackY_40;
    PStack_2._args = (Object__Array *)0x0;
    PStack_2._arg2 = pOVar6;
    pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar4,&PStack_2,(MethodInfo *)0x0);
    StatHatWrapper::StatHatWrapper_Count_1(pSVar5,pSVar4,1,(MethodInfo *)0x0);
    if (TypeInfo__StatHatWrapper->static_fields->isFirstTimeSession != 0) {
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__StatHatWrapper);
      }
      pSVar4 = StringLiteral__0__u_fts__1_;
      pOStackY_48 = (Object *)0x0;
      pOStackY_40 = (Object *)0x0;
      pOVar6 = (Object *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                ((ParamsArray *)&pOStackY_48,
                 (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                 (Object *)pSVar1,(MethodInfo *)0x0);
      PStack_2._arg0 = pOStackY_48;
      PStack_2._arg1 = pOStackY_40;
      PStack_2._args = (Object__Array *)0x0;
      PStack_2._arg2 = pOVar6;
      pSVar5 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar4,&PStack_2,(MethodInfo *)0x0);
      pSVar4 = StringLiteral__0__u_fts_standalone__1_;
      PStackY_68._arg0 = (Object *)0x0;
      PStackY_68._arg1 = (Object *)0x0;
      PStackY_68._arg2 = (Object *)0x0;
      PStackY_68._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStackY_68,
                 (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                 (Object *)pSVar1,(MethodInfo *)0x0);
      PStack_2._arg0 = PStackY_68._arg0;
      PStack_2._arg1 = PStackY_68._arg1;
      PStack_2._arg2 = PStackY_68._arg2;
      PStack_2._args = PStackY_68._args;
      pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar4,&PStack_2,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Count_1(pSVar5,pSVar1,1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void StartedWatchingAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_StartedWatchingAd(WebAdManager *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  (this->fields).showingAd = 1;
  (this->fields).probablyWatchingAd = 0;
  pcVar2 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcVar1)();
  (this->fields).probablyWatchingAdStarted = fVar4;
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_UpdateControllerUpdate(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool,_System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__WebCallbackAdAvailable_bool__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__WebCallbackRewardedAdAvailable_bool__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Requesting_ad);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_requestRewardedVideoAd);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_requestVideoAd);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  message = StringLiteral_Requesting_ad;
  if (_UNK_? <= fVar3 - (this->fields).updateTime) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0)
    ;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    (this->fields).updateTime = fVar3;
    pAVar4 = (Action_2_Boolean_String_ *)
             FUN_?(TypeInfo__System__Action<bool,_System::String>);
    FUN_?(pAVar4,this);
    if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
      FUN_?();
    }
    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_2
              (StringLiteral_requestVideoAd,pAVar4,(MethodInfo *)0x0);
    pAVar4 = (Action_2_Boolean_String_ *)
             FUN_?(TypeInfo__System__Action<bool,_System::String>);
    FUN_?(pAVar4,this);
    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_2
              (StringLiteral_requestRewardedVideoAd,pAVar4,(MethodInfo *)0x0);
  }
  if (((this->fields).showingAd != 0) && ((this->fields).probablyWatchingAd == 0)) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    if (_UNK_? <= fVar3 - (this->fields).probablyWatchingAdStarted) {
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
  if (cRam_? == '\0') {
    FUN_?(&
                  Assets__Scripts__AdIntegration__Web__WebAdManager__JSONAdReturnedData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONAdReturnedData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WebCallbackAdAvailable__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WebCallbackAdAvailable);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).webReturnedAvailabilityInterstitial = 0;
  pSVar1 = StringLiteral_WebCallbackAdAvailable;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  if (ok != 0) {
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar2 = FUN_?(jsonData);
    (this->fields).webReturnedAvailabilityInterstitial = bVar2;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_False);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_True);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar1 = StringLiteral_False;
    if ((this->fields).webReturnedAvailabilityInterstitial != 0) {
      pSVar1 = StringLiteral_True;
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_WebCallbackAdAvailable__,pSVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void WebCallbackRewardedAdAvailable(Boolean, String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_WebCallbackRewardedAdAvailable
               (WebAdManager *this,bool ok,String *jsonData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  Assets__Scripts__AdIntegration__Web__WebAdManager__JSONAdReturnedData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONAdReturnedData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WebCallbackAdAvailable__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).webReturnedAvailabilityRewardedAd = 0;
  if (ok != 0) {
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar1 = FUN_?(jsonData);
    (this->fields).webReturnedAvailabilityRewardedAd = bVar1;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_False);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_True);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar2 = StringLiteral_False;
    if ((this->fields).webReturnedAvailabilityRewardedAd != 0) {
      pSVar2 = StringLiteral_True;
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_WebCallbackAdAvailable__,pSVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  }
  return;
}


/* WebAdManager() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager__ctor
               (WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).webReturnedAvailabilityInterstitial = 1;
  (this->fields).webReturnedAvailabilityRewardedAd = 1;
  (this->fields).updateTime = -60.0;
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__DateTime);
  }
  (this->fields).prevInterstitialTime._dateData =
       (TypeInfo__System__DateTime->static_fields->MinValue)._dateData;
  (this->fields).timeoutSuccessDelay = 0x1e;
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_
                  ,2,1,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&uStack_2 >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  uStack_6 = 2;
  uStack_7 = 1;
  uStack_2 = this;
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UpdateController);
  }
  pLVar8 = TypeInfo__UpdateController->static_fields->updateBuckets;
  if (pLVar8 != (List_1_PriorityDataUpdate___Array *)0x0) {
    if ((uint)pLVar8->max_length < 3) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (pLVar8->vector[2] != (List_1_PriorityDataUpdate_ *)0x0) {
      uStack_10 = (undefined4)uStack_2;
      uStack_11 = uStack_2._4_4_;
      uStack_12 = uStack_6;
      uStack_13 = uStack_7;
      FUN_?(pLVar8->vector[2],&uStack_10,
                    MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_
                   );
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean get_ReadyForInterstitialAdRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_get_ReadyForInterstitialAdRequest(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).webReturnedAvailabilityInterstitial != 0) {
    if ((this->fields).adUIManager == (IAdUIManager *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    cVar3 = FUN_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    if (cVar3 == '\0') {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      pcRam_? = pcVar1;
      fVar5 = (float)(*pcRam_?)();
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
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).webReturnedAvailabilityRewardedAd == 0) {
    return 0;
  }
  if ((this->fields).adUIManager != (IAdUIManager *)0x0) {
    bVar1 = FUN_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    return bVar1 ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* String get_RewardedAdNotAvailableText() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
         WebAdManager_get_RewardedAdNotAvailableText(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Please_ensure_AdBlock_is_disable);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Please_ensure_AdBlock_is_disable;
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

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
         WebAdManager_get_TimeSinceLastAd(WebAdManager *this,MethodInfo *method)

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
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  d1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  TVar1 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                    (d1,(DateTime)(this->fields).prevInterstitialTime._dateData,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  TVar2._ticks = (TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TVar1._ticks <= TVar2._ticks) {
    TVar2 = TVar1;
  }
  return (TimeSpan)TVar2._ticks;
}


/* TimeSpan get_TimeSinceLastInterstitial() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
         WebAdManager_get_TimeSinceLastInterstitial(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  DVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  uVar2 = (this->fields).prevInterstitialTime._dateData;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime,uVar2,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  return (TimeSpan)((DVar1._dateData & 0x3fffffffffffffff) - (uVar2 & 0x3fffffffffffffff));
}


/* TimeSpan get_TimeSinceLastRewarded() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
         WebAdManager_get_TimeSinceLastRewarded(WebAdManager *this,MethodInfo *method)

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

