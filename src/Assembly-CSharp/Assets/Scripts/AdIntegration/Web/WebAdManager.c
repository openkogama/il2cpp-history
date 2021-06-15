
/* Void CreateAdManagerHack() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_CreateAdManagerHack(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Creating_an_ad_manager_that_shou,(MethodInfo *)0x0);
  method_00 = TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields).sdkManager = (IAdManager *)this_00;
  (this->fields).embeddedSiteSDKAvailable = 1;
  return;
}


/* Void ForceCreateEmbeddedSiteSDK(EmbeddedSiteConfigData) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_ForceCreateEmbeddedSiteSDK
               (WebAdManager *this,EmbeddedSiteConfigData site,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar1 = (int *)func_?(TypeInfo__EmbeddedSiteConfigData,&site);
  if (piVar1 != (int *)0x0) {
    pSVar2 = (String *)(**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
    puVar3 = (undefined4 *)func_?(piVar1);
    site.sites = (List_1_System_String_ *)*puVar3;
    site.siteEnum = puVar3[1];
    site._8_4_ = puVar3[2];
    site._12_4_ = puVar3[3];
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Creating_,pSVar2,
                        StringLiteral__admanager_forcefully_through_ch,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
    method_00 = TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager;
    this_00 = (Il2CppClass *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play
              ((ScaleAnimationBase *)this_00,0.0,(MethodInfo *)method_00);
    (method_00->_0).castClass = this_00;
    (method_00->_0).parent = (Il2CppClass *)site.sites;
    (method_00->_0).generic_class = (Il2CppGenericClass *)site.siteEnum;
    (method_00->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)site._8_4_;
    (method_00->_0).interopData = (Il2CppInteropData *)site._12_4_;
    *(undefined1 *)&(method_00->_0).declaringType = 1;
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InitializeAdConfigSettings(AdConfigSettings) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_InitializeAdConfigSettings
               (WebAdManager *this,AdConfigSettings *config,MethodInfo *method)

{
  if (config != (AdConfigSettings *)0x0) {
    pEVar1 = AdConfigSettings::AdConfigSettings_get_EmbeddedSiteConfigData
                        (&EStack_2,config,(MethodInfo *)0x0);
    iVar3 = pEVar1->siteEnum;
    bVar4 = pEVar1->showTouristPromotion;
    bVar5 = pEVar1->allowsOpenInNewTab;
    bVar6 = pEVar1->allowsRedirectToWebpage;
    bVar7 = pEVar1->allowsModals;
    bVar8 = pEVar1->integratedSdk;
    bVar9 = pEVar1->allowsFallbackAds;
    bVar10 = pEVar1->showPlayButtonAd;
    uVar11 = pEVar1->field_0xf;
    (this->fields).siteData.sites = pEVar1->sites;
    (this->fields).siteData.siteEnum = iVar3;
    (this->fields).siteData.showTouristPromotion = bVar4;
    (this->fields).siteData.allowsOpenInNewTab = bVar5;
    (this->fields).siteData.allowsRedirectToWebpage = bVar6;
    (this->fields).siteData.allowsModals = bVar7;
    (this->fields).siteData.integratedSdk = bVar8;
    (this->fields).siteData.allowsFallbackAds = bVar9;
    (this->fields).siteData.showPlayButtonAd = bVar10;
    (this->fields).siteData.field_0xf = uVar11;
    bVar4 = SubscribableVariableBase`1[System::Boolean]::
             SubscribableVariableBase_1_System_Boolean__get_Value
                       ((SubscribableVariableBase_1_System_Boolean_ *)config,(MethodInfo *)0x0);
    (this->fields).timeoutAdAfterDelayAsUnlocked = bVar4;
    pOVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)config,
                         (MethodInfo *)0x0);
    (this->fields).timeoutSuccessDelay = (int32_t)pOVar12;
    pOVar12 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
              ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]
              ::
              Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                        ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                          *)config,(MethodInfo *)0x0);
    (this->fields).interstitialTimeoutAfterRewardedAd = (float)(int)pOVar12;
    return;
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void InitializeCallbackManager(IAdUIManager) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_InitializeCallbackManager
               (WebAdManager *this,IAdUIManager *adUIManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).adUIManager = adUIManager;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).embedded != 0) {
      if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVClientSettings);
      }
      bVar2 = MVClientSettings::MVClientSettings_get_WebAdSDKsEnabled((MethodInfo *)0x0);
      if ((bVar2 != 0) && ((this->fields).siteData.integratedSdk != 0)) {
        method_00 = TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager;
        this_00 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
        (this->fields).sdkManager = (IAdManager *)this_00;
        (this->fields).embeddedSiteSDKAvailable = 1;
      }
    }
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InterstitialAdShownSDKCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_InterstitialAdShownSDKCallback
               (WebAdManager *this,InterstitialAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  IVar1 = result;
  pOVar2 = (Object *)
           func_?(TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult,&result);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_InterstitialAdShownSDKCallback__,pOVar2,
                      (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  if ((IVar1 != InterstitialAdResult__Enum_Done) && ((this->fields).siteData.allowsFallbackAds != 0)
     ) {
    WebAdManager_RequestNonEmbeddedInterstitialAd(this,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Interstitial_ad_shown_,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->_1).cctor_started == 0)) {
    method = (MethodInfo *)TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager;
    result = (InterstitialAdResult__Enum)&UNK_?;
    func_?();
  }
  pSVar3 = StringLiteral_Ad_InterstitialShown;
  if (cRam_? == '\0') {
    method = _UNK_?;
    result = (InterstitialAdResult__Enum)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    method = (MethodInfo *)TypeInfo__StatHatWrapper;
    result = (InterstitialAdResult__Enum)&UNK_?;
    func_?();
  }
  method = (MethodInfo *)0x0;
  result = InterstitialAdResult__Enum_ErrorInternal;
  StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
  method = (MethodInfo *)&result;
  result = (InterstitialAdResult__Enum)TypeInfo__EmbeddedSite;
  pOVar2 = (Object *)func_?();
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  method = (MethodInfo *)&UNK_?;
  pSVar3 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_Ad_InterstitialShown_,pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
  WebAdManager_SetFinishedWatchingAd(this,StringLiteral_Interstitial,(MethodInfo *)0x0);
  pIStack4 = (this->fields).adUIManager;
  if (pIStack4 != (IAdUIManager *)0x0) {
    uStack5 = 3;
    pIStack6 = TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager;
    uStack7 = 3;
    uStack8 = 0;
    func_?();
    return;
  }
  uStack5 = 0;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnInterstitialShownCallback(Boolean, String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_OnInterstitialShownCallback
               (WebAdManager *this,bool ok,String *json,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager);
  }
  pSVar1 = StringLiteral_Ad_InterstitialShown;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_Ad_InterstitialShown_Kogama;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  WebAdManager_SetFinishedWatchingAd(this,StringLiteral_Interstitial,(MethodInfo *)0x0);
  if ((this->fields).adUIManager != (IAdUIManager *)0x0) {
    pIStack2 = TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager;
    func_?();
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Interstitial_ad_shown_,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnRewardedAdShownCallback(Boolean, String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_OnRewardedAdShownCallback
               (WebAdManager *this,bool ok,String *json,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  iVar4 = 4;
  if (ok != 0) {
    uStack_1 = 0;
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    WVar5 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_12
                      (json,
                       Assets__Scripts__AdIntegration__Web__WebAdManager__JSONRewardedAdSuccessful_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONRewardedAdSuccessful>_System__String_
                      );
    if (WVar5.status != 0) {
      if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->_1).cctor_started == 0)) {
        func_?();
      }
      WebAdManager_SendStat(StringLiteral_Ad_RewardedShown,(MethodInfo *)0x0);
      WebAdManager_SendStat(StringLiteral_Ad_RewardedShown_Kogama,(MethodInfo *)0x0);
      iVar4 = 3;
    }
    uStack_1 = 0xffffffff;
  }
  if ((this->fields).timeoutAdAfterDelayAsUnlocked != 0) {
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((float)(this->fields).timeoutSuccessDelay <= fVar6 - (this->fields).timeOfRewardedAdStart) {
      iVar4 = 3;
    }
  }
  WebAdManager_SetFinishedWatchingAd(this,StringLiteral_Rewarded,(MethodInfo *)0x0);
  if (iVar4 == 3) {
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).lastSeenRewardedAd = fVar6;
  }
  if ((this->fields).adUIManager != (IAdUIManager *)0x0) {
    func_?();
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).adUIManager;
  if (pIVar1 != (IAdUIManager *)0x0) {
    cVar2 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1);
    if (cVar2 == '\0') {
      (this->fields).currentAdType = context;
      (this->fields).showingAd = 1;
      (this->fields).probablyWatchingAd = 0;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).probablyWatchingAdStarted = fVar3;
      WebAdManager_SendInterstitialAdRequestStats(this,context,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_RequestInterstitial,(MethodInfo *)0x0);
      pIVar1 = (this->fields).adUIManager;
      if (pIVar1 != (IAdUIManager *)0x0) {
        func_?(1,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1);
        if ((this->fields).embeddedSiteSDKAvailable != 0) {
          pIVar4 = (this->fields).sdkManager;
          if (pIVar4 == (IAdManager *)0x0) goto code_?;
          cVar2 = func_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar4);
          if (cVar2 != '\0') {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)StringLiteral_embedded_sdk_available_and_initi,(MethodInfo *)0x0);
            pIVar4 = (this->fields).sdkManager;
            this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?(
                                        TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                                        );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_00,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__InterstitialAdShownSDKCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                       ,
                       MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Action_System__Object__void__
                      );
            if (pIVar4 != (IAdManager *)0x0) {
              pIVar5 = pIVar4->klass;
              uVar6 = 0;
              uVar7._0_1_ = (pIVar5->_1).rank;
              uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
              if (uVar7 != 0) {
                do {
                  if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
                      (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                    ppMVar8 = &(&(pIVar4->klass->vtable).RequestInterstitial)
                               [pIVar5->interfaceOffsets[uVar6].offset].method;
                    goto code_?;
                  }
                  uVar6 = uVar6 + 1;
                } while (uVar6 < uVar7);
              }
              ppMVar8 = (MethodInfo **)
                        func_?(pIVar4,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,
                                        7);
code_?:
              (*(code *)*ppMVar8)(pIVar4,this_00,context,ppMVar8[1]);
              return;
            }
            goto code_?;
          }
        }
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Embedded_sdk_not_available_,(MethodInfo *)0x0);
        if ((this->fields).siteData.allowsFallbackAds != 0) {
          WebAdManager_RequestNonEmbeddedInterstitialAd(this,(MethodInfo *)0x0);
          return;
        }
        pIVar1 = (this->fields).adUIManager;
        if (pIVar1 != (IAdUIManager *)0x0) {
          func_?(3,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1,3);
          return;
        }
      }
    }
    else {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Ad_already_showing__aborting,(MethodInfo *)0x0);
      if (interstitialCB != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  ((Action_1_UIPushOption_ *)interstitialCB,UIPushOption__Enum_None,
                   MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Invoke_Assets__Scripts__AdIntegration__InterstitialAdResult_
                  );
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void RequestNonEmbeddedInterstitialAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_RequestNonEmbeddedInterstitialAd(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_no_embedded_sdk_available_initia,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<bool,_System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnInterstitialShownCallback_bool__System__String_
             ,MethodInfo__System__Action<bool,_System::String>__Action_System__Object__void__);
  if ((((uint)(TypeInfo__BrowserComm__ToJavaScript->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_no_embedded_sdk_available_initia,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<bool,_System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnRewardedAdShownCallback_bool__System__String_
             ,MethodInfo__System__Action<bool,_System::String>__Action_System__Object__void__);
  if ((((uint)(TypeInfo__BrowserComm__ToJavaScript->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).adUIManager;
  if (pIVar1 != (IAdUIManager *)0x0) {
    cVar2 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1);
    if (cVar2 == '\0') {
      (this->fields).currentAdType = context;
      (this->fields).showingAd = 1;
      (this->fields).probablyWatchingAd = 0;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).probablyWatchingAdStarted = fVar3;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).timeOfRewardedAdStart = fVar3;
      WebAdManager_SendRewardRequestStats(this,context,(MethodInfo *)0x0);
      pIVar1 = (this->fields).adUIManager;
      if (pIVar1 != (IAdUIManager *)0x0) {
        func_?(2,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1,
                        rewardedAdCallback);
        if ((this->fields).embeddedSiteSDKAvailable != 0) {
          pIVar4 = (this->fields).sdkManager;
          if (pIVar4 == (IAdManager *)0x0) goto code_?;
          cVar2 = func_?(4,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar4);
          if (cVar2 != '\0') {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)StringLiteral_embedded_sdk_available_and_initi,(MethodInfo *)0x0);
            pIVar4 = (this->fields).sdkManager;
            this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?(
                                        TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                                        );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_00,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__RewardedAdShownSDKCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                       ,
                       MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Action_System__Object__void__
                      );
            if (pIVar4 != (IAdManager *)0x0) {
              pIVar5 = pIVar4->klass;
              uVar6 = 0;
              uVar7._0_1_ = (pIVar5->_1).rank;
              uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
              if (uVar7 != 0) {
                do {
                  if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
                      (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                    ppMVar8 = &(&(pIVar4->klass->vtable).RequestRewardedAd)
                               [pIVar5->interfaceOffsets[uVar6].offset].method;
                    goto code_?;
                  }
                  uVar6 = uVar6 + 1;
                } while (uVar6 < uVar7);
              }
              ppMVar8 = (MethodInfo **)
                        func_?(pIVar4,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,
                                        6);
code_?:
              (*(code *)*ppMVar8)(pIVar4,this_00,context,ppMVar8[1]);
              return;
            }
            goto code_?;
          }
        }
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Embedded_sdk_not_available_,(MethodInfo *)0x0);
        if ((this->fields).siteData.allowsFallbackAds != 0) {
          WebAdManager_RequestNonEmbeddedRewardedAd(this,(MethodInfo *)0x0);
          return;
        }
        pIVar1 = (this->fields).adUIManager;
        if (pIVar1 != (IAdUIManager *)0x0) {
          func_?(4,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1,4);
          return;
        }
      }
    }
    else {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Ad_already_showing__aborting,(MethodInfo *)0x0);
      if (rewardedAdCallback != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  ((Action_1_UIPushOption_ *)rewardedAdCallback,UIPushOption__Enum_None,
                   MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Invoke_Assets__Scripts__AdIntegration__RewardedAdResult_
                  );
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void RewardedAdShownSDKCallback(RewardedAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_RewardedAdShownSDKCallback
               (WebAdManager *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  RVar1 = result;
  pOVar2 = (Object *)
           func_?(TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult,&result);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_RewardedAdShownSDKCallback__,pOVar2,(MethodInfo *)0x0)
  ;
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  if ((this->fields).timeoutAdAfterDelayAsUnlocked != 0) {
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((float)(this->fields).timeoutSuccessDelay <= fVar4 - (this->fields).timeOfRewardedAdStart) {
      RVar1 = RewardedAdResult__Enum_RewardUnlocked;
      goto code_?;
    }
  }
  if (((RVar1 != RewardedAdResult__Enum_RewardNotUnlocked) &&
      (RVar1 != RewardedAdResult__Enum_RewardUnlocked)) &&
     ((this->fields).siteData.allowsFallbackAds != 0)) {
    result = RewardedAdResult__Enum_ErrorClient;
    WebAdManager_RequestNonEmbeddedRewardedAd(this,(MethodInfo *)0x0);
    return;
  }
code_?:
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    result = (RewardedAdResult__Enum)TypeInfo__UnityEngine__Debug;
    func_?();
  }
  result = RewardedAdResult__Enum_ErrorClient;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Rewarded_ad_shown_,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->_1).cctor_started == 0)) {
    method = (MethodInfo *)&UNK_?;
    func_?();
  }
  pSVar3 = StringLiteral_Ad_RewardedShown;
  if (cRam_? == '\0') {
    method = _UNK_?;
    result = (RewardedAdResult__Enum)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    method = (MethodInfo *)TypeInfo__StatHatWrapper;
    result = (RewardedAdResult__Enum)&UNK_?;
    func_?();
  }
  method = (MethodInfo *)0x0;
  result = RewardedAdResult__Enum_ErrorInternal;
  StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
  method = (MethodInfo *)&result;
  result = (RewardedAdResult__Enum)TypeInfo__EmbeddedSite;
  pOVar2 = (Object *)func_?();
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  method = (MethodInfo *)&UNK_?;
  pSVar3 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_Ad_RewardedShown_,pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
  WebAdManager_SetFinishedWatchingAd(this,StringLiteral_Rewarded,(MethodInfo *)0x0);
  if (RVar1 == RewardedAdResult__Enum_RewardUnlocked) {
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).lastSeenRewardedAd = fVar4;
  }
  if ((this->fields).adUIManager != (IAdUIManager *)0x0) {
    uStack5 = 4;
    RStack6 = RVar1;
    func_?();
    return;
  }
  RStack6 = 0;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SendInterstitialAdRequestStats(AdContext) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_SendInterstitialAdRequestStats
               (WebAdManager *this,AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar1 = (int *)func_?(TypeInfo__Assets__Scripts__AdIntegration__AdContext,&context);
  if (piVar1 != (int *)0x0) {
    pSVar2 = (String *)(**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
    pAVar3 = (AdContext__Enum *)func_?(piVar1);
    context = *pAVar3;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Ad_InterstitialRequest_,pSVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar2,1,(MethodInfo *)0x0);
    pSVar2 = StringLiteral_Ad_InterstitialRequest;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar2,1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
                (this_00,IncrementStatRequestType__Enum_InterstitialAdRequest,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SendRewardRequestStats(AdContext) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_SendRewardRequestStats
               (WebAdManager *this,AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager);
  }
  pSVar1 = StringLiteral_Ad_RewardRequest;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  piVar2 = (int *)func_?(TypeInfo__Assets__Scripts__AdIntegration__AdContext,&context);
  if (piVar2 != (int *)0x0) {
    pSVar1 = (String *)(**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
    pAVar3 = (AdContext__Enum *)func_?(piVar2);
    context = *pAVar3;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Ad_RewardRequest_,pSVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
                (this_00,IncrementStatRequestType__Enum_RewardedAdRequest,0,(MethodInfo *)0x0);
      return;
    }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = this;
  (this->fields).showingAd = 0;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar2 = adType;
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Ad_,adType,StringLiteral_Finished,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
  pOVar4 = (Object__Array *)func_?(TypeInfo__System__Object,4);
  if (pOVar4 == (Object__Array *)0x0) goto code_?;
  if (StringLiteral_Ad_ == (String *)0x0) {
code_?:
    if (pOVar4->max_length == 0) goto code_?;
    pOVar4->vector[0] = (Object *)StringLiteral_Ad_;
    if (pSVar2 != (String *)0x0) {
      adType = (String *)(pOVar4->klass->_0).element_class;
      this = (WebAdManager *)pSVar2;
      iVar5 = func_?();
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pOVar4->max_length < 2) goto code_?;
    pOVar4->vector[1] = (Object *)pSVar2;
    if (StringLiteral_Finished_ != (String *)0x0) {
      adType = (String *)(pOVar4->klass->_0).element_class;
      this = (WebAdManager *)StringLiteral_Finished_;
      iVar5 = func_?();
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pOVar4->max_length < 3) goto code_?;
    pOVar4->vector[2] = (Object *)StringLiteral_Finished_;
    adType = (String *)&this;
    this = (WebAdManager *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
    this = (WebAdManager *)func_?();
    pSVar3 = (String *)0x0;
    if (this != (WebAdManager *)0x0) {
      adType = (String *)(pOVar4->klass->_0).element_class;
      iVar5 = func_?();
      pSVar3 = adType;
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    adType = (String *)0x0;
    if (pOVar4->max_length < 4) goto code_?;
    pOVar4->vector[3] = (Object *)pSVar3;
    this = (WebAdManager *)pOVar4;
    pSVar3 = mscorlib.dll::System::String::String_Concat_5(pOVar4,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      method = (MethodInfo *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      method = (MethodInfo *)&UNK_?;
      func_?();
    }
    method = (MethodInfo *)0x1;
    this = (WebAdManager *)&UNK_?;
    adType = pSVar3;
    StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
    if ((pWVar1->fields).probablyWatchingAd == 0) {
      pOVar4 = (Object__Array *)func_?();
      if (pOVar4 == (Object__Array *)0x0) goto code_?;
      if (StringLiteral_Ad_ != (String *)0x0) {
        adType = (String *)(pOVar4->klass->_0).element_class;
        this = (WebAdManager *)StringLiteral_Ad_;
        iVar5 = func_?();
        if (iVar5 != 0) goto code_?;
        goto code_?;
      }
code_?:
      if (pOVar4->max_length == 0) goto code_?;
      pOVar4->vector[0] = (Object *)StringLiteral_Ad_;
      if (pSVar2 != (String *)0x0) {
        adType = (String *)(pOVar4->klass->_0).element_class;
        this = (WebAdManager *)pSVar2;
        iVar5 = func_?();
        if (iVar5 != 0) goto code_?;
        goto code_?;
      }
code_?:
      if (pOVar4->max_length < 2) goto code_?;
      pOVar4->vector[1] = (Object *)pSVar2;
      if (StringLiteral_Finished_ != (String *)0x0) {
        adType = (String *)(pOVar4->klass->_0).element_class;
        this = (WebAdManager *)StringLiteral_Finished_;
        iVar5 = func_?();
        if (iVar5 != 0) goto code_?;
        goto code_?;
      }
code_?:
      if (pOVar4->max_length < 3) goto code_?;
      pOVar4->vector[2] = (Object *)StringLiteral_Finished_;
      adType = (String *)&this;
      this = (WebAdManager *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
      pWVar1 = (WebAdManager *)func_?();
      if (pWVar1 != (WebAdManager *)0x0) {
        adType = (String *)(pOVar4->klass->_0).element_class;
        this = pWVar1;
        iVar5 = func_?();
        if (iVar5 != 0) goto code_?;
        goto code_?;
      }
code_?:
      if (pOVar4->max_length < 4) goto code_?;
      pOVar4->vector[3] = (Object *)pWVar1;
      if (StringLiteral__Failure != (String *)0x0) {
        adType = (String *)(pOVar4->klass->_0).element_class;
        this = (WebAdManager *)StringLiteral__Failure;
        iVar5 = func_?();
        if (iVar5 != 0) goto code_?;
        goto code_?;
      }
code_?:
      pSVar2 = StringLiteral__Failure;
      if (4 < pOVar4->max_length) goto code_?;
      goto code_?;
    }
    (pWVar1->fields).probablyWatchingAd = 0;
    pOVar4 = (Object__Array *)func_?();
    if (pOVar4 == (Object__Array *)0x0) goto code_?;
    if (StringLiteral_Ad_ != (String *)0x0) {
      adType = (String *)(pOVar4->klass->_0).element_class;
      this = (WebAdManager *)StringLiteral_Ad_;
      iVar5 = func_?();
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pOVar4->max_length == 0) goto code_?;
    pOVar4->vector[0] = (Object *)StringLiteral_Ad_;
    if (pSVar2 != (String *)0x0) {
      adType = (String *)(pOVar4->klass->_0).element_class;
      this = (WebAdManager *)pSVar2;
      iVar5 = func_?();
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pOVar4->max_length < 2) goto code_?;
    pOVar4->vector[1] = (Object *)pSVar2;
    if (StringLiteral_Finished_ != (String *)0x0) {
      adType = (String *)(pOVar4->klass->_0).element_class;
      this = (WebAdManager *)StringLiteral_Finished_;
      iVar5 = func_?();
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pOVar4->max_length < 3) goto code_?;
    pOVar4->vector[2] = (Object *)StringLiteral_Finished_;
    adType = (String *)&this;
    this = (WebAdManager *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
    pWVar1 = (WebAdManager *)func_?();
    if (pWVar1 != (WebAdManager *)0x0) {
      adType = (String *)(pOVar4->klass->_0).element_class;
      this = pWVar1;
      iVar5 = func_?();
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (3 < pOVar4->max_length) {
      pOVar4->vector[3] = (Object *)pWVar1;
      if (StringLiteral__Success != (String *)0x0) {
        adType = (String *)(pOVar4->klass->_0).element_class;
        this = (WebAdManager *)StringLiteral__Success;
        iVar5 = func_?();
        if (iVar5 == 0) goto code_?;
      }
      pSVar2 = StringLiteral__Success;
      if (4 < pOVar4->max_length) {
code_?:
        pOVar4->vector[4] = (Object *)pSVar2;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          adType = (String *)TypeInfo__System__String;
          this = (WebAdManager *)&UNK_?;
          func_?();
        }
        adType = (String *)0x0;
        this = (WebAdManager *)pOVar4;
        pSVar2 = mscorlib.dll::System::String::String_Concat_5(pOVar4,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->_1).cctor_started == 0)) {
          method = (MethodInfo *)&UNK_?;
          func_?();
        }
        if (cRam_? == '\0') {
          method = (MethodInfo *)&UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
          method = (MethodInfo *)&UNK_?;
          func_?();
        }
        method = (MethodInfo *)0x1;
        this = (WebAdManager *)&UNK_?;
        adType = pSVar2;
        StatHatWrapper::StatHatWrapper_Count(pSVar2,1,(MethodInfo *)0x0);
        return;
      }
      adType = (String *)0x0;
      this = (WebAdManager *)0x0;
      func_?();
      func_?();
      goto code_?;
    }
  }
  else {
    adType = (String *)(pOVar4->klass->_0).element_class;
    this = (WebAdManager *)StringLiteral_Ad_;
    iVar5 = func_?();
    if (iVar5 != 0) goto code_?;
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)&UNK_?;
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
code_?:
    adType = (String *)0x0;
    this = (WebAdManager *)0x0;
    func_?();
    func_?();
  }
  adType = (String *)0x0;
  this = (WebAdManager *)0x0;
  func_?();
  func_?();
code_?:
  adType = (String *)0x0;
  this = (WebAdManager *)0x0;
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).updateTime;
  if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager);
  }
  if (TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->static_fields->refreshTimer <=
      fVar1 - fVar2) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Requesting_ad,(MethodInfo *)0x0);
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).updateTime = fVar2;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action<bool,_System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__WebCallbackAdAvailable_bool__System__String_
               ,MethodInfo__System__Action<bool,_System::String>__Action_System__Object__void__);
    if ((((uint)(TypeInfo__BrowserComm__ToJavaScript->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_started == 0)) {
      func_?();
    }
    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
              (StringLiteral_requestVideoAd,(Action_2_Boolean_String_ *)pUVar3,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__WebCallbackRewardedAdAvailable_bool__System__String_
               ,MethodInfo__System__Action<bool,_System::String>__Action_System__Object__void__);
    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
              (StringLiteral_requestRewardedVideoAd,(Action_2_Boolean_String_ *)pUVar3,
               (MethodInfo *)0x0);
  }
  if (((this->fields).showingAd != 0) && ((this->fields).probablyWatchingAd == 0)) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((this->fields).probablyWatchingAdDelay <= fVar2 - (this->fields).probablyWatchingAdStarted)
    {
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
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  (this->fields).webReturnedAvailabilityInterstitial = 0;
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_WebCallbackAdAvailable,(MethodInfo *)0x0);
  if (ok != 0) {
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?();
    }
    WStack2 =
         Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_13
                   (jsonData,
                    Assets__Scripts__AdIntegration__Web__WebAdManager__JSONAdReturnedData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONAdReturnedData>_System__String_
                   );
    (this->fields).webReturnedAvailabilityInterstitial = WStack2.adAvailable;
    arg1 = (Object *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    message = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_WebCallbackAdAvailable__,arg1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    uVar1 = 0;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0)
    ;
  }
  *unaff_FS_OFFSET = uVar1;
  return;
}


/* Void WebCallbackRewardedAdAvailable(Boolean, String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_WebCallbackRewardedAdAvailable
               (WebAdManager *this,bool ok,String *jsonData,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  (this->fields).webReturnedAvailabilityRewardedAd = 0;
  uStack_1 = 0;
  if (ok != 0) {
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    WStack4 =
         Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_13
                   (jsonData,
                    Assets__Scripts__AdIntegration__Web__WebAdManager__JSONAdReturnedData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONAdReturnedData>_System__String_
                   );
    (this->fields).webReturnedAvailabilityRewardedAd = WStack4.adAvailable;
    arg1 = (Object *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    message = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_WebCallbackAdAvailable__,arg1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0)
    ;
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* WebAdManager() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->static_fields->refreshTimer = 60.0;
  return;
}


/* WebAdManager() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager__ctor
               (WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).webReturnedAvailabilityInterstitial = 1;
  (this->fields).webReturnedAvailabilityRewardedAd = 1;
  if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager);
  }
  (this->fields).updateTime =
       (float)((uint)TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->static_fields->
                     refreshTimer ^ _UNK_?);
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar1 = TypeInfo__System__DateTime->static_fields;
  iVar2 = (pDVar1->MinValue).ticks._ticks;
  uVar3 = *(undefined4 *)((int)&(pDVar1->MinValue).ticks._ticks + 4);
  iVar4 = (pDVar1->MinValue).kind;
  uVar5 = *(undefined4 *)&(pDVar1->MinValue).field_0xc;
  (this->fields).probablyWatchingAdDelay = 3.0;
  (this->fields).timeoutSuccessDelay = 0x1e;
  *(int *)&(this->fields).prevInterstitialTime.ticks._ticks = (int)iVar2;
  *(undefined4 *)((int)&(this->fields).prevInterstitialTime.ticks._ticks + 4) = uVar3;
  (this->fields).prevInterstitialTime.kind = iVar4;
  *(undefined4 *)&(this->fields).prevInterstitialTime.field_0xc = uVar5;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  return;
}


/* Boolean get_ReadyForInterstitialAdRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_get_ReadyForInterstitialAdRequest(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).webReturnedAvailabilityInterstitial != 0) {
    pIVar1 = (this->fields).adUIManager;
    if (pIVar1 == (IAdUIManager *)0x0) {
      func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).webReturnedAvailabilityRewardedAd == 0) {
    return 0;
  }
  pIVar1 = (this->fields).adUIManager;
  if (pIVar1 != (IAdUIManager *)0x0) {
    cVar2 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1);
    return cVar2 == '\0';
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* String get_RewardedAdNotAvailableText() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
         WebAdManager_get_RewardedAdNotAvailableText(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Please_ensure_AdBlock_is_disable,(MethodInfo *)0x0);
  return pSVar1;
}


/* TimeSpan get_TimeSinceLastAd() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
         WebAdManager_get_TimeSinceLastAd(WebAdManager *this,MethodInfo *method)

{
  uStack_1 = 0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now
                     ((DateTime *)&stack0xffffffd4,(MethodInfo *)0x0);
  TVar3 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction
                    (*pDVar2,(this->fields).prevInterstitialTime,(MethodInfo *)0x0);
  uStack_1._4_4_ = (uint)((ulonglong)TVar3._ticks >> 0x20);
  uStack_1._0_4_ = (TimeSpan__Class *)TVar3._ticks;
  iVar4 = func_?(&uStack_1,0);
  if (cRam_? == '\0') {
    uStack_1._0_4_ = (TimeSpan__Class *)_UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
    uStack_1._0_4_ = TypeInfo__System__TimeSpan;
    func_?();
  }
  uStack_1 = (ulonglong)uStack_1._4_4_ << 0x20;
  val2 = func_?();
  mscorlib.dll::System::Math::Math_Min_3(iVar4,val2,(MethodInfo *)0x0);
  iVar4 = 0;
  func_?();
  return (TimeSpan)iVar4;
}


/* TimeSpan get_TimeSinceLastInterstitial() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
         WebAdManager_get_TimeSinceLastInterstitial(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now
                     ((DateTime *)&stack0xffffffec,(MethodInfo *)0x0);
  TVar2 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction
                    (*pDVar1,(this->fields).prevInterstitialTime,(MethodInfo *)0x0);
  return (TimeSpan)TVar2._ticks;
}


/* TimeSpan get_TimeSinceLastRewarded() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
         WebAdManager_get_TimeSinceLastRewarded(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__TimeSpan);
  }
  return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
}

