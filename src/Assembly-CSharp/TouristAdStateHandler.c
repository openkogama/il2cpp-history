
/* Void InterstitialCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::TouristAdStateHandler::TouristAdStateHandler_InterstitialCallback
               (TouristAdStateHandler *this,InterstitialAdResult__Enum obj,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).adRateLimitCurrentTime = fVar1;
  pAVar2 = (this->fields).OnAdShown;
  if (pAVar2 != (Action *)0x0) {
    (*(pAVar2->fields)._._.invoke_impl)();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowAd(Action) */

void Assembly-CSharp.dll::TouristAdStateHandler::TouristAdStateHandler_ShowAd
               (TouristAdStateHandler *this,Action *OnAdFinished,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>)
    ;
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    MethodInfo__TouristAdStateHandler__InterstitialCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   );
    func_?(&TypeInfo__TouristAdStateHandler);
    func_?(&StringLiteral_showVideoAd);
    cRam_? = '\x01';
  }
  (this->fields).OnAdShown = OnAdFinished;
  func_?(&(this->fields).OnAdShown,OnAdFinished);
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (pIVar1 == (IAdManager *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar3 = func_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1);
  if (cVar3 != '\0') {
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar5 = (this->fields).adRateLimitCurrentTime;
    if ((TypeInfo__TouristAdStateHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TouristAdStateHandler);
    }
    if (TypeInfo__TouristAdStateHandler->static_fields->adRateLimitTimer <= fVar4 - fVar5) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_showVideoAd,(MethodInfo *)0x0);
      pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
      this_00 = (UnityAction_1_System_Int32Enum_ *)
                func_?(
                               TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_00,(Object *)this,
                 MethodInfo__TouristAdStateHandler__InterstitialCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 ,(MethodInfo *)0x0);
      if (pIVar1 != (IAdManager *)0x0) {
        func_?(7,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1,this_00,3);
        return;
      }
      goto code_?;
    }
  }
  pAVar6 = (this->fields).OnAdShown;
  if (pAVar6 == (Action *)0x0) {
    return;
  }
  (*(pAVar6->fields)._._.invoke_impl)((pAVar6->fields)._._.method_code,(pAVar6->fields)._._.method);
  return;
}


/* TouristAdStateHandler() */

void Assembly-CSharp.dll::TouristAdStateHandler::TouristAdStateHandler__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TouristAdStateHandler);
    cRam_? = '\x01';
  }
  TypeInfo__TouristAdStateHandler->static_fields->adRateLimitTimer = 120.0;
  return;
}

