
/* Void DoCallBack() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+RewardedAdResultHandler::MobileAdManager_RewardedAdResultHandler_DoCallBack
               (MobileAdManager_RewardedAdResultHandler *this,MethodInfo *method)

{
  puStack_1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    func_?(&StringLiteral_Ad_RewardedFinished_);
    func_?(&StringLiteral__Success);
    func_?(&StringLiteral_MobileAdManager_RewardedAdResult);
    func_?(&StringLiteral_Ad_RewardedShown);
    func_?(&StringLiteral__Failure);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_RewardedAdResult,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
              (this_00,AdType__Enum_RewardedAd,AdActionType__Enum_Success,(this->fields).context,
               (MethodInfo *)0x0);
    EStack_2.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
    EStack_2.monitor = (MonitorData *)0xffffffff;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Ad_RewardedFinished_,pSVar3,(MethodInfo *)0x0);
    MobileAdManager::MobileAdManager_SendStat(pSVar3,(MethodInfo *)0x0);
    if ((this->fields).rewardedAdResult == 3) {
      MobileAdManager::MobileAdManager_SendStat(StringLiteral_Ad_RewardedShown,(MethodInfo *)0x0);
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
                       (StringLiteral_Ad_RewardedFinished_,pSVar3,in_stack_6,
                        in_stack_5);
    MobileAdManager::MobileAdManager_SendStat(pSVar3,(MethodInfo *)0x0);
    if ((this->fields).adUIManager != (IAdUIManager *)0x0) {
      puStack7 = (undefined *)(this->fields).rewardedAdResult;
      func_?();
      pAVar8 = (this->fields).rewardedAdCallback;
      if (pAVar8 != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
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


/* Void SetResult(RewardedAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+RewardedAdResultHandler::MobileAdManager_RewardedAdResultHandler_SetResult
               (MobileAdManager_RewardedAdResultHandler *this,
               RewardedAdResult__Enum rewardedAdResult,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult);
    func_?(&StringLiteral_MobileAdManager_RewardedAdResult);
    cRam_? = '\x01';
  }
  pRStack_1 = TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult;
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pRStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_MobileAdManager_RewardedAdResult,pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  (this->fields).rewardedAdResult = rewardedAdResult;
  (this->fields).IsDone = 1;
  return;
}


/* MobileAdManager+RewardedAdResultHandler(Action`1[Assets.Scripts.AdIntegration.RewardedAdResult],
   IAdUIManager, AdContext) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+RewardedAdResultHandler::MobileAdManager_RewardedAdResultHandler__ctor
               (MobileAdManager_RewardedAdResultHandler *this,
               Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *rewardedAdCallback,
               IAdUIManager *adUIManager,AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_MobileAdManager_RewardedAdResult);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_RewardedAdResult,(MethodInfo *)0x0);
  (this->fields).context = context;
  (this->fields).adUIManager = adUIManager;
  func_?(&(this->fields).adUIManager,adUIManager);
  (this->fields).rewardedAdCallback = rewardedAdCallback;
  func_?(&(this->fields).rewardedAdCallback,rewardedAdCallback);
  return;
}

