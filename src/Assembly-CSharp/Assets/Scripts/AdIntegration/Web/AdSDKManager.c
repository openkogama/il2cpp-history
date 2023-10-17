
/* Void InitializeAdConfigSettings(AdConfigSettings) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
     AdSDKManager_InitializeAdConfigSettings
               (AdSDKManager *this,AdConfigSettings *config,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__UnityEngine__Debug);
  func_?(uVar1);
  method_00 = (MethodInfo *)0x0;
  message = (Object *)func_?(&StringLiteral_AdSDKManager_is_used_by_the_WebA);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,method_00);
  uVar1 = func_?(&TypeInfo__System__NotImplementedException);
  this_00 = (NotImplementedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager__InitializeAdConfigSettings_AdConfigSettings_
                 );
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InitializeCallbackManager(IAdUIManager) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
     AdSDKManager_InitializeCallbackManager
               (AdSDKManager *this,IAdUIManager *handler,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__UnityEngine__Debug);
  func_?(uVar1);
  method_00 = (MethodInfo *)0x0;
  message = (Object *)func_?(&StringLiteral_AdSDKManager_is_used_by_the_WebA);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,method_00);
  uVar1 = func_?(&TypeInfo__System__NotImplementedException);
  this_00 = (NotImplementedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager__InitializeCallbackManager_Assets__Scripts__AdIntegration__IAdUIManager_
                 );
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnAdSDKInitReady() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
     AdSDKManager_OnAdSDKInitReady(AdSDKManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__IAdSDK);
    func_?(&StringLiteral_AdSDKManager_failed_to_init_adSD);
    func_?(&StringLiteral_adSDK_initialized);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).adSDK;
  if (pIVar1 != (IAdSDK *)0x0) {
    cVar2 = func_?(1,TypeInfo__IAdSDK,pIVar1);
    if (cVar2 != '\0') {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_adSDK_initialized,(MethodInfo *)0x0);
      (this->fields).wasInitializedSuccessfully = 1;
      return;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_AdSDKManager_failed_to_init_adSD,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RequestInterstitial(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult], AdContext)
    */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
     AdSDKManager_RequestInterstitial
               (AdSDKManager *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *interstitialCallback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__IAdSDK);
    func_?(&StringLiteral_RequestInterstitial_in_adsdkmana);
    func_?(&StringLiteral_adSDK_RequestInterstitial_);
    func_?(&StringLiteral_wasInitializedSuccessfully_is_fa);
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
  EStack_1.monitor = (MonitorData *)0xffffffff;
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_RequestInterstitial_in_adsdkmana,pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  EStack_1.monitor = (MonitorData *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
  if ((this->fields).wasInitializedSuccessfully == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_wasInitializedSuccessfully_is_fa,(MethodInfo *)0x0);
    if (interstitialCallback != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0)
    {
      (*(interstitialCallback->fields)._._.invoke_impl)();
      return;
    }
  }
  else {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_adSDK_RequestInterstitial_,(MethodInfo *)0x0);
    if ((this->fields).adSDK != (IAdSDK *)0x0) {
      func_?();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RequestRewardedAd(Action`1[Assets.Scripts.AdIntegration.RewardedAdResult], AdContext) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
     AdSDKManager_RequestRewardedAd
               (AdSDKManager *this,
               Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *rewardedAdCallback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__IAdSDK);
    func_?(&StringLiteral_RequestRewardedAd_in_adsdkmanage);
    func_?(&StringLiteral_adSDK_ShowRewardedAd_);
    func_?(&StringLiteral_wasInitializedSuccessfully_is_fa);
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
  EStack_1.monitor = (MonitorData *)0xffffffff;
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_RequestRewardedAd_in_adsdkmanage,pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  EStack_1.monitor = (MonitorData *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
  if ((this->fields).wasInitializedSuccessfully == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_wasInitializedSuccessfully_is_fa,(MethodInfo *)0x0);
    if (rewardedAdCallback != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
      (*(rewardedAdCallback->fields)._._.invoke_impl)();
      return;
    }
  }
  else {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_adSDK_ShowRewardedAd_,(MethodInfo *)0x0);
    if ((this->fields).adSDK != (IAdSDK *)0x0) {
      func_?();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Type get_AdSDKType() */

Type * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
       AdSDKManager_get_AdSDKType(AdSDKManager *this,MethodInfo *method)

{
  pIStack_1 = (IAdSDK *)&stack0xfffffffc;
  pIVar2 = (this->fields).adSDK;
  if (pIVar2 != (IAdSDK *)0x0) {
    pIStack_1 = pIVar2;
    pTVar3 = (Type *)func_?();
    return pTVar3;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pTVar3 = (Type *)(*pcVar6)();
  return pTVar3;
}


/* String get_RewardedAdNotAvailableText() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
         AdSDKManager_get_RewardedAdNotAvailableText(AdSDKManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Unable_to_display_rewarded_ad__P);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Unable_to_display_rewarded_ad__P,(MethodInfo *)0x0);
  return pSVar1;
}


/* TimeSpan get_TimeSinceLastAd() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
         AdSDKManager_get_TimeSinceLastAd(AdSDKManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__TimeSpan);
  }
  iVar1 = (TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__TimeSpan);
  }
  val2 = (TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  iVar1 = mscorlib.dll::System::Math::Math_Min_2(iVar1,val2,(MethodInfo *)0x0);
  return (TimeSpan)iVar1;
}


/* TimeSpan get_TimeSinceLastInterstitial() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
         AdSDKManager_get_TimeSinceLastInterstitial(AdSDKManager *this,MethodInfo *method)

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

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
         AdSDKManager_get_TimeSinceLastRewarded(AdSDKManager *this,MethodInfo *method)

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

