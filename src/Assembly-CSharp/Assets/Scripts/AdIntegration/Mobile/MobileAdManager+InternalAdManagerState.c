
/* Void Destroy() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::MobileAdManager_InternalAdManagerState_Destroy
               (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalAdManagerState_Destroy);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_InternalAdManagerState_Destroy,(MethodInfo *)0x0);
  this_00 = (this->fields).internalStateRewardedAds;
  if (this_00 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&StringLiteral_InternalStateRewardedAd_Destroy);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_InternalStateRewardedAd_Destroy,(MethodInfo *)0x0);
    (this_00->fields).rewardedAdCallback =
         (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0;
    func_?(&(this_00->fields).rewardedAdCallback,0);
    MobileAdManager+InternalStateRewardedAd::
    MobileAdManager_InternalStateRewardedAd_DestroyRewardedAd(this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).internalStateInterstitial;
    if (this_01 != (MobileAdManager_InternalStateInterstitial *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Debug);
        func_?(&StringLiteral_InternalStateInterstitial_Destro);
        cRam_? = '\x01';
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_InternalStateInterstitial_Destro,(MethodInfo *)0x0);
      MobileAdManager+InternalStateInterstitial::
      MobileAdManager_InternalStateInterstitial_DestroyInterstitial(this_01,(MethodInfo *)0x0);
      (this_01->fields).interstitialAdCallback =
           (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0;
      func_?(&(this_01->fields).interstitialAdCallback,0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::MobileAdManager_InternalAdManagerState_Initialize
               (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InternalAdManagerState_Initializ);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_InternalAdManagerState_Initializ,(MethodInfo *)0x0);
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
  func_?();
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
  uStack_1 = in_ECX;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Interstitial_ad_request_is_not_r);
    func_?(&StringLiteral_InternalAdManagerState_RequestIn);
    cRam_? = '\x01';
  }
  if ((this->fields).isReady == 0) {
code_?:
    bVar2 = 0;
  }
  else {
    pMVar3 = (this->fields).internalStateRewardedAds;
    if (pMVar3 == (MobileAdManager_InternalStateRewardedAd *)0x0) goto code_?;
    if ((pMVar3->fields).isHandlingRequest != 0) goto code_?;
    pMVar4 = (this->fields).internalStateInterstitial;
    if (pMVar4 == (MobileAdManager_InternalStateInterstitial *)0x0) goto code_?;
    if ((pMVar4->fields).isHandlingRequest != 0) goto code_?;
    pMVar5 = (((this->fields).internalStateInterstitial)->fields).adLoadState;
    if (pMVar5 == (MobileAdManager_AdLoadState *)0x0) goto code_?;
    bVar2 = (byte)((uint)(pMVar5->fields).loadAttempts >> 0x1f) ^ 1;
  }
  uStack_1 = (undefined *)CONCAT13(bVar2,(undefined3)uStack_1);
  pSVar6 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                     ((Boolean *)((int)&uStack_1 + 3),(IFormatProvider *)0x0,unaff_EDI);
  pSVar6 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_InternalAdManagerState_RequestIn,pSVar6,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar6,(MethodInfo *)0x0);
  if ((this->fields).isReady != 0) {
    pMVar3 = (this->fields).internalStateRewardedAds;
    if (pMVar3 == (MobileAdManager_InternalStateRewardedAd *)0x0) goto code_?;
    if ((pMVar3->fields).isHandlingRequest == 0) {
      pMVar4 = (this->fields).internalStateInterstitial;
      if (pMVar4 == (MobileAdManager_InternalStateInterstitial *)0x0) goto code_?;
      if ((pMVar4->fields).isHandlingRequest == 0) {
        pMVar5 = (((this->fields).internalStateInterstitial)->fields).adLoadState;
        if (pMVar5 == (MobileAdManager_AdLoadState *)0x0) goto code_?;
        if (-1 < (pMVar5->fields).loadAttempts) {
          pMVar4 = (this->fields).internalStateInterstitial;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar6 = StringLiteral_InternalStateInterstitial_Reques;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_InternalStateInterstitial_Reques,(MethodInfo *)0x0);
          (pMVar4->fields).interstitialAdCallback =
               (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)pSVar6;
          func_?();
          (pMVar4->fields).isHandlingRequest = 1;
          if (((pMVar4->fields).interstitial == (InterstitialAd *)0x0) ||
             (bVar7 = GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedInterstitialAd::
                      RewardedInterstitialAd_CanShowAd
                                ((RewardedInterstitialAd *)(pMVar4->fields).interstitial,
                                 (MethodInfo *)0x0), bVar7 == 0)) {
            pMVar5 = (pMVar4->fields).adLoadState;
            if (pMVar5 != (MobileAdManager_AdLoadState *)0x0) {
              if ((pMVar5->fields).loadingAd != 0) {
                return;
              }
              MobileAdManager+InternalStateInterstitial::
              MobileAdManager_InternalStateInterstitial_CreateAndLoadInterstitialAd
                        (pMVar4,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)StringLiteral_InternalStateInterstitial_Reques,(MethodInfo *)0x0);
            this_00 = (pMVar4->fields).interstitial;
            if (this_00 != (InterstitialAd *)0x0) {
              GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::InterstitialAd_Show
                        (this_00,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar6 = StringLiteral_Interstitial_ad_request_is_not_r;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_Interstitial_ad_request_is_not_r,(MethodInfo *)0x0);
  if (pSVar6 != (String *)0x0) {
    (**(code **)&(pSVar6->fields)._firstChar)();
    return;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Rewarded_ad_request_is_not_ready);
    func_?(&StringLiteral_InternalAdManagerState_RequestRe);
    cRam_? = '\x01';
  }
  if (((this->fields).isReady != 0) &&
     ((pMVar1 = (this->fields).internalStateRewardedAds,
      pMVar1 == (MobileAdManager_InternalStateRewardedAd *)0x0 ||
      (((pMVar1->fields).isHandlingRequest == 0 &&
       ((pMVar2 = (this->fields).internalStateInterstitial,
        pMVar2 == (MobileAdManager_InternalStateInterstitial *)0x0 ||
        (((pMVar2->fields).isHandlingRequest == 0 &&
         ((((this->fields).internalStateRewardedAds)->fields).adLoadState ==
          (MobileAdManager_AdLoadState *)0x0)))))))))) goto code_?;
  pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                     ((Boolean *)&stack0xfffffffb,(IFormatProvider *)0x0,unaff_EDI);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_InternalAdManagerState_RequestRe,pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  if ((this->fields).isReady != 0) {
    pMVar1 = (this->fields).internalStateRewardedAds;
    if (pMVar1 == (MobileAdManager_InternalStateRewardedAd *)0x0) goto code_?;
    if ((pMVar1->fields).isHandlingRequest == 0) {
      pMVar2 = (this->fields).internalStateInterstitial;
      if (pMVar2 == (MobileAdManager_InternalStateInterstitial *)0x0) goto code_?;
      if ((pMVar2->fields).isHandlingRequest == 0) {
        pMVar4 = (((this->fields).internalStateRewardedAds)->fields).adLoadState;
        if (pMVar4 == (MobileAdManager_AdLoadState *)0x0) goto code_?;
        if (-1 < (pMVar4->fields).loadAttempts) {
          pMVar1 = (this->fields).internalStateRewardedAds;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_InternalStateRewardedAd_RequestR,(MethodInfo *)0x0);
          (pMVar1->fields).rewardedAdCallback =
               (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0;
          func_?();
          (pMVar1->fields).isHandlingRequest = 1;
          if (((pMVar1->fields).rewardedAd == (RewardedAd *)0x0) ||
             (bVar5 = GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedInterstitialAd::
                      RewardedInterstitialAd_CanShowAd
                                ((RewardedInterstitialAd *)(pMVar1->fields).rewardedAd,
                                 (MethodInfo *)0x0), bVar5 == 0)) {
            pMVar4 = (pMVar1->fields).adLoadState;
            if (pMVar4 != (MobileAdManager_AdLoadState *)0x0) {
              if ((pMVar4->fields).loadingAd != 0) {
                return;
              }
              MobileAdManager+InternalStateRewardedAd::
              MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd
                        (pMVar1,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            this_00 = (pMVar1->fields).rewardedAd;
            this_01 = (Action_1_Object_ *)func_?();
            if ((this_01 != (Action_1_Object_ *)0x0) &&
               (mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                          (this_01,(Object *)pMVar1,
                           MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__UserRewardEarnedCallback_GoogleMobileAds__Api__Reward_
                           ,(MethodInfo *)0x0), this_00 != (RewardedAd *)0x0)) {
              GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_Show
                        (this_00,(Action_1_GoogleMobileAds_Api_Reward_ *)this_01,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_Rewarded_ad_request_is_not_ready,(MethodInfo *)0x0);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalAdManagerState::MobileAdManager_InternalAdManagerState_ToString
                   (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&StringLiteral_isReady__0_u000A_internalStateInters);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  this = (MobileAdManager_InternalAdManagerState *)CONCAT13((this->fields).isReady,this._0_3_);
  arg0 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  pSVar2 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_isReady__0_u000A_internalStateInters,arg0,
                      (Object *)(pMVar1->fields).internalStateInterstitial,
                      (Object *)(pMVar1->fields).internalStateRewardedAds,(MethodInfo *)0x0);
  return pSVar2;
}


/* MobileAdManager+InternalAdManagerState() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::MobileAdManager_InternalAdManagerState__ctor
               (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd
                   );
    func_?(&StringLiteral_InternalAdManagerState_construct);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_InternalAdManagerState_construct,(MethodInfo *)0x0);
  value = (MobileAdManager_InternalStateRewardedAd *)
          func_?(
                         TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd
                         );
  if (value != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__AdLoadState
                     );
      func_?(&TypeInfo__System__DateTime);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__DateTime);
    }
    uVar1 = *(undefined4 *)
             ((int)&(TypeInfo__System__DateTime->static_fields->MinValue)._dateData + 4);
    *(int *)&(value->fields).prevInterstitialTime._dateData =
         (int)(TypeInfo__System__DateTime->static_fields->MinValue)._dateData;
    *(undefined4 *)((int)&(value->fields).prevInterstitialTime._dateData + 4) = uVar1;
    pMVar2 = (MobileAdManager_AdLoadState *)
             func_?(
                            TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__AdLoadState
                            );
    if (pMVar2 != (MobileAdManager_AdLoadState *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)pMVar2,ExceptionArgument__Enum_obj,unaff_retaddr);
      pMVar3 = (MethodInfo *)&(value->fields).adLoadState;
      (value->fields).adLoadState = pMVar2;
      func_?(pMVar3,pMVar2);
      (value->fields).rewardAdResult = 4;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)value,ExceptionArgument__Enum_obj,pMVar3);
      (this->fields).internalStateRewardedAds = value;
      func_?(&(this->fields).internalStateRewardedAds,value);
      value_00 = (MobileAdManager_InternalStateInterstitial *)
                 func_?(
                                TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial
                                );
      if (value_00 != (MobileAdManager_InternalStateInterstitial *)0x0) {
        if (cRam_? == '\0') {
          func_?(&
                          TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__AdLoadState
                         );
          func_?(&TypeInfo__System__DateTime);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__DateTime);
        }
        uVar1 = *(undefined4 *)
                 ((int)&(TypeInfo__System__DateTime->static_fields->MinValue)._dateData + 4);
        *(int *)&(value_00->fields).prevInterstitialTime._dateData =
             (int)(TypeInfo__System__DateTime->static_fields->MinValue)._dateData;
        *(undefined4 *)((int)&(value_00->fields).prevInterstitialTime._dateData + 4) = uVar1;
        pMVar2 = (MobileAdManager_AdLoadState *)
                 func_?(
                                TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__AdLoadState
                                );
        if (pMVar2 != (MobileAdManager_AdLoadState *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)pMVar2,ExceptionArgument__Enum_obj,unaff_retaddr);
          pMVar3 = (MethodInfo *)&(value_00->fields).adLoadState;
          (value_00->fields).adLoadState = pMVar2;
          func_?(pMVar3,pMVar2);
          (value_00->fields).interstitialAdResult = 3;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)value_00,ExceptionArgument__Enum_obj,pMVar3);
          (this->fields).internalStateInterstitial = value_00;
          func_?(&(this->fields).internalStateInterstitial,value_00);
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


/* Boolean get_IsHandlingRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::
     MobileAdManager_InternalAdManagerState_get_IsHandlingRequest
               (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).internalStateRewardedAds;
  if (pMVar2 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    if ((pMVar2->fields).isHandlingRequest != 0) {
      return 1;
    }
    pMVar3 = (this->fields).internalStateInterstitial;
    if (pMVar3 != (MobileAdManager_InternalStateInterstitial *)0x0) {
      return (pMVar3->fields).isHandlingRequest;
    }
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Boolean get_ReadyForInterstitialAdRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::
     MobileAdManager_InternalAdManagerState_get_ReadyForInterstitialAdRequest
               (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields).isReady == 0) {
    return 0;
  }
  pMVar2 = (this->fields).internalStateRewardedAds;
  if (pMVar2 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    if ((pMVar2->fields).isHandlingRequest != 0) {
      return 0;
    }
    pMVar3 = (this->fields).internalStateInterstitial;
    if (pMVar3 != (MobileAdManager_InternalStateInterstitial *)0x0) {
      if ((pMVar3->fields).isHandlingRequest != 0) {
        return 0;
      }
      pMVar4 = (((this->fields).internalStateInterstitial)->fields).adLoadState;
      if (pMVar4 != (MobileAdManager_AdLoadState *)0x0) {
        return (byte)((uint)(pMVar4->fields).loadAttempts >> 0x1f) ^ 1;
      }
    }
  }
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Boolean get_ReadyForRewardedAdRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::
     MobileAdManager_InternalAdManagerState_get_ReadyForRewardedAdRequest
               (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields).isReady == 0) {
    return 0;
  }
  pMVar2 = (this->fields).internalStateRewardedAds;
  if (pMVar2 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    if ((pMVar2->fields).isHandlingRequest != 0) {
      return 0;
    }
    pMVar3 = (this->fields).internalStateInterstitial;
    if (pMVar3 != (MobileAdManager_InternalStateInterstitial *)0x0) {
      if ((pMVar3->fields).isHandlingRequest != 0) {
        return 0;
      }
      pMVar4 = (((this->fields).internalStateRewardedAds)->fields).adLoadState;
      if (pMVar4 != (MobileAdManager_AdLoadState *)0x0) {
        return (byte)((uint)(pMVar4->fields).loadAttempts >> 0x1f) ^ 1;
      }
    }
  }
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* TimeSpan get_TimeSinceLastAd() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalAdManagerState::
         MobileAdManager_InternalAdManagerState_get_TimeSinceLastAd
                   (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  val1 = MobileAdManager_InternalAdManagerState_get_TimeSinceLastInterstitial
                   (this,(MethodInfo *)0x0);
  TVar1 = MobileAdManager_InternalAdManagerState_get_TimeSinceLastRewarded(this,(MethodInfo *)0x0);
  pMVar2 = (Math__Class *)((ulonglong)TVar1._ticks >> 0x20);
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    pMVar2 = TypeInfo__System__Math;
    func_?();
  }
  iVar3 = mscorlib.dll::System::Math::Math_Min_2
                    (val1._ticks,CONCAT44(pMVar2,(int)TVar1._ticks),(MethodInfo *)0x0);
  return (TimeSpan)iVar3;
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
      func_?(&TypeInfo__System__DateTime);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__DateTime);
    }
    d1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
    TVar2 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                      (d1,(DateTime)(pMVar1->fields).prevInterstitialTime._dateData,
                       (MethodInfo *)0x0);
    return (TimeSpan)TVar2._ticks;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  TVar2._ticks = (*pcVar3)();
  return (TimeSpan)TVar2._ticks;
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
      func_?(&TypeInfo__System__DateTime);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__DateTime);
    }
    d1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
    TVar2 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                      (d1,(DateTime)(pMVar1->fields).prevInterstitialTime._dateData,
                       (MethodInfo *)0x0);
    return (TimeSpan)TVar2._ticks;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  TVar2._ticks = (*pcVar3)();
  return (TimeSpan)TVar2._ticks;
}

