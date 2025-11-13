
/* Void <RequestRewardedAd>b__1() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager+<>c__DisplayClass46_0::
     WebAdManager_c_DisplayClass46_0__RequestRewardedAd_b__1
               (WebAdManager_c_DisplayClass46_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__RewardedAdShownSDKCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_embedded_sdk_available_and_initi);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Embedded_sdk_not_available_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Fallback_ads_not_allowed__finish);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Allowing_fallback_ads__requestin);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).__4__this;
  if ((pWVar1 != (WebAdManager *)0x0) && ((pWVar1->fields).adUIManager != (IAdUIManager *)0x0)) {
    FUN_?(2);
    pWVar1 = (this->fields).__4__this;
    if (pWVar1 != (WebAdManager *)0x0) {
      if ((pWVar1->fields).embeddedSiteSDKAvailable != 0) {
        if ((pWVar1->fields).sdkManager == (IAdManager *)0x0) goto code_?;
        cVar2 = FUN_?(4);
        pSVar3 = StringLiteral_embedded_sdk_available_and_initi;
        if (cVar2 != '\0') {
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
                    ((Object *)pSVar3,(MethodInfo *)0x0);
          pWVar1 = (this->fields).__4__this;
          if (pWVar1 != (WebAdManager *)0x0) {
            pIVar4 = (pWVar1->fields).sdkManager;
            this_00 = (UnityAction_1_System_Int32Enum_ *)
                      FUN_?(
                                   TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (this_00,(Object *)pWVar1,
                       MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__RewardedAdShownSDKCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                       ,(MethodInfo *)0x0);
            if (pIVar4 != (IAdManager *)0x0) {
              FUN_?();
              return;
            }
          }
          goto code_?;
        }
      }
      pSVar3 = StringLiteral_Embedded_sdk_not_available_;
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
                ((Object *)pSVar3,(MethodInfo *)0x0);
      message = StringLiteral_Fallback_ads_not_allowed__finish;
      pSVar3 = StringLiteral_Allowing_fallback_ads__requestin;
      pWVar1 = (this->fields).__4__this;
      if (pWVar1 != (WebAdManager *)0x0) {
        if ((pWVar1->fields).siteData.allowsFallbackAds == 0) {
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
          this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                      (this_01,AdType__Enum_RewardedAd,AdActionType__Enum_Failure,
                       (this->fields).context,(MethodInfo *)0x0);
            pWVar1 = (this->fields).__4__this;
            if ((pWVar1 != (WebAdManager *)0x0) &&
               (pIVar5 = (pWVar1->fields).adUIManager, pIVar5 != (IAdUIManager *)0x0)) {
              FUN_?(4,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar5,4);
              return;
            }
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
                    ((Object *)pSVar3,(MethodInfo *)0x0);
          pWVar1 = (this->fields).__4__this;
          if (pWVar1 != (WebAdManager *)0x0) {
            WebAdManager::WebAdManager_RequestNonEmbeddedRewardedAd(pWVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

