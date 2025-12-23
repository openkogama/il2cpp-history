
/* Void <RequestInterstitial>b__0() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager+<>c__DisplayClass49_0::
     WebAdManager_c_DisplayClass49_0__RequestInterstitial_b__0
               (WebAdManager_c_DisplayClass49_0 *this,MethodInfo *method)

{
  pAVar1 = (this->fields).interstitialCB;
  if (pAVar1 != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,0,(pAVar1->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <RequestInterstitial>b__1() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager+<>c__DisplayClass49_0::
     WebAdManager_c_DisplayClass49_0__RequestInterstitial_b__1
               (WebAdManager_c_DisplayClass49_0 *this,MethodInfo *method)

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
                  MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__InterstitialAdShownSDKCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_embedded_sdk_available_and_initi);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Embedded_sdk_not_available___all);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RequestInterstitial);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Embedded_sdk_not_available___don);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_RequestInterstitial;
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
  pWVar2 = (this->fields).__4__this;
  if ((pWVar2 != (WebAdManager *)0x0) && ((pWVar2->fields).adUIManager != (IAdUIManager *)0x0)) {
    FUN_?(1);
    pWVar2 = (this->fields).__4__this;
    if (pWVar2 != (WebAdManager *)0x0) {
      if ((pWVar2->fields).embeddedSiteSDKAvailable != 0) {
        if ((pWVar2->fields).sdkManager == (IAdManager *)0x0) goto code_?;
        cVar3 = FUN_?(5);
        pSVar1 = StringLiteral_embedded_sdk_available_and_initi;
        if (cVar3 != '\0') {
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
                    ((Object *)pSVar1,(MethodInfo *)0x0);
          pWVar2 = (this->fields).__4__this;
          if (pWVar2 != (WebAdManager *)0x0) {
            pIVar4 = (pWVar2->fields).sdkManager;
            this_00 = (UnityAction_1_System_Int32Enum_ *)
                      FUN_?(
                                   TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (this_00,(Object *)pWVar2,
                       MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__InterstitialAdShownSDKCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                       ,(MethodInfo *)0x0);
            if (pIVar4 != (IAdManager *)0x0) {
              FUN_?();
              return;
            }
          }
          goto code_?;
        }
      }
      message = StringLiteral_Embedded_sdk_not_available___all;
      pSVar1 = StringLiteral_Embedded_sdk_not_available___don;
      pWVar2 = (this->fields).__4__this;
      if (pWVar2 != (WebAdManager *)0x0) {
        if ((pWVar2->fields).siteData.allowsFallbackAds == 0) {
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
                    ((Object *)pSVar1,(MethodInfo *)0x0);
          pWVar2 = (this->fields).__4__this;
          if ((pWVar2 != (WebAdManager *)0x0) &&
             (pIVar5 = (pWVar2->fields).adUIManager, pIVar5 != (IAdUIManager *)0x0)) {
            FUN_?(3,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar5,3);
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
          pWVar2 = (this->fields).__4__this;
          if (pWVar2 != (WebAdManager *)0x0) {
            WebAdManager::WebAdManager_RequestNonEmbeddedInterstitialAd(pWVar2,(MethodInfo *)0x0);
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

