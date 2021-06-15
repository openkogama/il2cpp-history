
/* Void Awake() */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_Awake
               (AdUIWithTimeout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (pIVar1 != (IAdManager *)0x0) {
    func_?(8,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1,this);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreatePopup() */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_CreatePopup
               (AdUIWithTimeout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AdUIWithTimeout___CreatePopup_c__AnonStorey3;
  pSVar1 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_00);
  if (pSVar1 != (ScaleAnimationBase *)0x0) {
    *(undefined1 *)&(pSVar1->fields)._._._._.m_CachedPtr = 0;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    pUVar3 = this_01;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)pSVar1,
               MethodInfo__AdUIWithTimeout___CreatePopup_c__AnonStorey3____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    arg1 = (Object *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    message = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_AdUIWithTimeout_CreatePopup__Sta,arg1,
                         (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0)
    ;
    if (*(char *)&(pSVar1->fields)._._._._.m_CachedPtr == '\0') {
      return;
    }
    pSVar1 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)pUVar3);
    pXVar4 = (XpBoostParticlePreviewer *)(this->fields).showingAdPopup;
    (this->fields).popupShowing = 1;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar4,
                        ShowingAdsPopup_MethodInfo__UnityEngine__Object__Instantiate<ShowingAdsPopup>_ShowingAdsPopup_
                       );
    if (pSVar1 != (ScaleAnimationBase *)0x0) {
      (pSVar1->fields)._._._._.m_CachedPtr = pXVar4;
      if ((((uint)(TypeInfo__AdUIWithTimeout->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AdUIWithTimeout->_1).cctor_started == 0)) {
        func_?(TypeInfo__AdUIWithTimeout);
      }
      timeoutTime = TypeInfo__AdUIWithTimeout->static_fields->timeout;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,MethodInfo__AdUIWithTimeout__OnSkipClicked__,
                 (MethodInfo *)0x0);
      if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
        ShowingAdsPopup::ShowingAdsPopup_Initialize
                  ((ShowingAdsPopup *)pXVar4,timeoutTime,(Action *)pUVar3,(MethodInfo *)0x0);
        this_00 = (pSVar1->fields)._._._._.m_CachedPtr;
        if (this_00 != (Component_1 *)0x0) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             (this_00,(MethodInfo *)0x0);
          (this->fields).overlayPushedToStack = pGVar2;
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)pSVar1,
                     MethodInfo__AdUIWithTimeout___CreatePopup_c__AnonStorey4____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar2,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnSkipClicked() */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_OnSkipClicked
               (AdUIWithTimeout *this,MethodInfo *method)

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
            ((Object *)StringLiteral_AdUIWithTimeout_OnSkipClicked_,(MethodInfo *)0x0);
  if ((this->fields).interstitialCallback ==
      (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
    if ((this->fields).rewardedCallback ==
        (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_00 = _uStack0000000c;
      _uStack0000000c =
           (Component_1 *)CONCAT13(*(undefined1 *)&_uStack0000000c[1].monitor,uStack1);
      arg1 = (Object *)func_?(TypeInfo__System__Boolean,(int)&stack0x0000000c + 3);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      message = mscorlib.dll::System::String::String_Concat
                          ((Object *)StringLiteral_AdUIWithTimeout_TryPopOverlay__P,arg1,
                           (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
      if (*(char *)&this_00[1].monitor != '\0') {
        _uStack0000000c = (Component_1 *)0x0;
        *(undefined1 *)&this_00[1].monitor = 0;
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         (this_00,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__AdUIWithTimeout->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__AdUIWithTimeout->_1).cctor_started == 0)) {
          func_?();
        }
        if (TypeInfo__AdUIWithTimeout->static_fields->__f__am_cache0 ==
            (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_01,(Object *)0x0,
                     MethodInfo__AdUIWithTimeout___TryPopOverlay_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__AdUIWithTimeout->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__AdUIWithTimeout->_1).cctor_started == 0)) {
            func_?();
          }
          TypeInfo__AdUIWithTimeout->static_fields->__f__am_cache0 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
        }
        if ((((uint)(TypeInfo__AdUIWithTimeout->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__AdUIWithTimeout->_1).cctor_started == 0)) {
          func_?();
        }
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__AdUIWithTimeout->static_fields->__f__am_cache0;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        _uStack0000000c = (Component_1 *)0x0;
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
      }
      return;
    }
    AdUIWithTimeout_PopRewardedVideo(this,RewardedAdResult__Enum_ErrorTimeout,(MethodInfo *)0x0);
    return;
  }
  AdUIWithTimeout_PopInterstitial(this,InterstitialAdResult__Enum_ErrorTimeout,(MethodInfo *)0x0);
  return;
}


/* Void PopInterstitial(InterstitialAdResult) */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_PopInterstitial
               (AdUIWithTimeout *this,InterstitialAdResult__Enum adResult,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AdUIWithTimeout___PopInterstitial_c__AnonStorey1;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields).state = (int32_t)this;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_AdUIWithTimeout_PopInterstitial_,(MethodInfo *)0x0);
    if ((this->fields).interstitialCallback ==
        (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Closing_interstitial_manager_twi,(MethodInfo *)0x0);
      return;
    }
    *(undefined1 *)&(this_01->fields)._._._._.m_CachedPtr = 1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this_01,
               MethodInfo__AdUIWithTimeout___PopInterstitial_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (*(char *)&(this_01->fields)._._._._.m_CachedPtr != '\0') {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_AdUIWithTimeout_stack_is_blocked,(MethodInfo *)0x0);
      (this->fields).interstitialResultLatePop = adResult;
      (this->fields).wantsToPop = 1;
      return;
    }
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_AdUIWithTimeout_Pop,(MethodInfo *)0x0);
    AdUIWithTimeout_TryPopOverlay(this,(MethodInfo *)0x0);
    this_00 = (Action_1_UIPushOption_ *)(this->fields).interstitialCallback;
    if (this_00 != (Action_1_UIPushOption_ *)0x0) {
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                (this_00,adResult,
                 MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Invoke_Assets__Scripts__AdIntegration__InterstitialAdResult_
                );
      (this->fields).interstitialCallback =
           (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0;
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PopRewardedVideo(RewardedAdResult) */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_PopRewardedVideo
               (AdUIWithTimeout *this,RewardedAdResult__Enum adResult,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AdUIWithTimeout___PopRewardedVideo_c__AnonStorey2;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields).state = (int32_t)this;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_AdUIWithTimeout_PopRewardedVideo,(MethodInfo *)0x0);
    if ((this->fields).rewardedCallback ==
        (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Closing_rewarded_ad_manager_twic,(MethodInfo *)0x0);
      return;
    }
    *(undefined1 *)&(this_01->fields)._._._._.m_CachedPtr = 1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this_01,
               MethodInfo__AdUIWithTimeout___PopRewardedVideo_c__AnonStorey2____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (*(char *)&(this_01->fields)._._._._.m_CachedPtr != '\0') {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_AdUIWithTimeout_stack_is_blocked,(MethodInfo *)0x0);
      (this->fields).rewardedAdResultLatePop = adResult;
      (this->fields).wantsToPop = 1;
      return;
    }
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_AdUIWithTimeout_Pop,(MethodInfo *)0x0);
    AdUIWithTimeout_TryPopOverlay(this,(MethodInfo *)0x0);
    this_00 = (Action_1_UIPushOption_ *)(this->fields).rewardedCallback;
    if (this_00 != (Action_1_UIPushOption_ *)0x0) {
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                (this_00,adResult,
                 MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Invoke_Assets__Scripts__AdIntegration__RewardedAdResult_
                );
      (this->fields).rewardedCallback =
           (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0;
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowInterstitial(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult]) */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_ShowInterstitial
               (AdUIWithTimeout *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *callbackFunction,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).interstitialCallback ==
      (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_AdUIWithTimeout_ShowInterstitial,(MethodInfo *)0x0);
    (this->fields).interstitialCallback = callbackFunction;
    AdUIWithTimeout_CreatePopup(this,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_Requesting_interstitial_twice_,(MethodInfo *)0x0);
  return;
}


/* Void ShowRewardedVideo(Action`1[Assets.Scripts.AdIntegration.RewardedAdResult]) */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_ShowRewardedVideo
               (AdUIWithTimeout *this,
               Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *callbackFunction,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).rewardedCallback ==
      (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_AdUIWithTimeout_ShowRewardedVide,(MethodInfo *)0x0);
    (this->fields).rewardedCallback = callbackFunction;
    AdUIWithTimeout_CreatePopup(this,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_Requesting_rewarded_ad_twice_,(MethodInfo *)0x0);
  return;
}


/* Void TryPopOverlay() */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_TryPopOverlay
               (AdUIWithTimeout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  this = (AdUIWithTimeout *)CONCAT13((this->fields).popupShowing,this._0_3_);
  arg1 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_AdUIWithTimeout_TryPopOverlay__P,arg1,
                       (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0);
  if ((this_00->fields).popupShowing != 0) {
    this = (AdUIWithTimeout *)0x0;
    (this_00->fields).popupShowing = 0;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__AdUIWithTimeout->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AdUIWithTimeout->_1).cctor_started == 0)) {
      method = (MethodInfo *)&UNK_?;
      func_?();
    }
    if (TypeInfo__AdUIWithTimeout->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      method = (MethodInfo *)&UNK_?;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__AdUIWithTimeout___TryPopOverlay_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__AdUIWithTimeout->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AdUIWithTimeout->_1).cctor_started == 0)) {
        method = (MethodInfo *)&UNK_?;
        func_?();
      }
      TypeInfo__AdUIWithTimeout->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
    }
    if ((((uint)(TypeInfo__AdUIWithTimeout->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AdUIWithTimeout->_1).cctor_started == 0)) {
      method = (MethodInfo *)&UNK_?;
      func_?();
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__AdUIWithTimeout->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      method = (MethodInfo *)&UNK_?;
      func_?();
    }
    this = (AdUIWithTimeout *)0x0;
    method = (MethodInfo *)callbackFunction;
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_Update
               (AdUIWithTimeout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).wantsToPop != 0) {
    method_00 = TypeInfo__AdUIWithTimeout___Update_c__AnonStorey0;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    if (this_00 == (ScaleAnimationBase *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this_00->fields).state = (int32_t)this;
    *(undefined1 *)&(this_00->fields)._._._._.m_CachedPtr = 1;
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
              ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__AdUIWithTimeout___Update_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              ((GameObject *)0x0,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (*(char *)&(this_00->fields)._._._._.m_CachedPtr == '\0') {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_AdUIWithTimeout_wantsToPop_,(MethodInfo *)0x0);
      AdUIWithTimeout_TryPopOverlay(this,(MethodInfo *)0x0);
      pAVar2 = (Action_1_UIPushOption_ *)(this->fields).interstitialCallback;
      if (pAVar2 != (Action_1_UIPushOption_ *)0x0) {
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  (pAVar2,(this->fields).interstitialResultLatePop,
                   MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Invoke_Assets__Scripts__AdIntegration__InterstitialAdResult_
                  );
        (this->fields).interstitialCallback =
             (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0;
      }
      pAVar2 = (Action_1_UIPushOption_ *)(this->fields).rewardedCallback;
      if (pAVar2 != (Action_1_UIPushOption_ *)0x0) {
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  (pAVar2,(this->fields).rewardedAdResultLatePop,
                   MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Invoke_Assets__Scripts__AdIntegration__RewardedAdResult_
                  );
        (this->fields).rewardedCallback =
             (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0;
      }
      (this->fields).wantsToPop = 0;
      (this->fields).overlayPushedToStack = (GameObject *)0x0;
    }
  }
  return;
}


/* Void <TryPopOverlay>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout__TryPopOverlay_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* AdUIWithTimeout() */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__AdUIWithTimeout->static_fields->timeout = 20.0;
  return;
}

