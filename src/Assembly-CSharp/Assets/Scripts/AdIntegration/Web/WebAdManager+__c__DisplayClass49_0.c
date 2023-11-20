
/* Void <RequestInterstitial>b__0() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager+<>c__DisplayClass49_0::
     WebAdManager_c_DisplayClass49_0__RequestInterstitial_b__0
               (WebAdManager_c_DisplayClass49_0 *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).interstitialCB;
  if (pAVar2 != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
    puStack_1 = (pAVar2->fields)._._.method;
    uStack_3 = 0;
    pvStack_4 = (pAVar2->fields)._._.method_code;
    (*(pAVar2->fields)._._.invoke_impl)();
    return;
  }
  uVar5 = func_?(&pvStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <RequestInterstitial>b__1() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager+<>c__DisplayClass49_0::
     WebAdManager_c_DisplayClass49_0__RequestInterstitial_b__1
               (WebAdManager_c_DisplayClass49_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>)
    ;
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__InterstitialAdShownSDKCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   );
    func_?(&StringLiteral_embedded_sdk_available_and_initi);
    func_?(&StringLiteral_Embedded_sdk_not_available___all);
    func_?(&StringLiteral_RequestInterstitial);
    func_?(&StringLiteral_Embedded_sdk_not_available___don);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_RequestInterstitial;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pWVar2 = (this->fields).__4__this;
  if ((pWVar2 != (WebAdManager *)0x0) &&
     (pIVar3 = (pWVar2->fields).adUIManager, pIVar3 != (IAdUIManager *)0x0)) {
    func_?(1,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar3,
                    (this->fields).interstitialCB);
    pWVar2 = (this->fields).__4__this;
    if (pWVar2 != (WebAdManager *)0x0) {
      if ((pWVar2->fields).embeddedSiteSDKAvailable != 0) {
        pIVar4 = (pWVar2->fields).sdkManager;
        if (pIVar4 == (IAdManager *)0x0) goto code_?;
        cVar5 = func_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar4);
        pSVar1 = StringLiteral_embedded_sdk_available_and_initi;
        if (cVar5 != '\0') {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Debug);
            cRam_? = '\x01';
          }
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar1,(MethodInfo *)0x0);
          pWVar2 = (this->fields).__4__this;
          if (pWVar2 != (WebAdManager *)0x0) {
            pIVar4 = (pWVar2->fields).sdkManager;
            this_00 = (UnityAction_1_System_Int32Enum_ *)
                      func_?(
                                     TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                                     );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (this_00,(Object *)pWVar2,
                       MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__InterstitialAdShownSDKCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                       ,(MethodInfo *)0x0);
            if (pIVar4 != (IAdManager *)0x0) {
              func_?(7,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar4,this_00,
                              (this->fields).context);
              return;
            }
          }
          goto code_?;
        }
      }
      message = StringLiteral_Embedded_sdk_not_available___don;
      pSVar1 = StringLiteral_Embedded_sdk_not_available___all;
      pWVar2 = (this->fields).__4__this;
      if (pWVar2 != (WebAdManager *)0x0) {
        if ((pWVar2->fields).siteData.allowsFallbackAds == 0) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Debug);
            cRam_? = '\x01';
          }
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)message,(MethodInfo *)0x0);
          pWVar2 = (this->fields).__4__this;
          if ((pWVar2 != (WebAdManager *)0x0) &&
             (pIVar3 = (pWVar2->fields).adUIManager, pIVar3 != (IAdUIManager *)0x0)) {
            func_?(3,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar3,3);
            return;
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
                    ((Object *)pSVar1,(MethodInfo *)0x0);
          if ((this->fields).__4__this != (WebAdManager *)0x0) {
            if (cRam_? == '\0') {
              func_?();
              func_?(&TypeInfo__BrowserComm__ToJavaScript);
              func_?(&
                              MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnInterstitialShownCallback_bool__System__String_
                             );
              func_?(&StringLiteral_RequestNonEmbeddedInterstitialAd);
              func_?(&StringLiteral_showVideoAd);
              cRam_? = '\x01';
            }
            pSVar1 = StringLiteral_RequestNonEmbeddedInterstitialAd;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Debug);
              cRam_? = '\x01';
            }
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar1,(MethodInfo *)0x0);
            this_01 = (UnityAction_2_System_Int32_System_Int32_ *)
                      func_?(TypeInfo__System__Action<bool,_System::String>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::
            Int32]::UnityAction_2_System_Int32_System_Int32___ctor
                      (this_01,in_stack_6,
                       MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnInterstitialShownCallback_bool__System__String_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
                      (StringLiteral_showVideoAd,(Action_2_Boolean_String_ *)this_01,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

