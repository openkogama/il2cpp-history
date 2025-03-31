
/* Void ADLoadCallback(InterstitialAd, LoadAdError) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_ADLoadCallback
               (MobileAdManager_InternalStateInterstitial *this,InterstitialAd *ad,
               LoadAdError *error,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateInterstitial_ADLoad);
    func_?(&StringLiteral_InternalStateInterstitial_ADLoad);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_InternalStateInterstitial_ADLoad;
  if (error == (LoadAdError *)0x0) {
    if (ad != (InterstitialAd *)0x0) {
      pRVar2 = GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::
               InterstitialAd_GetResponseInfo(ad,(MethodInfo *)0x0);
      pSVar1 = StringLiteral_InternalStateInterstitial_ADLoad;
      if (pRVar2 == (ResponseInfo *)0x0) {
        pSVar3 = (String *)0x0;
      }
      else {
        pSVar3 = (String *)
                 (*(code *)(pRVar2->klass->vtable).ToString.method)
                           (pRVar2,pRVar2->klass[1]._0.image);
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar1,(MethodInfo *)0x0);
      pIRam00000018 = ad;
      func_?();
      MobileAdManager_InternalStateInterstitial_SetupCallbacks
                ((MobileAdManager_InternalStateInterstitial *)0x0,(MethodInfo *)0x0);
      if (iRam_? != 0) {
        *(undefined1 *)(iRam_? + 8) = 0;
        if (cRam_? == '\0') {
          return;
        }
        if (pIRam00000018 != (InterstitialAd *)0x0) {
          GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::InterstitialAd_Show
                    (pIRam00000018,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    pSVar3 = (String *)0x0;
  }
  else {
    pSVar3 = (String *)
             (*(code *)(error->klass->vtable).ToString.method)(error,error->klass[1]._0.image);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)pSVar1,(MethodInfo *)0x0);
  pMVar4 = (this->fields).adLoadState;
  if (pMVar4 != (MobileAdManager_AdLoadState *)0x0) {
    bVar5 = cRam_? == '\0';
    (pMVar4->fields).loadingAd = 0;
    if (bVar5) {
      func_?();
      func_?();
      func_?(&StringLiteral_InternalStateInterstitial_Handle);
      cRam_? = '\x01';
    }
    pMVar4 = (this->fields).adLoadState;
    if (pMVar4 != (MobileAdManager_AdLoadState *)0x0) {
      bVar6 = MobileAdManager+AdLoadState::MobileAdManager_AdLoadState_Reload
                        (pMVar4,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_InternalStateInterstitial_Handle,(MethodInfo *)0x0);
        (this->fields).interstitialAdResult = 1;
        MobileAdManager_InternalStateInterstitial_FinishRequest(this,(MethodInfo *)0x0);
        return;
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_InternalStateInterstitial_Handle,(MethodInfo *)0x0);
      MobileAdManager_InternalStateInterstitial_LoadInterstitialAd(this,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CreateAndLoadInterstitialAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_CreateAndLoadInterstitialAd
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateInterstitial_Create);
    func_?(&StringLiteral_Ad_InterstitialLoad);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateInterstitial_Create,(MethodInfo *)0x0);
  MobileAdManager::MobileAdManager_SendStat(StringLiteral_Ad_InterstitialLoad,(MethodInfo *)0x0);
  MobileAdManager_InternalStateInterstitial_DestroyInterstitial(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (in_stack_1[2].klass != (Object__Class *)0x0) {
    if (*(char *)&((in_stack_1[2].klass)->_0).name != '\0') {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_InternalStateInterstitial_LoadIn,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateInterstitial_LoadIn,(MethodInfo *)0x0);
    if (in_stack_1[2].klass != (Object__Class *)0x0) {
      *(undefined1 *)&((in_stack_1[2].klass)->_0).name = 1;
      MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
      pAVar2 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                         ((MethodInfo *)0x0);
      if (pAVar2 != (AdMobCredentials *)0x0) {
        adUnitId = (pAVar2->fields).InterstitialAdUnitId;
        this_00 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_00,in_stack_1,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__ADLoadCallback_GoogleMobileAds__Api__InterstitialAd__GoogleMobileAds__Api__LoadAdError_
                   ,(MethodInfo *)0x0);
        GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::InterstitialAd_Load
                  (adUnitId,unaff_ESI,
                   (Action_2_GoogleMobileAds_Api_InterstitialAd_GoogleMobileAds_Api_LoadAdError_ *)
                   this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::MobileAdManager_InternalStateInterstitial_Destroy
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateInterstitial_Destro);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateInterstitial_Destro,(MethodInfo *)0x0);
  MobileAdManager_InternalStateInterstitial_DestroyInterstitial(this,(MethodInfo *)0x0);
  (this->fields).interstitialAdCallback =
       (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0;
  func_?(&(this->fields).interstitialAdCallback,0);
  return;
}


/* Void DestroyInterstitial() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_DestroyInterstitial
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateInterstitial_Destro);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateInterstitial_Destro,(MethodInfo *)0x0);
  if ((this->fields).interstitial != (InterstitialAd *)0x0) {
    MobileAdManager_InternalStateInterstitial_RemoveCallbacks(this,(MethodInfo *)0x0);
    this_00 = (this->fields).interstitial;
    if (this_00 == (InterstitialAd *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::InterstitialAd_Destroy
              (this_00,(MethodInfo *)0x0);
  }
  (this->fields).interstitial = (InterstitialAd *)0x0;
  uStack2 = 0;
  func_?();
  return;
}


/* Void FinishRequest() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_FinishRequest
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateInterstitial_Finish);
    func_?(&StringLiteral_InternalStateInterstitial_Finish);
    cRam_? = '\x01';
  }
  if ((this->fields).interstitialAdCallback ==
      (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_InternalStateInterstitial_Finish,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateInterstitial_Finish,(MethodInfo *)0x0);
  uStack_1 = 2;
  pAVar4 = (this->fields).interstitialAdCallback;
  if (pAVar4 != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
    (*(pAVar4->fields)._._.invoke_impl)((pAVar4->fields)._._.method_code);
    uStack_1 = 0xffffffff;
    func_?();
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  func_?();
  uVar5 = func_?();
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HandleError() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_HandleError
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateInterstitial_Handle);
    func_?(&StringLiteral_InternalStateInterstitial_Handle);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).adLoadState;
  if (this_00 != (MobileAdManager_AdLoadState *)0x0) {
    bVar1 = MobileAdManager+AdLoadState::MobileAdManager_AdLoadState_Reload
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_InternalStateInterstitial_Handle,(MethodInfo *)0x0);
      (this->fields).interstitialAdResult = 1;
      MobileAdManager_InternalStateInterstitial_FinishRequest(this,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateInterstitial_Handle,(MethodInfo *)0x0);
    MobileAdManager_InternalStateInterstitial_LoadInterstitialAd(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InterstitialOnOnAdClicked() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_InterstitialOnOnAdClicked
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateInterstitial_Inters);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateInterstitial_Inters,(MethodInfo *)0x0);
  return;
}


/* Void InterstitialOnOnAdFullScreenContentClosed() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_InterstitialOnOnAdFullScreenContentClosed
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateInterstitial_Inters);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateInterstitial_Inters,(MethodInfo *)0x0);
  (this->fields).interstitialAdResult = 3;
  MobileAdManager_InternalStateInterstitial_FinishRequest(this,(MethodInfo *)0x0);
  MobileAdManager_InternalStateInterstitial_CreateAndLoadInterstitialAd(this,(MethodInfo *)0x0);
  return;
}


/* Void InterstitialOnOnAdFullScreenContentFailed(AdError) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_InterstitialOnOnAdFullScreenContentFailed
               (MobileAdManager_InternalStateInterstitial *this,AdError *error,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateInterstitial_Inters);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_InternalStateInterstitial_Inters;
  if (error == (AdError *)0x0) {
    str1 = (String *)0x0;
  }
  else {
    str1 = (String *)
           (*(code *)(error->klass->vtable).ToString.method)(error,error->klass[1]._0.image);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,str1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)pSVar1,(MethodInfo *)0x0);
  return;
}


/* Void InterstitialOnOnAdFullScreenContentOpened() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_InterstitialOnOnAdFullScreenContentOpened
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&StringLiteral_InternalStateInterstitial_Inters);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateInterstitial_Inters,(MethodInfo *)0x0);
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    (pMVar1->fields).loadAttempts = 0;
    return;
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InterstitialOnOnAdImpressionRecorded() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_InterstitialOnOnAdImpressionRecorded
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateInterstitial_Inters);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateInterstitial_Inters,(MethodInfo *)0x0);
  return;
}


/* Void InterstitialOnOnAdPaid(AdValue) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_InterstitialOnOnAdPaid
               (MobileAdManager_InternalStateInterstitial *this,AdValue *adValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Int64);
    func_?(&StringLiteral_InternalStateInterstitial_Inters);
    cRam_? = '\x01';
  }
  if (adValue != (AdValue *)0x0) {
    puStack_1 = *(undefined **)&(adValue->fields)._Value_k__BackingField;
    arg0 = (Object *)func_?(TypeInfo__System__Int64,&puStack_1);
    message = mscorlib.dll::System::String::String_Format_1
                        (StringLiteral_InternalStateInterstitial_Inters,arg0,
                         (Object *)(adValue->fields)._CurrencyCode_k__BackingField,(MethodInfo *)0x0
                        );
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void LoadInterstitialAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_LoadInterstitialAd
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<GoogleMobileAds::Api::InterstitialAd,_GoogleMobileAds::Api::LoadAdError>
                   );
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__ADLoadCallback_GoogleMobileAds__Api__InterstitialAd__GoogleMobileAds__Api__LoadAdError_
                   );
    func_?(&StringLiteral_InternalStateInterstitial_LoadIn);
    func_?(&StringLiteral_InternalStateInterstitial_LoadIn);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    if ((pMVar1->fields).loadingAd != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_InternalStateInterstitial_LoadIn,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateInterstitial_LoadIn,(MethodInfo *)0x0);
    pMVar1 = (this->fields).adLoadState;
    if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
      (pMVar1->fields).loadingAd = 1;
      MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
      pAVar2 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                         ((MethodInfo *)0x0);
      if (pAVar2 != (AdMobCredentials *)0x0) {
        adUnitId = (pAVar2->fields).InterstitialAdUnitId;
        this_00 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(
                                 TypeInfo__System__Action<GoogleMobileAds::Api::InterstitialAd,_GoogleMobileAds::Api::LoadAdError>
                                 );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__ADLoadCallback_GoogleMobileAds__Api__InterstitialAd__GoogleMobileAds__Api__LoadAdError_
                   ,(MethodInfo *)0x0);
        GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::InterstitialAd_Load
                  (adUnitId,unaff_ESI,
                   (Action_2_GoogleMobileAds_Api_InterstitialAd_GoogleMobileAds_Api_LoadAdError_ *)
                   this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RemoveCallbacks() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_RemoveCallbacks
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdError>);
    func_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdClicked__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentClosed__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentFailed_GoogleMobileAds__Api__AdError_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentOpened__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdImpressionRecorded__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdPaid_GoogleMobileAds__Api__AdValue_
                   );
    func_?(&StringLiteral_InternalStateInterstitial_Remove);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateInterstitial_Remove,(MethodInfo *)0x0);
  pIVar1 = (this->fields).interstitial;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,
             MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentOpened__
             ,(MethodInfo *)0x0);
  if (pIVar1 != (InterstitialAd *)0x0) {
    GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::
    InterstitialAd_remove_OnAdFullScreenContentOpened(pIVar1,(Action *)pNVar2,(MethodInfo *)0x0);
    pIVar1 = (this->fields).interstitial;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentClosed__
               ,(MethodInfo *)0x0);
    if (pIVar1 != (InterstitialAd *)0x0) {
      GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::
      InterstitialAd_remove_OnAdFullScreenContentClosed(pIVar1,(Action *)pNVar2,(MethodInfo *)0x0);
      pIVar1 = (this->fields).interstitial;
      pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar2,(Object *)this,
                 MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdClicked__
                 ,(MethodInfo *)0x0);
      if (pIVar1 != (InterstitialAd *)0x0) {
        GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::InterstitialAd_remove_OnAdClicked
                  (pIVar1,(Action *)pNVar2,(MethodInfo *)0x0);
        pIVar1 = (this->fields).interstitial;
        pDVar3 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                  *)func_?();
        DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata
        ::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  (pDVar3,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdPaid_GoogleMobileAds__Api__AdValue_
                   ,(MethodInfo *)0x0);
        if (pIVar1 != (InterstitialAd *)0x0) {
          GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::InterstitialAd_remove_OnAdPaid
                    (pIVar1,(Action_1_GoogleMobileAds_Api_AdValue_ *)pDVar3,(MethodInfo *)0x0);
          pIVar1 = (this->fields).interstitial;
          pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar2,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdImpressionRecorded__
                     ,(MethodInfo *)0x0);
          if (pIVar1 != (InterstitialAd *)0x0) {
            GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::
            InterstitialAd_remove_OnAdImpressionRecorded(pIVar1,(Action *)pNVar2,(MethodInfo *)0x0);
            pIVar1 = (this->fields).interstitial;
            pDVar3 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)func_?();
            DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
            Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      (pDVar3,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentFailed_GoogleMobileAds__Api__AdError_
                       ,(MethodInfo *)0x0);
            if (pIVar1 != (InterstitialAd *)0x0) {
              GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::
              InterstitialAd_remove_OnAdFullScreenContentFailed
                        (pIVar1,(Action_1_GoogleMobileAds_Api_AdError_ *)pDVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RequestInterstitialAd(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult]) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_RequestInterstitialAd
               (MobileAdManager_InternalStateInterstitial *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *interstitialAdCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateInterstitial_Reques);
    func_?(&StringLiteral_InternalStateInterstitial_Reques);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateInterstitial_Reques,(MethodInfo *)0x0);
  (this->fields).interstitialAdCallback = interstitialAdCallback;
  func_?(&(this->fields).interstitialAdCallback,interstitialAdCallback);
  (this->fields).isHandlingRequest = 1;
  if (((this->fields).interstitial == (InterstitialAd *)0x0) ||
     (bVar1 = GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_CanShowAd
                        ((RewardedAd *)(this->fields).interstitial,(MethodInfo *)0x0), bVar1 == 0))
  {
    pMVar2 = (this->fields).adLoadState;
    if (pMVar2 != (MobileAdManager_AdLoadState *)0x0) {
      if ((pMVar2->fields).loadingAd != 0) {
        return;
      }
      MobileAdManager_InternalStateInterstitial_CreateAndLoadInterstitialAd(this,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateInterstitial_Reques,(MethodInfo *)0x0);
    this_00 = (this->fields).interstitial;
    if (this_00 != (InterstitialAd *)0x0) {
      GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::InterstitialAd_Show
                (this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupCallbacks() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_SetupCallbacks
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdError>);
    func_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdClicked__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentClosed__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentFailed_GoogleMobileAds__Api__AdError_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentOpened__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdImpressionRecorded__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdPaid_GoogleMobileAds__Api__AdValue_
                   );
    func_?(&StringLiteral_InternalStateInterstitial_SetupC);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateInterstitial_SetupC,(MethodInfo *)0x0);
  pIVar1 = (this->fields).interstitial;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,
             MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentOpened__
             ,(MethodInfo *)0x0);
  if (pIVar1 != (InterstitialAd *)0x0) {
    GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::
    InterstitialAd_add_OnAdFullScreenContentOpened(pIVar1,(Action *)pNVar2,(MethodInfo *)0x0);
    pIVar1 = (this->fields).interstitial;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentClosed__
               ,(MethodInfo *)0x0);
    if (pIVar1 != (InterstitialAd *)0x0) {
      GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::
      InterstitialAd_add_OnAdFullScreenContentClosed(pIVar1,(Action *)pNVar2,(MethodInfo *)0x0);
      pIVar1 = (this->fields).interstitial;
      pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar2,(Object *)this,
                 MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdClicked__
                 ,(MethodInfo *)0x0);
      if (pIVar1 != (InterstitialAd *)0x0) {
        GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::InterstitialAd_add_OnAdClicked
                  (pIVar1,(Action *)pNVar2,(MethodInfo *)0x0);
        pIVar1 = (this->fields).interstitial;
        pDVar3 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                  *)func_?();
        DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata
        ::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  (pDVar3,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdPaid_GoogleMobileAds__Api__AdValue_
                   ,(MethodInfo *)0x0);
        if (pIVar1 != (InterstitialAd *)0x0) {
          GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::InterstitialAd_add_OnAdPaid
                    (pIVar1,(Action_1_GoogleMobileAds_Api_AdValue_ *)pDVar3,(MethodInfo *)0x0);
          pIVar1 = (this->fields).interstitial;
          pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar2,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdImpressionRecorded__
                     ,(MethodInfo *)0x0);
          if (pIVar1 != (InterstitialAd *)0x0) {
            GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::
            InterstitialAd_add_OnAdImpressionRecorded(pIVar1,(Action *)pNVar2,(MethodInfo *)0x0);
            pIVar1 = (this->fields).interstitial;
            pDVar3 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)func_?();
            DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
            Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      (pDVar3,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentFailed_GoogleMobileAds__Api__AdError_
                       ,(MethodInfo *)0x0);
            if (pIVar1 != (InterstitialAd *)0x0) {
              GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::
              InterstitialAd_add_OnAdFullScreenContentFailed
                        (pIVar1,(Action_1_GoogleMobileAds_Api_AdError_ *)pDVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalStateInterstitial::
         MobileAdManager_InternalStateInterstitial_ToString
                   (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_interstitialAdCreated__0_u000A_isHan);
    cRam_? = '\x01';
  }
  this._3_1_ = 0;
  this_00 = (RewardedAd *)(pMVar1->fields).interstitial;
  if (this_00 != (RewardedAd *)0x0) {
    this._3_1_ = GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_CanShowAd
                           (this_00,(MethodInfo *)0x0);
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  uStack_2 = CONCAT13(this_00 != (RewardedAd *)0x0,(undefined3)uStack_2);
  pOVar3 = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_2 + 3);
  if (args == (Object__Array *)0x0) {
    func_?();
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
  }
  else {
    if (pOVar3 != (Object *)0x0) {
      iVar5 = func_?(pOVar3,(args->klass->_0).element_class);
      if (iVar5 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar3;
    func_?(args->vector,pOVar3);
    uStack_2._0_3_ = CONCAT12((pMVar1->fields).isHandlingRequest,(undefined2)uStack_2);
    pOVar3 = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_2 + 2);
    if (pOVar3 != (Object *)0x0) {
      iVar5 = func_?(pOVar3,(args->klass->_0).element_class);
      if (iVar5 == 0) goto code_?;
    }
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar3;
    func_?(args->vector + 1,pOVar3);
    pMVar6 = (pMVar1->fields).adLoadState;
    if (pMVar6 != (MobileAdManager_AdLoadState *)0x0) {
      iVar5 = func_?(pMVar6,(args->klass->_0).element_class);
      if (iVar5 == 0) goto code_?;
    }
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)pMVar6;
    func_?(args->vector + 2,pMVar6);
    uStack_2._0_2_ = CONCAT11(this._3_1_,(undefined1)uStack_2);
    pOVar3 = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_2 + 1);
    if (pOVar3 != (Object *)0x0) {
      iVar5 = func_?(pOVar3,(args->klass->_0).element_class);
      if (iVar5 == 0) goto code_?;
    }
    if (3 < args->max_length) {
      args->vector[3] = pOVar3;
      func_?(args->vector + 3,pOVar3);
      pSVar7 = mscorlib.dll::System::String::String_Format_3
                         (StringLiteral_interstitialAdCreated__0_u000A_isHan,args,(MethodInfo *)0x0)
      ;
      return pSVar7;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar7 = (String *)(*pcVar8)();
  return pSVar7;
}


/* MobileAdManager+InternalStateInterstitial() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::MobileAdManager_InternalStateInterstitial__ctor
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__AdLoadState)
    ;
    func_?(&TypeInfo__System__DateTime);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  uVar1 = *(undefined4 *)((int)&(TypeInfo__System__DateTime->static_fields->MinValue)._dateData + 4)
  ;
  *(int *)&(this->fields).prevInterstitialTime._dateData =
       (int)(TypeInfo__System__DateTime->static_fields->MinValue)._dateData;
  *(undefined4 *)((int)&(this->fields).prevInterstitialTime._dateData + 4) = uVar1;
  method_01 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__AdLoadState;
  value = (MobileAdManager_AdLoadState *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  method_00 = (MethodInfo *)&(this->fields).adLoadState;
  (this->fields).adLoadState = value;
  func_?(method_00,value);
  (this->fields).interstitialAdResult = 3;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* TimeSpan get_TimeSinceLastInterstitial() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalStateInterstitial::
         MobileAdManager_InternalStateInterstitial_get_TimeSinceLastInterstitial
                   (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

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

