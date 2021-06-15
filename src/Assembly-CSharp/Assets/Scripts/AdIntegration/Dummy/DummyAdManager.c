
/* Void InitializeAdConfigSettings(AdConfigSettings) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Dummy::DummyAdManager::
     DummyAdManager_InitializeAdConfigSettings
               (DummyAdManager *this,AdConfigSettings *config,MethodInfo *method)

{
  if (config != (AdConfigSettings *)0x0) {
    bVar1 = SubscribableVariableBase`1[System::Boolean]::
            SubscribableVariableBase_1_System_Boolean__get_Value
                      ((SubscribableVariableBase_1_System_Boolean_ *)config,(MethodInfo *)0x0);
    (this->fields).timeoutAsEnabled = bVar1;
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)config,
                        (MethodInfo *)0x0);
    (this->fields).timeoutSuccessDelay = (int32_t)pOVar2;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeCallbackManager(IAdUIManager) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Dummy::DummyAdManager::
     DummyAdManager_InitializeCallbackManager
               (DummyAdManager *this,IAdUIManager *handler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  (this->fields).adUIHandler = handler;
  return;
}


/* Void RequestInterstitial(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult], AdContext)
    */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Dummy::DummyAdManager::
     DummyAdManager_RequestInterstitial
               (DummyAdManager *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *interstitialCallback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).adUIHandler;
  if (pIVar1 != (IAdUIManager *)0x0) {
    cVar2 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1);
    if (cVar2 == '\0') {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pIVar1 = (this->fields).adUIHandler;
      (this->fields).startTime = fVar3;
      if (pIVar1 != (IAdUIManager *)0x0) {
        func_?(1,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1,
                        interstitialCallback);
        (this->fields).rewarded = 0;
        return;
      }
    }
    else {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Ad_showing_already_,(MethodInfo *)0x0);
      if (interstitialCallback != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0
         ) {
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  ((Action_1_UIPushOption_ *)interstitialCallback,UIPushOption__Enum_None,
                   MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Invoke_Assets__Scripts__AdIntegration__InterstitialAdResult_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RequestRewardedAd(Action`1[Assets.Scripts.AdIntegration.RewardedAdResult], AdContext) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Dummy::DummyAdManager::
     DummyAdManager_RequestRewardedAd
               (DummyAdManager *this,
               Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *rewardedAdCallback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).adUIHandler;
  if (pIVar1 != (IAdUIManager *)0x0) {
    cVar2 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1);
    if (cVar2 == '\0') {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pIVar1 = (this->fields).adUIHandler;
      (this->fields).startTime = fVar3;
      if (pIVar1 != (IAdUIManager *)0x0) {
        func_?(2,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1,
                        rewardedAdCallback);
        (this->fields).rewarded = 1;
        return;
      }
    }
    else {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Ad_showing_already_,(MethodInfo *)0x0);
      if (rewardedAdCallback != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  ((Action_1_UIPushOption_ *)rewardedAdCallback,UIPushOption__Enum_None,
                   MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Invoke_Assets__Scripts__AdIntegration__RewardedAdResult_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Dummy::DummyAdManager::
     DummyAdManager_UpdateControllerUpdate(DummyAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = this;
  pIVar2 = (this->fields).adUIHandler;
  if (pIVar2 == (IAdUIManager *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    cVar4 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar2);
    if (cVar4 == '\0') {
      return;
    }
    this = (DummyAdManager *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((float)this <= (pDVar1->fields).delay + (pDVar1->fields).startTime) {
      return;
    }
    args = (Object__Array *)func_?(TypeInfo__System__Object,4);
    this = (DummyAdManager *)CONCAT13((pDVar1->fields).rewarded,this._0_3_);
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pOVar5 != (Object *)0x0) &&
       (iVar6 = func_?(pOVar5,(args->klass->_0).element_class), iVar6 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar5;
    bStack_7 = (pDVar1->fields).timeoutAsEnabled;
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_7);
    if ((pOVar5 != (Object *)0x0) &&
       (iVar6 = func_?(pOVar5,(args->klass->_0).element_class), iVar6 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar5;
    fStack_8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fStack_8 = fStack_8 - (pDVar1->fields).startTime;
    pOVar5 = (Object *)func_?(TypeInfo__System__Single,&fStack_8);
    if ((pOVar5 != (Object *)0x0) &&
       (iVar6 = func_?(pOVar5,(args->klass->_0).element_class), iVar6 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar5;
    iStack_9 = (pDVar1->fields).timeoutSuccessDelay;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_9);
    if ((pOVar5 == (Object *)0x0) ||
       (iVar6 = func_?(pOVar5,(args->klass->_0).element_class), iVar6 != 0)) {
      if (args->max_length < 4) goto code_?;
      args->vector[3] = pOVar5;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      message = mscorlib.dll::System::String::String_Format_3
                          (StringLiteral_rewarded__0___timeoutAsEnabled__,args,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
      if ((((pDVar1->fields).rewarded != 0) && ((pDVar1->fields).timeoutAsEnabled != 0)) &&
         (this = (DummyAdManager *)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
         (float)(pDVar1->fields).timeoutSuccessDelay <= (float)this - (pDVar1->fields).startTime)) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_timeout,(MethodInfo *)0x0);
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_ad_finished,(MethodInfo *)0x0);
      pIVar2 = (pDVar1->fields).adUIHandler;
      if ((pDVar1->fields).rewarded == 0) {
        if (pIVar2 != (IAdUIManager *)0x0) {
          func_?(3,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar2,3);
          return;
        }
      }
      else if (pIVar2 != (IAdUIManager *)0x0) {
        func_?(4,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar2,3);
        return;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* DummyAdManager() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Dummy::DummyAdManager::
     DummyAdManager__ctor(DummyAdManager *this,MethodInfo *method)

{
  (this->fields).delay = 1.5;
  (this->fields).timeoutSuccessDelay = 0x1e;
  return;
}


/* String get_RewardedAdNotAvailableText() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Dummy::DummyAdManager::
         DummyAdManager_get_RewardedAdNotAvailableText(DummyAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Ads_not_set_up_for_this_build_ta,(MethodInfo *)0x0);
  return pSVar1;
}


/* TimeSpan get_TimeSinceLastAd() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Dummy::DummyAdManager::
         DummyAdManager_get_TimeSinceLastAd(DummyAdManager *this,MethodInfo *method)

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


/* TimeSpan get_TimeSinceLastInterstitial() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Dummy::DummyAdManager::
         DummyAdManager_get_TimeSinceLastInterstitial(DummyAdManager *this,MethodInfo *method)

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

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Dummy::DummyAdManager::
         DummyAdManager_get_TimeSinceLastRewarded(DummyAdManager *this,MethodInfo *method)

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

