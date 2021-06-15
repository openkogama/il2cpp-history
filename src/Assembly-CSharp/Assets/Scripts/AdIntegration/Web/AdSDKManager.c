
/* Void InitializeAdConfigSettings(AdConfigSettings) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
     AdSDKManager_InitializeAdConfigSettings
               (AdSDKManager *this,AdConfigSettings *config,MethodInfo *method)

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
            ((Object *)StringLiteral_AdSDKManager_is_used_by_the_WebA,(MethodInfo *)0x0);
  this_00 = (NotImplementedException *)func_?(TypeInfo__System__NotImplementedException);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void InitializeCallbackManager(IAdUIManager) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
     AdSDKManager_InitializeCallbackManager
               (AdSDKManager *this,IAdUIManager *handler,MethodInfo *method)

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
            ((Object *)StringLiteral_AdSDKManager_is_used_by_the_WebA,(MethodInfo *)0x0);
  this_00 = (NotImplementedException *)func_?(TypeInfo__System__NotImplementedException);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnAdSDKInitReady() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
     AdSDKManager_OnAdSDKInitReady(AdSDKManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).adSDK;
  if (pIVar1 != (IAdSDK *)0x0) {
    cVar2 = func_?(1,TypeInfo__IAdSDK,pIVar1);
    if (cVar2 != '\0') {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_adSDK_initialized,(MethodInfo *)0x0);
      (this->fields).wasInitializedSuccessfully = 1;
      return;
    }
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_AdSDKManager_failed_to_init_adSD,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar1 = (int *)func_?(TypeInfo__Assets__Scripts__AdIntegration__AdContext,&context);
  if (piVar1 != (int *)0x0) {
    pSVar2 = (String *)(**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
    pAVar3 = (AdContext__Enum *)func_?(piVar1);
    context = *pAVar3;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_RequestInterstitial_in_adsdkmana,pSVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
    if ((this->fields).wasInitializedSuccessfully == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_wasInitializedSuccessfully_is_fa,(MethodInfo *)0x0);
      if (interstitialCallback != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0
         ) {
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  ((Action_1_UIPushOption_ *)interstitialCallback,UIPushOption__Enum_Blocking,
                   MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Invoke_Assets__Scripts__AdIntegration__InterstitialAdResult_
                  );
        return;
      }
    }
    else {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_adSDK_RequestInterstitial_,(MethodInfo *)0x0);
      pIVar4 = (this->fields).adSDK;
      if (pIVar4 != (IAdSDK *)0x0) {
        func_?(2,TypeInfo__IAdSDK,pIVar4,interstitialCallback);
        return;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar1 = (int *)func_?(TypeInfo__Assets__Scripts__AdIntegration__AdContext,&context);
  if (piVar1 != (int *)0x0) {
    pSVar2 = (String *)(**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
    pAVar3 = (AdContext__Enum *)func_?(piVar1);
    context = *pAVar3;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_RequestRewardedAd_in_adsdkmanage,pSVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
    if ((this->fields).wasInitializedSuccessfully == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_wasInitializedSuccessfully_is_fa,(MethodInfo *)0x0);
      if (rewardedAdCallback != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  ((Action_1_UIPushOption_ *)rewardedAdCallback,UIPushOption__Enum_Blocking,
                   MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Invoke_Assets__Scripts__AdIntegration__RewardedAdResult_
                  );
        return;
      }
    }
    else {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_adSDK_ShowRewardedAd_,(MethodInfo *)0x0);
      pIVar4 = (this->fields).adSDK;
      if (pIVar4 != (IAdSDK *)0x0) {
        func_?(3,TypeInfo__IAdSDK,pIVar4,rewardedAdCallback);
        return;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* AdSDKManager(EmbeddedSite) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::AdSDKManager__ctor
               (AdSDKManager *this,EmbeddedSite__Enum site,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBP);
  return;
}


/* String get_RewardedAdNotAvailableText() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
         AdSDKManager_get_RewardedAdNotAvailableText(AdSDKManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Unable_to_display_rewarded_ad__P,(MethodInfo *)0x0);
  return pSVar1;
}


/* TimeSpan get_TimeSinceLastAd() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
         AdSDKManager_get_TimeSinceLastAd(AdSDKManager *this,MethodInfo *method)

{
  iStack_1 = 0;
  iStack_2 = 0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__TimeSpan);
  }
  iStack_1 = (TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
  iVar3 = func_?(&iStack_1,0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__TimeSpan);
  }
  iStack_2 = (TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
  val2 = func_?(&iStack_2,0);
  iVar3 = mscorlib.dll::System::Math::Math_Min_3(iVar3,val2,(MethodInfo *)0x0);
  iStack_4 = 0;
  func_?(&iStack_4,iVar3,0);
  return (TimeSpan)iStack_4;
}


/* TimeSpan get_TimeSinceLastInterstitial() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
         AdSDKManager_get_TimeSinceLastInterstitial(AdSDKManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__TimeSpan);
  }
  return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
}


/* TimeSpan get_TimeSinceLastRewarded() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
         AdSDKManager_get_TimeSinceLastRewarded(AdSDKManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__TimeSpan);
  }
  return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
}

