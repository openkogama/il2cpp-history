
/* Void CreateAndLoadRewardedAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateRewardedAd_CreateAn);
    func_?(&StringLiteral_Ad_RewardedLoad);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_CreateAn,(MethodInfo *)0x0);
  MobileAdManager::MobileAdManager_SendStat(StringLiteral_Ad_RewardedLoad,(MethodInfo *)0x0);
  MobileAdManager_InternalStateRewardedAd_DestroyRewardedAd(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&StringLiteral_InternalStateRewardedAd_LoadRewa);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    if ((pMVar1->fields).loadingAd != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_InternalStateRewardedAd_LoadRewa,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateRewardedAd_LoadRewa,(MethodInfo *)0x0);
    pMVar1 = (this->fields).adLoadState;
    if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
      (pMVar1->fields).loadingAd = 1;
      MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
      pAVar2 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                         ((MethodInfo *)0x0);
      if (pAVar2 != (AdMobCredentials *)0x0) {
        adUnitId = (pAVar2->fields).RewardedAdUnitId;
        this_00 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_GoogleMobileAds__Api__RewardedAd__GoogleMobileAds__Api__LoadAdError_
                   ,(MethodInfo *)0x0);
        GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_Load
                  (adUnitId,(AdRequest *)this_00,
                   (Action_2_GoogleMobileAds_Api_RewardedAd_GoogleMobileAds_Api_LoadAdError_ *)
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
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_Destroy
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateRewardedAd_Destroy);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_Destroy,(MethodInfo *)0x0);
  (this->fields).rewardedAdCallback = (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0
  ;
  func_?(&(this->fields).rewardedAdCallback,0);
  MobileAdManager_InternalStateRewardedAd_DestroyRewardedAd(this,(MethodInfo *)0x0);
  return;
}


/* Void DestroyRewardedAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_DestroyRewardedAd
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateRewardedAd_DestroyR);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_DestroyR,(MethodInfo *)0x0);
  if ((this->fields).rewardedAd != (RewardedAd *)0x0) {
    MobileAdManager_InternalStateRewardedAd_RemoveCallbacks(this,(MethodInfo *)0x0);
    this_00 = (this->fields).rewardedAd;
    if (this_00 == (RewardedAd *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_Destroy
              (this_00,(MethodInfo *)0x0);
  }
  (this->fields).rewardedAd = (RewardedAd *)0x0;
  uStack2 = 0;
  func_?();
  return;
}


/* Void FinishRequest() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_FinishRequest
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateRewardedAd_FinishRe);
    func_?(&StringLiteral_InternalStateRewardedAd_FinishRe);
    cRam_? = '\x01';
  }
  if ((this->fields).rewardedAdCallback ==
      (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_InternalStateRewardedAd_FinishRe,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_FinishRe,(MethodInfo *)0x0);
  uStack_1 = 2;
  pAVar4 = (this->fields).rewardedAdCallback;
  if (pAVar4 != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
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
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_HandleError
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateRewardedAd_HandleEr);
    func_?(&StringLiteral_InternalStateRewardedAd_HandleEr);
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
                ((Object *)StringLiteral_InternalStateRewardedAd_HandleEr,(MethodInfo *)0x0);
      (this->fields).rewardAdResult = 1;
      MobileAdManager_InternalStateRewardedAd_FinishRequest(this,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateRewardedAd_HandleEr,(MethodInfo *)0x0);
    MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleRewardedAdLoaded(RewardedAd, LoadAdError) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_HandleRewardedAdLoaded
               (MobileAdManager_InternalStateRewardedAd *this,RewardedAd *ad,LoadAdError *error,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<GoogleMobileAds::Api::Reward>);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__UserRewardEarnedCallback_GoogleMobileAds__Api__Reward_
                   );
    func_?(&StringLiteral_InternalStateRewardedAd_HandleRe);
    func_?(&StringLiteral_InternalStateRewardedAd_HandleRe);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_InternalStateRewardedAd_HandleRe;
  if (error == (LoadAdError *)0x0) {
    if (ad != (RewardedAd *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_InternalStateRewardedAd_HandleRe,(MethodInfo *)0x0);
      (this->fields).rewardedAd = ad;
      func_?(&(this->fields).rewardedAd,ad);
      MobileAdManager_InternalStateRewardedAd_SetupCallbacks(this,(MethodInfo *)0x0);
      pMVar2 = (this->fields).adLoadState;
      if (pMVar2 != (MobileAdManager_AdLoadState *)0x0) {
        (pMVar2->fields).loadingAd = 0;
        if ((this->fields).isHandlingRequest != 0) {
          this_00 = (this->fields).rewardedAd;
          this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                     *)func_?();
          DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
          Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    (this_01,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__UserRewardEarnedCallback_GoogleMobileAds__Api__Reward_
                     ,(MethodInfo *)0x0);
          if (this_00 == (RewardedAd *)0x0) goto code_?;
          GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_Show
                    (this_00,(Action_1_GoogleMobileAds_Api_Reward_ *)this_01,(MethodInfo *)0x0);
        }
        return;
      }
      goto code_?;
    }
    str1 = (String *)0x0;
  }
  else {
    str1 = (String *)
           (*(code *)(error->klass->vtable).ToString.method)(error,error->klass[1]._0.image);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,str1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)pSVar1,(MethodInfo *)0x0);
  pMVar2 = (this->fields).adLoadState;
  if (pMVar2 != (MobileAdManager_AdLoadState *)0x0) {
    (pMVar2->fields).loadingAd = 0;
    MobileAdManager_InternalStateRewardedAd_HandleError(this,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void LoadRewardedAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_LoadRewardedAd
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<GoogleMobileAds::Api::RewardedAd,_GoogleMobileAds::Api::LoadAdError>
                   );
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_GoogleMobileAds__Api__RewardedAd__GoogleMobileAds__Api__LoadAdError_
                   );
    func_?(&StringLiteral_InternalStateRewardedAd_LoadRewa);
    func_?(&StringLiteral_InternalStateRewardedAd_LoadRewa);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    if ((pMVar1->fields).loadingAd != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_InternalStateRewardedAd_LoadRewa,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateRewardedAd_LoadRewa,(MethodInfo *)0x0);
    pMVar1 = (this->fields).adLoadState;
    if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
      (pMVar1->fields).loadingAd = 1;
      MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
      pAVar2 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                         ((MethodInfo *)0x0);
      if (pAVar2 != (AdMobCredentials *)0x0) {
        adUnitId = (pAVar2->fields).RewardedAdUnitId;
        this_00 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(
                                 TypeInfo__System__Action<GoogleMobileAds::Api::RewardedAd,_GoogleMobileAds::Api::LoadAdError>
                                 );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_GoogleMobileAds__Api__RewardedAd__GoogleMobileAds__Api__LoadAdError_
                   ,(MethodInfo *)0x0);
        GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_Load
                  (adUnitId,unaff_ESI,
                   (Action_2_GoogleMobileAds_Api_RewardedAd_GoogleMobileAds_Api_LoadAdError_ *)
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
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_RemoveCallbacks
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdError>);
    func_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdClicked__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentClosed__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentFailed_GoogleMobileAds__Api__AdError_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentOpened__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdImpressionRecorded__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdPaid_GoogleMobileAds__Api__AdValue_
                   );
    func_?(&StringLiteral_InternalStateRewardedAd_RemoveCa);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_RemoveCa,(MethodInfo *)0x0);
  pRVar1 = (this->fields).rewardedAd;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,
             MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentOpened__
             ,(MethodInfo *)0x0);
  if (pRVar1 != (RewardedAd *)0x0) {
    GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::
    RewardedAd_remove_OnAdFullScreenContentOpened(pRVar1,(Action *)pNVar2,(MethodInfo *)0x0);
    pRVar1 = (this->fields).rewardedAd;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentClosed__
               ,(MethodInfo *)0x0);
    if (pRVar1 != (RewardedAd *)0x0) {
      GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::
      RewardedAd_remove_OnAdFullScreenContentClosed(pRVar1,(Action *)pNVar2,(MethodInfo *)0x0);
      pRVar1 = (this->fields).rewardedAd;
      pDVar3 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (pDVar3,(Object *)this,
                 MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentFailed_GoogleMobileAds__Api__AdError_
                 ,(MethodInfo *)0x0);
      if (pRVar1 != (RewardedAd *)0x0) {
        GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::
        RewardedAd_remove_OnAdFullScreenContentFailed
                  (pRVar1,(Action_1_GoogleMobileAds_Api_AdError_ *)pDVar3,(MethodInfo *)0x0);
        pRVar1 = (this->fields).rewardedAd;
        pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar2,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdClicked__
                   ,(MethodInfo *)0x0);
        if (pRVar1 != (RewardedAd *)0x0) {
          GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_remove_OnAdClicked
                    (pRVar1,(Action *)pNVar2,(MethodInfo *)0x0);
          pRVar1 = (this->fields).rewardedAd;
          pDVar3 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                    *)func_?();
          DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
          Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    (pDVar3,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdPaid_GoogleMobileAds__Api__AdValue_
                     ,(MethodInfo *)0x0);
          if (pRVar1 != (RewardedAd *)0x0) {
            GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_remove_OnAdPaid
                      (pRVar1,(Action_1_GoogleMobileAds_Api_AdValue_ *)pDVar3,(MethodInfo *)0x0);
            pRVar1 = (this->fields).rewardedAd;
            pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar2,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdImpressionRecorded__
                       ,(MethodInfo *)0x0);
            if (pRVar1 != (RewardedAd *)0x0) {
              GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::
              RewardedAd_remove_OnAdImpressionRecorded(pRVar1,(Action *)pNVar2,(MethodInfo *)0x0);
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


/* Void RequestRewardedAd(Action`1[Assets.Scripts.AdIntegration.RewardedAdResult]) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_RequestRewardedAd
               (MobileAdManager_InternalStateRewardedAd *this,
               Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *rewardedAdCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<GoogleMobileAds::Api::Reward>);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__UserRewardEarnedCallback_GoogleMobileAds__Api__Reward_
                   );
    func_?(&StringLiteral_InternalStateRewardedAd_RequestR);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_RequestR,(MethodInfo *)0x0);
  (this->fields).rewardedAdCallback = rewardedAdCallback;
  func_?(&(this->fields).rewardedAdCallback,rewardedAdCallback);
  (this->fields).isHandlingRequest = 1;
  if (((this->fields).rewardedAd == (RewardedAd *)0x0) ||
     (bVar1 = GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_CanShowAd
                        ((this->fields).rewardedAd,(MethodInfo *)0x0), bVar1 == 0)) {
    pMVar2 = (this->fields).adLoadState;
    if (pMVar2 != (MobileAdManager_AdLoadState *)0x0) {
      if ((pMVar2->fields).loadingAd != 0) {
        return;
      }
      MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd(this,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    this_00 = (this->fields).rewardedAd;
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<GoogleMobileAds::Api::Reward>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__UserRewardEarnedCallback_GoogleMobileAds__Api__Reward_
               ,(MethodInfo *)0x0);
    if (this_00 != (RewardedAd *)0x0) {
      GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_Show
                (this_00,(Action_1_GoogleMobileAds_Api_Reward_ *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RewardedAdOnOnAdClicked() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_RewardedAdOnOnAdClicked
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateRewardedAd_Rewarded);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_Rewarded,(MethodInfo *)0x0);
  return;
}


/* Void RewardedAdOnOnAdFullScreenContentClosed() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_RewardedAdOnOnAdFullScreenContentClosed
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateRewardedAd_Rewarded);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_Rewarded,(MethodInfo *)0x0);
  MobileAdManager_InternalStateRewardedAd_FinishRequest(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_CreateAn,(MethodInfo *)0x0);
  MobileAdManager::MobileAdManager_SendStat(StringLiteral_Ad_RewardedLoad,(MethodInfo *)0x0);
  MobileAdManager_InternalStateRewardedAd_DestroyRewardedAd(in_stack_1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = (in_stack_1->fields).adLoadState;
  if (pMVar2 != (MobileAdManager_AdLoadState *)0x0) {
    if ((pMVar2->fields).loadingAd != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_InternalStateRewardedAd_LoadRewa,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateRewardedAd_LoadRewa,(MethodInfo *)0x0);
    pMVar2 = (in_stack_1->fields).adLoadState;
    if (pMVar2 != (MobileAdManager_AdLoadState *)0x0) {
      (pMVar2->fields).loadingAd = 1;
      MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
      pAVar3 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                         ((MethodInfo *)0x0);
      if (pAVar3 != (AdMobCredentials *)0x0) {
        adUnitId = (pAVar3->fields).RewardedAdUnitId;
        this_00 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_00,(Object *)in_stack_1,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_GoogleMobileAds__Api__RewardedAd__GoogleMobileAds__Api__LoadAdError_
                   ,(MethodInfo *)0x0);
        GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_Load
                  (adUnitId,(AdRequest *)this_00,
                   (Action_2_GoogleMobileAds_Api_RewardedAd_GoogleMobileAds_Api_LoadAdError_ *)
                   this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RewardedAdOnOnAdFullScreenContentFailed(AdError) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_RewardedAdOnOnAdFullScreenContentFailed
               (MobileAdManager_InternalStateRewardedAd *this,AdError *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateRewardedAd_Rewarded);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_InternalStateRewardedAd_Rewarded;
  if (obj == (AdError *)0x0) {
    str1 = (String *)0x0;
  }
  else {
    str1 = (String *)(*(code *)(obj->klass->vtable).ToString.method)(obj,obj->klass[1]._0.image);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,str1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)pSVar1,(MethodInfo *)0x0);
  MobileAdManager_InternalStateRewardedAd_HandleError(this,(MethodInfo *)0x0);
  return;
}


/* Void RewardedAdOnOnAdFullScreenContentOpened() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_RewardedAdOnOnAdFullScreenContentOpened
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&StringLiteral_InternalStateRewardedAd_Rewarded);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_Rewarded,(MethodInfo *)0x0);
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


/* Void RewardedAdOnOnAdImpressionRecorded() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_RewardedAdOnOnAdImpressionRecorded
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalStateRewardedAd_Rewarded);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_Rewarded,(MethodInfo *)0x0);
  return;
}


/* Void RewardedAdOnOnAdPaid(AdValue) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_RewardedAdOnOnAdPaid
               (MobileAdManager_InternalStateRewardedAd *this,AdValue *adValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Int64);
    func_?(&StringLiteral_InternalStateRewardedAd_Rewarded);
    cRam_? = '\x01';
  }
  if (adValue != (AdValue *)0x0) {
    puStack_1 = *(undefined **)&(adValue->fields)._Value_k__BackingField;
    arg0 = (Object *)func_?(TypeInfo__System__Int64,&puStack_1);
    message = mscorlib.dll::System::String::String_Format_1
                        (StringLiteral_InternalStateRewardedAd_Rewarded,arg0,
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


/* Void SetupCallbacks() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_SetupCallbacks
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdError>);
    func_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdClicked__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentClosed__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentFailed_GoogleMobileAds__Api__AdError_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentOpened__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdImpressionRecorded__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdPaid_GoogleMobileAds__Api__AdValue_
                   );
    func_?(&StringLiteral_InternalStateRewardedAd_SetupCal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_SetupCal,(MethodInfo *)0x0);
  pRVar1 = (this->fields).rewardedAd;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,
             MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentOpened__
             ,(MethodInfo *)0x0);
  if (pRVar1 != (RewardedAd *)0x0) {
    GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::
    RewardedAd_add_OnAdFullScreenContentOpened(pRVar1,(Action *)pNVar2,(MethodInfo *)0x0);
    pRVar1 = (this->fields).rewardedAd;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentClosed__
               ,(MethodInfo *)0x0);
    if (pRVar1 != (RewardedAd *)0x0) {
      GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::
      RewardedAd_add_OnAdFullScreenContentClosed(pRVar1,(Action *)pNVar2,(MethodInfo *)0x0);
      pRVar1 = (this->fields).rewardedAd;
      pDVar3 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (pDVar3,(Object *)this,
                 MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentFailed_GoogleMobileAds__Api__AdError_
                 ,(MethodInfo *)0x0);
      if (pRVar1 != (RewardedAd *)0x0) {
        GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::
        RewardedAd_add_OnAdFullScreenContentFailed
                  (pRVar1,(Action_1_GoogleMobileAds_Api_AdError_ *)pDVar3,(MethodInfo *)0x0);
        pRVar1 = (this->fields).rewardedAd;
        pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar2,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdClicked__
                   ,(MethodInfo *)0x0);
        if (pRVar1 != (RewardedAd *)0x0) {
          GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnAdClicked
                    (pRVar1,(Action *)pNVar2,(MethodInfo *)0x0);
          pRVar1 = (this->fields).rewardedAd;
          pDVar3 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                    *)func_?();
          DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
          Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    (pDVar3,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdPaid_GoogleMobileAds__Api__AdValue_
                     ,(MethodInfo *)0x0);
          if (pRVar1 != (RewardedAd *)0x0) {
            GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnAdPaid
                      (pRVar1,(Action_1_GoogleMobileAds_Api_AdValue_ *)pDVar3,(MethodInfo *)0x0);
            pRVar1 = (this->fields).rewardedAd;
            pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar2,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdImpressionRecorded__
                       ,(MethodInfo *)0x0);
            if (pRVar1 != (RewardedAd *)0x0) {
              GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::
              RewardedAd_add_OnAdImpressionRecorded(pRVar1,(Action *)pNVar2,(MethodInfo *)0x0);
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
         MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_ToString
                   (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_rewardedAdCreated__0_u000A_isHandlin);
    cRam_? = '\x01';
  }
  this._3_1_ = 0;
  this_00 = (pMVar1->fields).rewardedAd;
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
                         (StringLiteral_rewardedAdCreated__0_u000A_isHandlin,args,(MethodInfo *)0x0)
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


/* Void UserRewardEarnedCallback(Reward) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_UserRewardEarnedCallback
               (MobileAdManager_InternalStateRewardedAd *this,Reward *reward,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral__amount_);
    func_?(&StringLiteral_InternalStateRewardedAd_UserRewa);
    cRam_? = '\x01';
  }
  if (reward != (Reward *)0x0) {
    DStack_1.m_value = (reward->fields).Amount;
    pSVar2 = (reward->fields).Type;
    str3 = mscorlib.dll::System::Double::Double_ToString(&DStack_1,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_5
                       (StringLiteral_InternalStateRewardedAd_UserRewa,pSVar2,StringLiteral__amount_
                        ,str3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
    pSVar2[1].monitor = (MonitorData *)0x3;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MobileAdManager+InternalStateRewardedAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd__ctor
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

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
  (this->fields).rewardAdResult = 4;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Boolean get_IsOk() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_get_IsOk
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).adLoadState;
  if (pMVar2 != (MobileAdManager_AdLoadState *)0x0) {
    return (byte)((uint)(pMVar2->fields).loadAttempts >> 0x1f) ^ 1;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* TimeSpan get_TimeSinceLastRewarded() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalStateRewardedAd::
         MobileAdManager_InternalStateRewardedAd_get_TimeSinceLastRewarded
                   (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

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

