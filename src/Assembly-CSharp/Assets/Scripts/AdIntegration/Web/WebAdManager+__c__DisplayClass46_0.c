
/* Void <RequestRewardedAd>b__1() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager+<>c__DisplayClass46_0::
     WebAdManager_c_DisplayClass46_0__RequestRewardedAd_b__1
               (WebAdManager_c_DisplayClass46_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__RewardedAdShownSDKCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   );
    func_?(&StringLiteral_embedded_sdk_available_and_initi);
    func_?(&StringLiteral_Embedded_sdk_not_available_);
    func_?(&StringLiteral_Fallback_ads_not_allowed__finish);
    func_?(&StringLiteral_Allowing_fallback_ads__requestin);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).__4__this;
  if ((pWVar1 != (WebAdManager *)0x0) &&
     (pIVar2 = (pWVar1->fields).adUIManager, pIVar2 != (IAdUIManager *)0x0)) {
    func_?(2,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar2,
                    (this->fields).rewardedAdCallback);
    pWVar1 = (this->fields).__4__this;
    if (pWVar1 != (WebAdManager *)0x0) {
      if ((pWVar1->fields).embeddedSiteSDKAvailable != 0) {
        pIVar3 = (pWVar1->fields).sdkManager;
        if (pIVar3 == (IAdManager *)0x0) goto code_?;
        cVar4 = func_?(4,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar3);
        pSVar5 = StringLiteral_embedded_sdk_available_and_initi;
        if (cVar4 != '\0') {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Debug);
            cRam_? = '\x01';
          }
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar5,(MethodInfo *)0x0);
          pWVar1 = (this->fields).__4__this;
          if (pWVar1 != (WebAdManager *)0x0) {
            pIVar3 = (pWVar1->fields).sdkManager;
            this_00 = (UnityAction_1_System_Int32Enum_ *)
                      func_?(
                                     TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                                     );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (this_00,(Object *)pWVar1,
                       MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__RewardedAdShownSDKCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                       ,(MethodInfo *)0x0);
            if (pIVar3 != (IAdManager *)0x0) {
              func_?(6,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar3,this_00,
                              (this->fields).context);
              return;
            }
          }
          goto code_?;
        }
      }
      pSVar5 = StringLiteral_Embedded_sdk_not_available_;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Debug);
        cRam_? = '\x01';
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar5,(MethodInfo *)0x0);
      message = StringLiteral_Allowing_fallback_ads__requestin;
      pSVar5 = StringLiteral_Fallback_ads_not_allowed__finish;
      pWVar1 = (this->fields).__4__this;
      if (pWVar1 != (WebAdManager *)0x0) {
        if ((pWVar1->fields).siteData.allowsFallbackAds == 0) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Debug);
            cRam_? = '\x01';
          }
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar5,(MethodInfo *)0x0);
          this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                      (this_01,AdType__Enum_RewardedAd,AdActionType__Enum_Failure,
                       (this->fields).context,(MethodInfo *)0x0);
            pWVar1 = (this->fields).__4__this;
            if ((pWVar1 != (WebAdManager *)0x0) &&
               (pIVar2 = (pWVar1->fields).adUIManager, pIVar2 != (IAdUIManager *)0x0)) {
              func_?(4,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar2,4);
              return;
            }
          }
        }
        else {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Debug);
            cRam_? = '\x01';
          }
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)message,(MethodInfo *)0x0);
          pWVar1 = (this->fields).__4__this;
          if (pWVar1 != (WebAdManager *)0x0) {
            if (cRam_? == '\0') {
              func_?(&TypeInfo__System__Action<bool,_System::String>,unaff_EBP);
              func_?(&TypeInfo__BrowserComm__ToJavaScript);
              func_?(&
                              MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnRewardedAdShownCallback_bool__System__String_
                             );
              func_?(&StringLiteral_RequestNonEmbeddedRewardedAd___n);
              func_?(&StringLiteral_showRewardedVideoAd);
              cRam_? = '\x01';
            }
            pSVar5 = StringLiteral_RequestNonEmbeddedRewardedAd___n;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Debug,unaff_ESI);
              cRam_? = '\x01';
            }
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar5,(MethodInfo *)0x0);
            this_02 = (UnityAction_2_System_Int32_System_Int32_ *)
                      func_?(TypeInfo__System__Action<bool,_System::String>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::
            Int32]::UnityAction_2_System_Int32_System_Int32___ctor
                      (this_02,(Object *)pWVar1,
                       MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnRewardedAdShownCallback_bool__System__String_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
                      (StringLiteral_showRewardedVideoAd,(Action_2_Boolean_String_ *)this_02,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

