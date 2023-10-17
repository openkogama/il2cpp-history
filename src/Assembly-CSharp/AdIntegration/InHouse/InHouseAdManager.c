
/* Void InitializeAdConfigSettings(AdConfigSettings) */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
     InHouseAdManager_InitializeAdConfigSettings
               (InHouseAdManager *this,AdConfigSettings *config,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (config != (AdConfigSettings *)0x0) {
    (this->fields).timeoutAsEnabled = (config->fields)._AdTimeoutAsSuccess_k__BackingField;
    (this->fields).timeoutSuccessDelay = (config->fields)._AdTimeoutAsSuccessDelay_k__BackingField;
    return;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InitializeAdController(InHouseAdController) */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
     InHouseAdManager_InitializeAdController
               (InHouseAdManager *this,InHouseAdController *controller,MethodInfo *method)

{
  (this->fields).inHouseAdController = controller;
  func_?(&(this->fields).inHouseAdController,controller);
  pIVar1 = (this->fields).inHouseAdController;
  iVar2 = (this->fields).timeoutSuccessDelay;
  if (pIVar1 != (InHouseAdController *)0x0) {
    bVar3 = cRam_? == '\0';
    (pIVar1->fields).timeoutAsEnabled = (this->fields).timeoutAsEnabled;
    (pIVar1->fields).timeoutSuccessDelay = iVar2;
    if (bVar3) {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pIVar1 = (this->fields).inHouseAdController;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pIVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    (this->fields)._ReadyForRewardedAdRequest_k__BackingField = bVar4;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnAdFinished() */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::InHouseAdManager_OnAdFinished
               (InHouseAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_InHouseAdManager___OnAdFinished_);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                     ((Boolean *)&(this->fields).rewarded,(IFormatProvider *)0x0,unaff_ESI);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_InHouseAdManager___OnAdFinished_,pSVar1,(MethodInfo *)0x0);
  Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_AdLog_1(pSVar1,(MethodInfo *)0x0);
  if ((this->fields).rewarded == 0) {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    adType = AdType__Enum_InterstitialAd;
  }
  else {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    adType = AdType__Enum_RewardedAd;
  }
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
            (this_01,adType,AdActionType__Enum_Success,AdContext__Enum_None,(MethodInfo *)0x0);
  pIVar2 = (this->fields).inHouseAdController;
  if ((pIVar2 != (InHouseAdController *)0x0) &&
     (this_00 = (pIVar2->fields).generalPromotionAd, this_00 != (GeneralPromotionAd *)0x0)) {
    GeneralPromotionAd::GeneralPromotionAd_Pop(this_00,(MethodInfo *)0x0);
    MVGameControllerDesktop::MVGameControllerDesktop_CursorLock
              ((this->fields).adContext == 0xe,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnInterstitialFinished(Boolean) */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
     InHouseAdManager_OnInterstitialFinished(InHouseAdManager *this,bool obj,MethodInfo *method)

{
  InHouseAdManager_OnAdFinished(this,(MethodInfo *)0x0);
  pAVar1 = (this->fields).interstitialCallback;
  if (pAVar1 != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)((pAVar1->fields)._._.method_code,3);
  }
  return;
}


/* Void OnRewardedFinished(Boolean) */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
     InHouseAdManager_OnRewardedFinished(InHouseAdManager *this,bool obj,MethodInfo *method)

{
  InHouseAdManager_OnAdFinished(this,(MethodInfo *)0x0);
  pAVar1 = (this->fields).rewardCallback;
  if (pAVar1 != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)((pAVar1->fields)._._.method_code,3);
  }
  return;
}


/* Void PrepareAd(Boolean, AdContext) */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::InHouseAdManager_PrepareAd
               (InHouseAdManager *this,bool reward,AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
    func_?(&StringLiteral_InHouseAdManager___Preparing_ad_);
    func_?(&StringLiteral__context_);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                     ((Boolean *)&reward,(IFormatProvider *)0x0,unaff_EDI);
  adContext = context;
  EStack_2.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
  EStack_2.monitor = (MonitorData *)0xffffffff;
  AStack_3 = context;
  str3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_5
                     (StringLiteral_InHouseAdManager___Preparing_ad_,pSVar1,StringLiteral__context_,
                      str3,(MethodInfo *)0x0);
  Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_AdLog_1(pSVar1,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  bVar4 = reward != 0;
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    method = (MethodInfo *)adContext;
    context = AdContext__Enum_None;
    _reward = (undefined *)(uint)bVar4;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
              (this_00,(uint)bVar4,AdActionType__Enum_Start,adContext,(MethodInfo *)0x0);
    method = (MethodInfo *)0x0;
    context = AdContext__Enum_None;
    _reward = &UNK_?;
    MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(0,0,(MethodInfo *)0x0);
    this_00[1].klass = (MVNetworkGame_OperationRequests__Class *)adContext;
    *(bool *)&(this_00->fields).peer = reward;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RequestInterstitial(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult], AdContext)
    */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
     InHouseAdManager_RequestInterstitial
               (InHouseAdManager *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *callback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__AdIntegration__InHouse__InHouseAdManager__OnInterstitialFinished_bool_
                   );
    func_?(&StringLiteral_InHouseAdManager___RequestInters);
    func_?(&StringLiteral_InHouseAdManager___RequestInters);
    func_?(&StringLiteral_InHouseAdManager___RequestInters);
    cRam_? = '\x01';
  }
  Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_AdLog_1
            (StringLiteral_InHouseAdManager___RequestInters,(MethodInfo *)0x0);
  pIVar1 = (this->fields).inHouseAdController;
  if (pIVar1 != (InHouseAdController *)0x0) {
    if ((pIVar1->fields)._Showing_k__BackingField == 0) {
      if ((this->fields)._ReadyForRewardedAdRequest_k__BackingField == 0) {
        Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_AdLog_1
                  (StringLiteral_InHouseAdManager___RequestInters,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_InHouseAdManager___RequestInters,(MethodInfo *)0x0);
        if (callback != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
          (*(callback->fields)._._.invoke_impl)();
          return;
        }
      }
      else {
        (this->fields).interstitialCallback = callback;
        func_?(&(this->fields).interstitialCallback,callback);
        InHouseAdManager_PrepareAd(this,0,context,(MethodInfo *)0x0);
        pIVar1 = (this->fields).inHouseAdController;
        this_00 = (UnityAction_1_System_ByteEnum_ *)func_?(TypeInfo__System__Action<bool>);
        if (this_00 != (UnityAction_1_System_ByteEnum_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
          UnityAction_1_System_ByteEnum___ctor
                    (this_00,(Object *)this,
                     MethodInfo__AdIntegration__InHouse__InHouseAdManager__OnInterstitialFinished_bool_
                     ,(MethodInfo *)0x0);
          if (pIVar1 != (InHouseAdController *)0x0) {
            InHouseAdController::InHouseAdController_ShowInHouseAd
                      (pIVar1,(Action_1_Boolean_ *)this_00,5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_InHouseAdManager___RequestInters,(MethodInfo *)0x0);
      if (callback != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
        (*(callback->fields)._._.invoke_impl)();
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RequestRewardedAd(Action`1[Assets.Scripts.AdIntegration.RewardedAdResult], AdContext) */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
     InHouseAdManager_RequestRewardedAd
               (InHouseAdManager *this,
               Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *rewardedAdCallback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__AdIntegration__InHouse__InHouseAdManager__OnRewardedFinished_bool_)
    ;
    func_?(&StringLiteral_InHouseAdManager___RequestReward);
    func_?(&StringLiteral_InHouseAdManager___RequestReward);
    func_?(&StringLiteral_InHouseAdManager___RequestReward);
    cRam_? = '\x01';
  }
  Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_AdLog_1
            (StringLiteral_InHouseAdManager___RequestReward,(MethodInfo *)0x0);
  pIVar1 = (this->fields).inHouseAdController;
  if (pIVar1 != (InHouseAdController *)0x0) {
    if ((pIVar1->fields)._Showing_k__BackingField == 0) {
      if ((this->fields)._ReadyForRewardedAdRequest_k__BackingField == 0) {
        Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_AdLog_1
                  (StringLiteral_InHouseAdManager___RequestReward,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_InHouseAdManager___RequestReward,(MethodInfo *)0x0);
        if (rewardedAdCallback != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
          (*(rewardedAdCallback->fields)._._.invoke_impl)();
          return;
        }
      }
      else {
        (this->fields).rewardCallback = rewardedAdCallback;
        func_?(&(this->fields).rewardCallback,rewardedAdCallback);
        InHouseAdManager_PrepareAd(this,1,context,(MethodInfo *)0x0);
        pIVar1 = (this->fields).inHouseAdController;
        this_00 = (UnityAction_1_System_ByteEnum_ *)func_?(TypeInfo__System__Action<bool>);
        if (this_00 != (UnityAction_1_System_ByteEnum_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
          UnityAction_1_System_ByteEnum___ctor
                    (this_00,(Object *)this,
                     MethodInfo__AdIntegration__InHouse__InHouseAdManager__OnRewardedFinished_bool_,
                     (MethodInfo *)0x0);
          if (pIVar1 != (InHouseAdController *)0x0) {
            InHouseAdController::InHouseAdController_ShowInHouseAd
                      (pIVar1,(Action_1_Boolean_ *)this_00,(pIVar1->fields).timeoutSuccessDelay,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_AdLog_1
                (StringLiteral_InHouseAdManager___RequestReward,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_InHouseAdManager___RequestReward,(MethodInfo *)0x0);
      if (rewardedAdCallback != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
        (*(rewardedAdCallback->fields)._._.invoke_impl)();
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateInitStatus() */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
     InHouseAdManager_UpdateInitStatus(InHouseAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).inHouseAdController;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  (this->fields)._ReadyForRewardedAdRequest_k__BackingField = bVar1;
  return;
}


/* InHouseAdManager() */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::InHouseAdManager__ctor
               (InHouseAdManager *this,MethodInfo *method)

{
  (this->fields).timeoutSuccessDelay = 0x14;
  return;
}


/* String get_RewardedAdNotAvailableText() */

String * Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
         InHouseAdManager_get_RewardedAdNotAvailableText(InHouseAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Ads_not_set_up_for_this_build_ta);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Ads_not_set_up_for_this_build_ta,(MethodInfo *)0x0);
  return pSVar1;
}


/* TimeSpan get_TimeSinceLastAd() */

TimeSpan Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
         InHouseAdManager_get_TimeSinceLastAd(InHouseAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__TimeSpan);
  }
  return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
}


/* TimeSpan get_TimeSinceLastInterstitial() */

TimeSpan Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
         InHouseAdManager_get_TimeSinceLastInterstitial(InHouseAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__TimeSpan);
  }
  return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
}


/* TimeSpan get_TimeSinceLastRewarded() */

TimeSpan Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
         InHouseAdManager_get_TimeSinceLastRewarded(InHouseAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__TimeSpan);
  }
  return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
}

