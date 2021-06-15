
/* Void Destroy() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::MobileAdManager_InternalAdManagerState_Destroy
               (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  this_00 = (this->fields).internalStateRewardedAds;
  if (this_00 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    (this_00->fields).rewardedAdCallback =
         (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0;
    MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_RemoveCallbacks
              (this_00,(MethodInfo *)0x0);
    (this_00->fields).rewardedAd = (RewardedAd *)0x0;
    this_01 = (this->fields).internalStateInterstitial;
    if (this_01 != (MobileAdManager_InternalStateInterstitial *)0x0) {
      MobileAdManager+InternalStateInterstitial::
      MobileAdManager_InternalStateInterstitial_DestroyInterstitial(this_01,(MethodInfo *)0x0);
      (this_01->fields).interstitialAdCallback =
           (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0;
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::MobileAdManager_InternalAdManagerState_Initialize
               (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  this_00 = (this->fields).internalStateRewardedAds;
  if (this_00 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    MobileAdManager+InternalStateRewardedAd::
    MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd(this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).internalStateInterstitial;
    if (this_01 != (MobileAdManager_InternalStateInterstitial *)0x0) {
      MobileAdManager+InternalStateInterstitial::
      MobileAdManager_InternalStateInterstitial_CreateAndLoadInterstitialAd
                (this_01,(MethodInfo *)0x0);
      (this->fields).isReady = 1;
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RequestInterstitial(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult]) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::
     MobileAdManager_InternalAdManagerState_RequestInterstitial
               (MobileAdManager_InternalAdManagerState *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *interstitialCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isReady != 0) {
    pMVar1 = (this->fields).internalStateRewardedAds;
    if (pMVar1 == (MobileAdManager_InternalStateRewardedAd *)0x0) goto code_?;
    if ((pMVar1->fields).isHandlingRequest == 0) {
      this_00 = (this->fields).internalStateInterstitial;
      if (this_00 == (MobileAdManager_InternalStateInterstitial *)0x0) goto code_?;
      if ((this_00->fields).isHandlingRequest == 0) {
        if ((this_00 == (MobileAdManager_InternalStateInterstitial *)0x0) ||
           (pMVar2 = (this_00->fields).adLoadState, pMVar2 == (MobileAdManager_AdLoadState *)0x0))
        goto code_?;
        if (-1 < (pMVar2->fields).loadAttempts) {
          if (this_00 != (MobileAdManager_InternalStateInterstitial *)0x0) {
            (this_00->fields).interstitialAdCallback = interstitialCallback;
            pIVar3 = (this_00->fields).interstitial;
            (this_00->fields).isHandlingRequest = 1;
            if (pIVar3 != (InterstitialAd *)0x0) {
              bVar4 = GoogleMobileAds::Api::InterstitialAd::InterstitialAd_IsLoaded
                                (pIVar3,(MethodInfo *)0x0);
              if (bVar4 == 0) {
                pMVar2 = (this_00->fields).adLoadState;
                if (pMVar2 != (MobileAdManager_AdLoadState *)0x0) {
                  if ((pMVar2->fields).loadingAd == 0) {
                    MobileAdManager+InternalStateInterstitial::
                    MobileAdManager_InternalStateInterstitial_CreateAndLoadInterstitialAd
                              (this_00,(MethodInfo *)0x0);
                  }
                  return;
                }
              }
              else {
                pIVar3 = (this_00->fields).interstitial;
                if (pIVar3 != (InterstitialAd *)0x0) {
                  GoogleMobileAds::Api::InterstitialAd::InterstitialAd_Show
                            (pIVar3,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          goto code_?;
        }
      }
    }
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_Interstitial_ad_request_is_not_r,(MethodInfo *)0x0);
  if (interstitialCallback != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              ((Action_1_UIPushOption_ *)interstitialCallback,UIPushOption__Enum_None,
               MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Invoke_Assets__Scripts__AdIntegration__InterstitialAdResult_
              );
    return;
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RequestRewardedAd(Action`1[Assets.Scripts.AdIntegration.RewardedAdResult]) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::
     MobileAdManager_InternalAdManagerState_RequestRewardedAd
               (MobileAdManager_InternalAdManagerState *this,
               Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *rewardedAdCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isReady != 0) {
    this_00 = (this->fields).internalStateRewardedAds;
    if (this_00 == (MobileAdManager_InternalStateRewardedAd *)0x0) goto code_?;
    if ((this_00->fields).isHandlingRequest == 0) {
      pMVar1 = (this->fields).internalStateInterstitial;
      if (pMVar1 == (MobileAdManager_InternalStateInterstitial *)0x0) goto code_?;
      if ((pMVar1->fields).isHandlingRequest == 0) {
        if ((this_00 == (MobileAdManager_InternalStateRewardedAd *)0x0) ||
           (pMVar2 = (this_00->fields).adLoadState, pMVar2 == (MobileAdManager_AdLoadState *)0x0))
        goto code_?;
        if (-1 < (pMVar2->fields).loadAttempts) {
          if (this_00 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
            (this_00->fields).rewardedAdCallback = rewardedAdCallback;
            pRVar3 = (this_00->fields).rewardedAd;
            (this_00->fields).isHandlingRequest = 1;
            if (pRVar3 != (RewardedAd *)0x0) {
              bVar4 = GoogleMobileAds::Api::RewardedAd::RewardedAd_IsLoaded
                                (pRVar3,(MethodInfo *)0x0);
              if (bVar4 == 0) {
                pMVar2 = (this_00->fields).adLoadState;
                if (pMVar2 != (MobileAdManager_AdLoadState *)0x0) {
                  if ((pMVar2->fields).loadingAd == 0) {
                    MobileAdManager+InternalStateRewardedAd::
                    MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd
                              (this_00,(MethodInfo *)0x0);
                  }
                  return;
                }
              }
              else {
                pRVar3 = (this_00->fields).rewardedAd;
                if (pRVar3 != (RewardedAd *)0x0) {
                  GoogleMobileAds::Api::RewardedAd::RewardedAd_Show(pRVar3,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          goto code_?;
        }
      }
    }
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_Rewarded_ad_request_is_not_ready,(MethodInfo *)0x0);
  if (rewardedAdCallback != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              ((Action_1_UIPushOption_ *)rewardedAdCallback,UIPushOption__Enum_None,
               MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Invoke_Assets__Scripts__AdIntegration__RewardedAdResult_
              );
    return;
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalAdManagerState::MobileAdManager_InternalAdManagerState_ToString
                   (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  this = (MobileAdManager_InternalAdManagerState *)CONCAT13((this->fields).isReady,this._0_3_);
  arg0 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  arg1 = (pMVar1->fields).internalStateInterstitial;
  arg2 = (pMVar1->fields).internalStateRewardedAds;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar2 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_isReady__0_u000A_internalStateInters,arg0,(Object *)arg1,
                      (Object *)arg2,(MethodInfo *)0x0);
  return pSVar2;
}


/* MobileAdManager+InternalAdManagerState() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::MobileAdManager_InternalAdManagerState__ctor
               (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  this_00 = (MobileAdManager_InternalStateRewardedAd *)
            func_?(
                           TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd
                           );
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
  fVar3 = (float)(pDVar1->MinValue).kind;
  fVar4 = *(float *)&(pDVar1->MinValue).field_0xc;
  (((Component_1__Fields *)&(this_00->fields).prevInterstitialTime.ticks._ticks)->_).m_CachedPtr =
       *(void **)&(pDVar1->MinValue).ticks._ticks;
  ((Component_1__Fields *)&(this_00->fields).prevInterstitialTime.ticks._ticks)[1] =
       (Component_1__Fields)uVar2;
  ((Vector3 *)&(this_00->fields).prevInterstitialTime.kind)->x = fVar3;
  *(float *)&(this_00->fields).prevInterstitialTime.field_0xc = fVar4;
  pMVar5 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__AdLoadState;
  pSVar6 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar6,0.0,(MethodInfo *)pMVar5);
  (this_00->fields).adLoadState = (MobileAdManager_AdLoadState *)pSVar6;
  (this_00->fields).rewardAdResult = 4;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this_00,0.0,(MethodInfo *)pMVar5);
  (this->fields).internalStateRewardedAds = this_00;
  this_01 = (MobileAdManager_InternalStateInterstitial *)
            func_?(
                           TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial
                           );
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?();
  }
  pDVar1 = TypeInfo__System__DateTime->static_fields;
  uVar2 = *(undefined4 *)((int)&(pDVar1->MinValue).ticks._ticks + 4);
  fVar3 = (float)(pDVar1->MinValue).kind;
  fVar4 = *(float *)&(pDVar1->MinValue).field_0xc;
  (((Component_1__Fields *)&(this_01->fields).prevInterstitialTime.ticks._ticks)->_).m_CachedPtr =
       *(void **)&(pDVar1->MinValue).ticks._ticks;
  ((Component_1__Fields *)&(this_01->fields).prevInterstitialTime.ticks._ticks)[1] =
       (Component_1__Fields)uVar2;
  ((Vector3 *)&(this_01->fields).prevInterstitialTime.kind)->x = fVar3;
  *(float *)&(this_01->fields).prevInterstitialTime.field_0xc = fVar4;
  pMVar5 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__AdLoadState;
  pSVar6 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar6,0.0,(MethodInfo *)pMVar5);
  (this_01->fields).adLoadState = (MobileAdManager_AdLoadState *)pSVar6;
  (this_01->fields).interstitialAdResult = 3;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this_01,0.0,(MethodInfo *)pMVar5);
  (this->fields).internalStateInterstitial = this_01;
  return;
}


/* Boolean get_IsHandlingRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::
     MobileAdManager_InternalAdManagerState_get_IsHandlingRequest
               (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  pMVar1 = (this->fields).internalStateRewardedAds;
  if (pMVar1 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    if ((pMVar1->fields).isHandlingRequest != 0) {
      return 1;
    }
    pMVar2 = (this->fields).internalStateInterstitial;
    if (pMVar2 != (MobileAdManager_InternalStateInterstitial *)0x0) {
      return (pMVar2->fields).isHandlingRequest != 0;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean get_ReadyForInterstitialAdRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::
     MobileAdManager_InternalAdManagerState_get_ReadyForInterstitialAdRequest
               (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  if ((this->fields).isReady == 0) {
    return 0;
  }
  pMVar1 = (this->fields).internalStateRewardedAds;
  if (pMVar1 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    if ((pMVar1->fields).isHandlingRequest != 0) {
      return 0;
    }
    pMVar2 = (this->fields).internalStateInterstitial;
    if (pMVar2 != (MobileAdManager_InternalStateInterstitial *)0x0) {
      if ((pMVar2->fields).isHandlingRequest != 0) {
        return 0;
      }
      if ((pMVar2 != (MobileAdManager_InternalStateInterstitial *)0x0) &&
         (pMVar3 = (pMVar2->fields).adLoadState, pMVar3 != (MobileAdManager_AdLoadState *)0x0)) {
        return (byte)~(byte)((uint)(pMVar3->fields).loadAttempts >> 0x18) >> 7;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean get_ReadyForRewardedAdRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::
     MobileAdManager_InternalAdManagerState_get_ReadyForRewardedAdRequest
               (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  if ((this->fields).isReady == 0) {
    return 0;
  }
  pMVar1 = (this->fields).internalStateRewardedAds;
  if (pMVar1 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    if ((pMVar1->fields).isHandlingRequest != 0) {
      return 0;
    }
    pMVar2 = (this->fields).internalStateInterstitial;
    if (pMVar2 != (MobileAdManager_InternalStateInterstitial *)0x0) {
      if ((pMVar2->fields).isHandlingRequest != 0) {
        return 0;
      }
      if ((pMVar1 != (MobileAdManager_InternalStateRewardedAd *)0x0) &&
         (pMVar3 = (pMVar1->fields).adLoadState, pMVar3 != (MobileAdManager_AdLoadState *)0x0)) {
        return (byte)~(byte)((uint)(pMVar3->fields).loadAttempts >> 0x18) >> 7;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* TimeSpan get_TimeSinceLastAd() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalAdManagerState::
         MobileAdManager_InternalAdManagerState_get_TimeSinceLastAd
                   (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  iStack_1 = 0;
  iStack_2 = 0;
  iStack_1 = (int64_t)MobileAdManager_InternalAdManagerState_get_TimeSinceLastInterstitial
                                (this,(MethodInfo *)0x0);
  iVar3 = func_?(&iStack_1,0);
  iStack_2 = (int64_t)MobileAdManager_InternalAdManagerState_get_TimeSinceLastRewarded
                                 (this,(MethodInfo *)0x0);
  val2 = func_?(&iStack_2,0);
  iVar3 = mscorlib.dll::System::Math::Math_Min_3(iVar3,val2,(MethodInfo *)0x0);
  iStack_4 = 0;
  func_?(&iStack_4,iVar3,0);
  return (TimeSpan)iStack_4;
}


/* TimeSpan get_TimeSinceLastInterstitial() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalAdManagerState::
         MobileAdManager_InternalAdManagerState_get_TimeSinceLastInterstitial
                   (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  pMVar1 = (this->fields).internalStateInterstitial;
  if (pMVar1 != (MobileAdManager_InternalStateInterstitial *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__DateTime);
    }
    pDVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now
                       ((DateTime *)&stack0xffffffec,(MethodInfo *)0x0);
    TVar3 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction
                      (*pDVar2,(pMVar1->fields).prevInterstitialTime,(MethodInfo *)0x0);
    return (TimeSpan)TVar3._ticks;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  TVar3._ticks = (*pcVar4)();
  return (TimeSpan)TVar3._ticks;
}


/* TimeSpan get_TimeSinceLastRewarded() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalAdManagerState::
         MobileAdManager_InternalAdManagerState_get_TimeSinceLastRewarded
                   (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  pMVar1 = (this->fields).internalStateRewardedAds;
  if (pMVar1 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__DateTime);
    }
    pDVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now
                       ((DateTime *)&stack0xffffffec,(MethodInfo *)0x0);
    TVar3 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction
                      (*pDVar2,(pMVar1->fields).prevInterstitialTime,(MethodInfo *)0x0);
    return (TimeSpan)TVar3._ticks;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  TVar3._ticks = (*pcVar4)();
  return (TimeSpan)TVar3._ticks;
}

