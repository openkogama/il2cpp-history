
/* Void CreateAndLoadRewardedAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

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
            ((Object *)StringLiteral_InitializeRewardedAd,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0)) {
    func_?();
  }
  MobileAdManager::MobileAdManager_SendStat(StringLiteral_Ad_RewardedLoad,(MethodInfo *)0x0);
  if ((this->fields).rewardedAd != (RewardedAd *)0x0) {
    MobileAdManager_InternalStateRewardedAd_RemoveCallbacks(this,(MethodInfo *)0x0);
    (this->fields).rewardedAd = (RewardedAd *)0x0;
  }
  pAVar1 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                     ((MethodInfo *)0x0);
  if (pAVar1 != (AdMobCredentials *)0x0) {
    adUnitId = (pAVar1->fields).RewardedAdUnitId;
    pRVar2 = (RewardedAd *)func_?();
    GoogleMobileAds::Api::RewardedAd::RewardedAd__ctor(pRVar2,adUnitId,(MethodInfo *)0x0);
    (this->fields).rewardedAd = pRVar2;
    MobileAdManager_InternalStateRewardedAd_SetupCallbacks(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar3 = (this->fields).adLoadState;
    if (pMVar3 != (MobileAdManager_AdLoadState *)0x0) {
      if ((pMVar3->fields).loadingAd != 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Already_loading_ad,(MethodInfo *)0x0);
        return;
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_________________________Load_ad,(MethodInfo *)0x0);
      pMVar3 = (this->fields).adLoadState;
      if (pMVar3 != (MobileAdManager_AdLoadState *)0x0) {
        (pMVar3->fields).loadingAd = 1;
        pRVar2 = (this->fields).rewardedAd;
        if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).
                    Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started ==
            0)) {
          func_?();
        }
        request = MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
        if (pRVar2 != (RewardedAd *)0x0) {
          GoogleMobileAds::Api::RewardedAd::RewardedAd_LoadAd(pRVar2,request,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_Destroy
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  (this->fields).rewardedAdCallback = (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0
  ;
  MobileAdManager_InternalStateRewardedAd_RemoveCallbacks(this,(MethodInfo *)0x0);
  (this->fields).rewardedAd = (RewardedAd *)0x0;
  return;
}


/* Void DestroyRewardedAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_DestroyRewardedAd
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  MobileAdManager_InternalStateRewardedAd_RemoveCallbacks(this,(MethodInfo *)0x0);
  (this->fields).rewardedAd = (RewardedAd *)0x0;
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
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  func_?();
  if ((this->fields).rewardedAdCallback ==
      (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puStack_7 = (undefined4 *)&stack0xffffffb8, puStack_4 = &stack0xffffffb8,
       (TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      puStack_7 = (undefined4 *)&stack0xffffffb8;
      puStack_4 = &stack0xffffffb8;
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Callback_already_done__This_is_p,(MethodInfo *)0x0);
  }
  else {
    this_00 = (Action_1_UIPushOption_ *)(this->fields).rewardedAdCallback;
    uStack_1 = 1;
    if (this_00 == (Action_1_UIPushOption_ *)0x0) {
      puStack_7 = (undefined4 *)&stack0xffffffb8;
      puStack_4 = &stack0xffffffb8;
      func_?(0);
      DStack_8.ticks._ticks._4_4_ = 0;
      DStack_8.ticks._ticks._0_4_ = 0;
      func_?();
      pMStack_9 = this->klass;
      func_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,(this->fields).rewardAdResult,
               MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Invoke_Assets__Scripts__AdIntegration__RewardedAdResult_
              );
    *puStack_7 = 0x59;
    uStack_1 = 0xffffffff;
    (this->fields).rewardAdResult = 4;
    (this->fields).rewardedAdCallback =
         (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0;
    (this->fields).isHandlingRequest = 0;
    if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar11 = mscorlib.dll::System::DateTime::DateTime_get_Now(&DStack_8,(MethodInfo *)0x0);
    uVar12 = *(undefined4 *)((int)&(pDVar11->ticks)._ticks + 4);
    iVar13 = pDVar11->kind;
    uVar14 = *(undefined4 *)&pDVar11->field_0xc;
    *(int *)&(this->fields).prevInterstitialTime.ticks._ticks = (int)(pDVar11->ticks)._ticks;
    *(undefined4 *)((int)&(this->fields).prevInterstitialTime.ticks._ticks + 4) = uVar12;
    (this->fields).prevInterstitialTime.kind = iVar13;
    *(undefined4 *)&(this->fields).prevInterstitialTime.field_0xc = uVar14;
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void HandleError() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_HandleError
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  this_00 = (this->fields).adLoadState;
  if (this_00 == (MobileAdManager_AdLoadState *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = MobileAdManager+AdLoadState::MobileAdManager_AdLoadState_Reload(this_00,(MethodInfo *)0x0)
  ;
  if (bVar2 == 0) {
    (this->fields).rewardAdResult = 1;
    MobileAdManager_InternalStateRewardedAd_FinishRequest(this,(MethodInfo *)0x0);
    return;
  }
  MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd(this,(MethodInfo *)0x0);
  return;
}


/* Void HandleRewardedAdClosed(Object, EventArgs) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_HandleRewardedAdClosed
               (MobileAdManager_InternalStateRewardedAd *this,Object *sender,EventArgs *args,
               MethodInfo *method)

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
            ((Object *)StringLiteral_HandleRewardedAdClosed_event_rec,(MethodInfo *)0x0);
  MobileAdManager_InternalStateRewardedAd_FinishRequest(this,(MethodInfo *)0x0);
  MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd(this,(MethodInfo *)0x0);
  return;
}


/* Void HandleRewardedAdFailedToLoad(Object, AdErrorEventArgs) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_HandleRewardedAdFailedToLoad
               (MobileAdManager_InternalStateRewardedAd *this,Object *sender,AdErrorEventArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (args != (AdErrorEventArgs *)0x0) {
    pSVar1 = (String *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)args,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_HandleRewardedAdFailedToLoad_eve,pSVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar1,(MethodInfo *)0x0);
    pMVar2 = (this->fields).adLoadState;
    if (pMVar2 != (MobileAdManager_AdLoadState *)0x0) {
      (pMVar2->fields).loadingAd = 0;
      pMVar2 = (this->fields).adLoadState;
      if (pMVar2 != (MobileAdManager_AdLoadState *)0x0) {
        bVar3 = MobileAdManager+AdLoadState::MobileAdManager_AdLoadState_Reload
                          (pMVar2,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          (this->fields).rewardAdResult = 1;
          MobileAdManager_InternalStateRewardedAd_FinishRequest(this,(MethodInfo *)0x0);
          return;
        }
        MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleRewardedAdFailedToShow(Object, AdErrorEventArgs) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_HandleRewardedAdFailedToShow
               (MobileAdManager_InternalStateRewardedAd *this,Object *sender,AdErrorEventArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (args != (AdErrorEventArgs *)0x0) {
    pSVar1 = (String *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)args,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_HandleRewardedAdFailedToShow_eve,pSVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).adLoadState;
    if (this_00 != (MobileAdManager_AdLoadState *)0x0) {
      bVar2 = MobileAdManager+AdLoadState::MobileAdManager_AdLoadState_Reload
                        (this_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        (this->fields).rewardAdResult = 1;
        MobileAdManager_InternalStateRewardedAd_FinishRequest(this,(MethodInfo *)0x0);
        return;
      }
      MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleRewardedAdLoaded(Object, EventArgs) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_HandleRewardedAdLoaded
               (MobileAdManager_InternalStateRewardedAd *this,Object *sender,EventArgs *args,
               MethodInfo *method)

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
            ((Object *)StringLiteral_HandleRewardedAdLoaded_event_rec,(MethodInfo *)0x0);
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    (pMVar1->fields).loadingAd = 0;
    if ((this->fields).isHandlingRequest != 0) {
      this_00 = (this->fields).rewardedAd;
      if (this_00 == (RewardedAd *)0x0) goto code_?;
      GoogleMobileAds::Api::RewardedAd::RewardedAd_Show(this_00,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleRewardedAdOpening(Object, EventArgs) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_HandleRewardedAdOpening
               (MobileAdManager_InternalStateRewardedAd *this,Object *sender,EventArgs *args,
               MethodInfo *method)

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
            ((Object *)StringLiteral_HandleRewardedAdOpening_event_re,(MethodInfo *)0x0);
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    (pMVar1->fields).loadAttempts = 0;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleUserEarnedReward(Object, Reward) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_HandleUserEarnedReward
               (MobileAdManager_InternalStateRewardedAd *this,Object *sender,Reward *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (args != (Reward *)0x0) {
    pSVar1 = (String *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)args,(MethodInfo *)0x0);
    GoogleMobileAds::Api::Reward::Reward_get_Amount(args,(MethodInfo *)0x0);
    str1 = (String *)func_?(&stack0xfffffff4,0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_HandleRewardedAdRewarded_event_r,str1,::StringLiteral__,pSVar1
                        ,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
    (this->fields).rewardAdResult = 3;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void LoadRewardedAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_LoadRewardedAd
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    if ((pMVar1->fields).loadingAd != 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Already_loading_ad,(MethodInfo *)0x0);
      return;
    }
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_________________________Load_ad,(MethodInfo *)0x0);
    pMVar1 = (this->fields).adLoadState;
    if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
      (pMVar1->fields).loadingAd = 1;
      this_00 = (this->fields).rewardedAd;
      if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals
                  .methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0
         )) {
        func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
      }
      request = MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
      if (this_00 != (RewardedAd *)0x0) {
        GoogleMobileAds::Api::RewardedAd::RewardedAd_LoadAd(this_00,request,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveCallbacks() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_RemoveCallbacks
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).rewardedAd;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__EventHandler<System::EventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_System__Object__System__EventArgs_
             ,
             MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
            );
  if (pRVar1 != (RewardedAd *)0x0) {
    GoogleMobileAds::Api::RewardedAd::RewardedAd_remove_OnAdLoaded
              (pRVar1,(EventHandler_1_EventArgs_ *)pUVar2,(MethodInfo *)0x0);
    pRVar1 = (this->fields).rewardedAd;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>)
    ;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdFailedToLoad_System__Object__GoogleMobileAds__Api__AdErrorEventArgs_
               ,
               MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>__EventHandler_System__Object__void__
              );
    if (pRVar1 != (RewardedAd *)0x0) {
      GoogleMobileAds::Api::RewardedAd::RewardedAd_remove_OnAdFailedToLoad
                (pRVar1,(EventHandler_1_GoogleMobileAds_Api_AdErrorEventArgs_ *)pUVar2,
                 (MethodInfo *)0x0);
      pRVar1 = (this->fields).rewardedAd;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdOpening_System__Object__System__EventArgs_
                 ,
                 MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                );
      if (pRVar1 != (RewardedAd *)0x0) {
        GoogleMobileAds::Api::RewardedAd::RewardedAd_remove_OnAdOpening
                  (pRVar1,(EventHandler_1_EventArgs_ *)pUVar2,(MethodInfo *)0x0);
        pRVar1 = (this->fields).rewardedAd;
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdFailedToShow_System__Object__GoogleMobileAds__Api__AdErrorEventArgs_
                   ,
                   MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>__EventHandler_System__Object__void__
                  );
        if (pRVar1 != (RewardedAd *)0x0) {
          GoogleMobileAds::Api::RewardedAd::RewardedAd_remove_OnAdFailedToShow
                    (pRVar1,(EventHandler_1_GoogleMobileAds_Api_AdErrorEventArgs_ *)pUVar2,
                     (MethodInfo *)0x0);
          pRVar1 = (this->fields).rewardedAd;
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__EventHandler<GoogleMobileAds::Api::Reward>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleUserEarnedReward_System__Object__GoogleMobileAds__Api__Reward_
                     ,
                     MethodInfo__System__EventHandler<GoogleMobileAds::Api::Reward>__EventHandler_System__Object__void__
                    );
          if (pRVar1 != (RewardedAd *)0x0) {
            GoogleMobileAds::Api::RewardedAd::RewardedAd_remove_OnUserEarnedReward
                      (pRVar1,(EventHandler_1_GoogleMobileAds_Api_Reward_ *)pUVar2,(MethodInfo *)0x0
                      );
            pRVar1 = (this->fields).rewardedAd;
            pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar2,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdClosed_System__Object__System__EventArgs_
                       ,
                       MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                      );
            if (pRVar1 != (RewardedAd *)0x0) {
              GoogleMobileAds::Api::RewardedAd::RewardedAd_remove_OnAdClosed
                        (pRVar1,(EventHandler_1_EventArgs_ *)pUVar2,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  (this->fields).rewardedAdCallback = rewardedAdCallback;
  pRVar1 = (this->fields).rewardedAd;
  (this->fields).isHandlingRequest = 1;
  if (pRVar1 != (RewardedAd *)0x0) {
    bVar2 = GoogleMobileAds::Api::RewardedAd::RewardedAd_IsLoaded(pRVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pMVar3 = (this->fields).adLoadState;
      if (pMVar3 != (MobileAdManager_AdLoadState *)0x0) {
        if ((pMVar3->fields).loadingAd == 0) {
          MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd(this,(MethodInfo *)0x0);
        }
        return;
      }
    }
    else {
      pRVar1 = (this->fields).rewardedAd;
      if (pRVar1 != (RewardedAd *)0x0) {
        GoogleMobileAds::Api::RewardedAd::RewardedAd_Show(pRVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupCallbacks() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_SetupCallbacks
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).rewardedAd;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__EventHandler<System::EventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_System__Object__System__EventArgs_
             ,
             MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
            );
  if (pRVar1 != (RewardedAd *)0x0) {
    GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnAdLoaded
              (pRVar1,(EventHandler_1_EventArgs_ *)pUVar2,(MethodInfo *)0x0);
    pRVar1 = (this->fields).rewardedAd;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>)
    ;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdFailedToLoad_System__Object__GoogleMobileAds__Api__AdErrorEventArgs_
               ,
               MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>__EventHandler_System__Object__void__
              );
    if (pRVar1 != (RewardedAd *)0x0) {
      GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnAdFailedToLoad
                (pRVar1,(EventHandler_1_GoogleMobileAds_Api_AdErrorEventArgs_ *)pUVar2,
                 (MethodInfo *)0x0);
      pRVar1 = (this->fields).rewardedAd;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdOpening_System__Object__System__EventArgs_
                 ,
                 MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                );
      if (pRVar1 != (RewardedAd *)0x0) {
        GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnAdOpening
                  (pRVar1,(EventHandler_1_EventArgs_ *)pUVar2,(MethodInfo *)0x0);
        pRVar1 = (this->fields).rewardedAd;
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdFailedToShow_System__Object__GoogleMobileAds__Api__AdErrorEventArgs_
                   ,
                   MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>__EventHandler_System__Object__void__
                  );
        if (pRVar1 != (RewardedAd *)0x0) {
          GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnAdFailedToShow
                    (pRVar1,(EventHandler_1_GoogleMobileAds_Api_AdErrorEventArgs_ *)pUVar2,
                     (MethodInfo *)0x0);
          pRVar1 = (this->fields).rewardedAd;
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__EventHandler<GoogleMobileAds::Api::Reward>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleUserEarnedReward_System__Object__GoogleMobileAds__Api__Reward_
                     ,
                     MethodInfo__System__EventHandler<GoogleMobileAds::Api::Reward>__EventHandler_System__Object__void__
                    );
          if (pRVar1 != (RewardedAd *)0x0) {
            GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnUserEarnedReward
                      (pRVar1,(EventHandler_1_GoogleMobileAds_Api_Reward_ *)pUVar2,(MethodInfo *)0x0
                      );
            pRVar1 = (this->fields).rewardedAd;
            pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar2,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdClosed_System__Object__System__EventArgs_
                       ,
                       MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                      );
            if (pRVar1 != (RewardedAd *)0x0) {
              GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnAdClosed
                        (pRVar1,(EventHandler_1_EventArgs_ *)pUVar2,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_ToString
                   (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this._3_1_ = 0;
  this_00 = (pMVar1->fields).rewardedAd;
  if (this_00 != (RewardedAd *)0x0) {
    this._3_1_ = GoogleMobileAds::Api::RewardedAd::RewardedAd_IsLoaded(this_00,(MethodInfo *)0x0);
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  uStack_2 = CONCAT13(this_00 != (RewardedAd *)0x0,(undefined3)uStack_2);
  pOVar3 = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_2 + 3);
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
  }
  else {
    if (pOVar3 != (Object *)0x0) {
      iVar5 = func_?(pOVar3,(args->klass->_0).element_class);
      if (iVar5 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar3;
    uStack_2._0_3_ = CONCAT12((pMVar1->fields).isHandlingRequest,(undefined2)uStack_2);
    pOVar3 = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_2 + 2);
    if (pOVar3 != (Object *)0x0) {
      iVar5 = func_?(pOVar3,(args->klass->_0).element_class);
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar3;
    pMVar6 = (pMVar1->fields).adLoadState;
    if (pMVar6 != (MobileAdManager_AdLoadState *)0x0) {
      iVar5 = func_?(pMVar6,(args->klass->_0).element_class);
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)pMVar6;
    uStack_2._0_2_ = CONCAT11(this._3_1_,(undefined1)uStack_2);
    pOVar3 = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_2 + 1);
    if (pOVar3 == (Object *)0x0) {
code_?:
      if (3 < args->max_length) {
        args->vector[3] = pOVar3;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar7 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral_rewardedAdCreated__0_u000A_isHandlin,args,
                            (MethodInfo *)0x0);
        return pSVar7;
      }
      goto code_?;
    }
    iVar5 = func_?(pOVar3,(args->klass->_0).element_class);
    if (iVar5 != 0) goto code_?;
  }
  uVar4 = func_?(0,0);
  func_?(uVar4);
code_?:
  uVar4 = func_?(0,0);
  func_?(uVar4);
  pcVar8 = (code *)swi(3);
  pSVar7 = (String *)(*pcVar8)();
  return pSVar7;
}


/* MobileAdManager+InternalStateRewardedAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd__ctor
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar1 = TypeInfo__System__DateTime->static_fields;
  uVar2 = *(undefined4 *)((int)&(pDVar1->MinValue).ticks._ticks + 4);
  iVar3 = (pDVar1->MinValue).kind;
  uVar4 = *(undefined4 *)&(pDVar1->MinValue).field_0xc;
  *(int *)&(this->fields).prevInterstitialTime.ticks._ticks = (int)(pDVar1->MinValue).ticks._ticks;
  *(undefined4 *)((int)&(this->fields).prevInterstitialTime.ticks._ticks + 4) = uVar2;
  (this->fields).prevInterstitialTime.kind = iVar3;
  *(undefined4 *)&(this->fields).prevInterstitialTime.field_0xc = uVar4;
  method_00 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__AdLoadState;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields).adLoadState = (MobileAdManager_AdLoadState *)this_00;
  (this->fields).rewardAdResult = 4;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}


/* Boolean get_IsHandlingRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_get_IsHandlingRequest
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  return (this->fields).isHandlingRequest;
}


/* Boolean get_IsOk() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_get_IsOk
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    return (byte)((uint)(pMVar1->fields).loadAttempts >> 0x1f) ^ 1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* TimeSpan get_TimeSinceLastRewarded() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalStateRewardedAd::
         MobileAdManager_InternalStateRewardedAd_get_TimeSinceLastRewarded
                   (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

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

