
/* Void DoCallBack() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InterstitialAdResultHandler::
     MobileAdManager_InterstitialAdResultHandler_DoCallBack
               (MobileAdManager_InterstitialAdResultHandler *this,MethodInfo *method)

{
  puStack_1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    func_?(&StringLiteral_Ad_InterstitialShown);
    func_?(&StringLiteral__Success);
    func_?(&StringLiteral_Ad_InterstitialFinished_);
    func_?(&StringLiteral_MobileAdManager_InterstitialAdRe);
    func_?(&StringLiteral__Failure);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_InterstitialAdRe,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
              (this_00,AdType__Enum_InterstitialAd,AdActionType__Enum_Success,(this->fields).context
               ,(MethodInfo *)0x0);
    EStack_2.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
    EStack_2.monitor = (MonitorData *)0xffffffff;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Ad_InterstitialFinished_,pSVar3,(MethodInfo *)0x0);
    MobileAdManager::MobileAdManager_SendStat(pSVar3,(MethodInfo *)0x0);
    if ((this->fields).interstitialAdResult == 3) {
      MobileAdManager::MobileAdManager_SendStat
                (StringLiteral_Ad_InterstitialShown,(MethodInfo *)0x0);
      EStack_2.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
      puStack_4 = (undefined *)(this->fields).context;
      EStack_2.monitor = (MonitorData *)0xffffffff;
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
      in_stack_5 = (MethodInfo *)0x0;
      in_stack_6 = StringLiteral__Success;
    }
    else {
      EStack_2.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
      puStack_4 = (undefined *)(this->fields).context;
      EStack_2.monitor = (MonitorData *)0xffffffff;
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Ad_InterstitialFinished_,pSVar3,in_stack_6,
                        in_stack_5);
    MobileAdManager::MobileAdManager_SendStat(pSVar3,(MethodInfo *)0x0);
    if ((this->fields).adUIManager != (IAdUIManager *)0x0) {
      puStack7 = (undefined *)(this->fields).interstitialAdResult;
      func_?();
      pAVar8 = (this->fields).interstitialCallback;
      if (pAVar8 != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
        puStack7 = (pAVar8->fields)._._.method;
        (*(pAVar8->fields)._._.invoke_impl)();
        *unaff_FS_OFFSET = puStack_1;
        return;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetResult(InterstitialAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InterstitialAdResultHandler::
     MobileAdManager_InterstitialAdResultHandler_SetResult
               (MobileAdManager_InterstitialAdResultHandler *this,
               InterstitialAdResult__Enum interstitialAdResult,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult);
    func_?(&StringLiteral_MobileAdManager_InterstitialAdRe);
    cRam_? = '\x01';
  }
  pIStack_1 = TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult;
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pIStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_MobileAdManager_InterstitialAdRe,pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  (this->fields).interstitialAdResult = interstitialAdResult;
  (this->fields).IsDone = 1;
  return;
}


/* MobileAdManager+InterstitialAdResultHandler(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult],
   IAdUIManager, AdContext) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InterstitialAdResultHandler::MobileAdManager_InterstitialAdResultHandler__ctor
               (MobileAdManager_InterstitialAdResultHandler *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *interstitialCallback,
               IAdUIManager *adUIManager,AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_MobileAdManager_InterstitialAdRe);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_InterstitialAdRe,(MethodInfo *)0x0);
  (this->fields).context = context;
  (this->fields).adUIManager = adUIManager;
  func_?(&(this->fields).adUIManager,adUIManager);
  (this->fields).interstitialCallback = interstitialCallback;
  func_?(&(this->fields).interstitialCallback,interstitialCallback);
  return;
}

