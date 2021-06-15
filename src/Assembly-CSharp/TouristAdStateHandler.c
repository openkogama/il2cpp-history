
/* Void InterstitialCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::TouristAdStateHandler::TouristAdStateHandler_InterstitialCallback
               (TouristAdStateHandler *this,InterstitialAdResult__Enum obj,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).adRateLimitCurrentTime = fVar1;
  this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).OnAdShown;
  if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowAd(Action) */

void Assembly-CSharp.dll::TouristAdStateHandler::TouristAdStateHandler_ShowAd
               (TouristAdStateHandler *this,Action *OnAdFinished,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).OnAdShown = OnAdFinished;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (pIVar1 != (IAdManager *)0x0) {
    cVar2 = func_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1);
    if (cVar2 != '\0') {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      fVar4 = (this->fields).adRateLimitCurrentTime;
      if ((((uint)(TypeInfo__TouristAdStateHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__TouristAdStateHandler->_1).cctor_started == 0)) {
        func_?(TypeInfo__TouristAdStateHandler);
      }
      if (TypeInfo__TouristAdStateHandler->static_fields->adRateLimitTimer <= fVar3 - fVar4) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_showVideoAd,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(
                                    TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                                    );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)this,
                   MethodInfo__TouristAdStateHandler__InterstitialCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   ,
                   MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Action_System__Object__void__
                  );
        if (pIVar1 != (IAdManager *)0x0) {
          func_?(7,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1,this_01,3);
          return;
        }
        goto code_?;
      }
    }
    this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).OnAdShown;
    if (this_00 == (JumpState_OnWallJumpDelegate *)0x0) {
      return;
    }
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* TouristAdStateHandler() */

void Assembly-CSharp.dll::TouristAdStateHandler::TouristAdStateHandler__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__TouristAdStateHandler->static_fields->adRateLimitTimer = 120.0;
  return;
}

