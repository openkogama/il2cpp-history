
/* Void DoCallBack() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+RewardedAdResultHandler::MobileAdManager_RewardedAdResultHandler_DoCallBack
               (MobileAdManager_RewardedAdResultHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_RewardedFinished_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Success);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MobileAdManager_RewardedAdResult);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_RewardedShown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Failure);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_RewardedAdResult,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    pMVar2 = (pMVar1->fields).game;
    if (pMVar2 != (MVNetworkGame *)0x0) {
      this_00 = (pMVar2->fields).operationRequests;
      if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                  (this_00,AdType__Enum_RewardedAd,AdActionType__Enum_Success,(this->fields).context
                   ,(MethodInfo *)0x0);
        EStack_3.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
        EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
        iStack_4 = (this->fields).context;
        pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
        pSVar5 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_Ad_RewardedFinished_,pSVar5,(MethodInfo *)0x0);
        MobileAdManager::MobileAdManager_SendStat(pSVar5,(MethodInfo *)0x0);
        if ((this->fields).rewardedAdResult == 3) {
          MobileAdManager::MobileAdManager_SendStat
                    (StringLiteral_Ad_RewardedShown,(MethodInfo *)0x0);
          EStack_3.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
          EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
          iStack_4 = (this->fields).context;
          pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_5
                             (StringLiteral_Ad_RewardedFinished_,pSVar5,StringLiteral__Success,
                              (MethodInfo *)0x0);
          MobileAdManager::MobileAdManager_SendStat(pSVar5,(MethodInfo *)0x0);
        }
        else {
          EStack_3.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
          EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
          iStack_4 = (this->fields).context;
          pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_5
                             (StringLiteral_Ad_RewardedFinished_,pSVar5,StringLiteral__Failure,
                              (MethodInfo *)0x0);
          MobileAdManager::MobileAdManager_SendStat(pSVar5,(MethodInfo *)0x0);
        }
        pIVar6 = (this->fields).adUIManager;
        if (pIVar6 != (IAdUIManager *)0x0) {
          FUN_?(4,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar6,
                        (this->fields).rewardedAdResult);
          pAVar7 = (this->fields).rewardedAdCallback;
          if (pAVar7 != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
            (*(pAVar7->fields)._._.invoke_impl)
                      ((pAVar7->fields)._._.method_code,(this->fields).rewardedAdResult,
                       (pAVar7->fields)._._.method);
            return;
          }
          FUN_?();
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetResult(RewardedAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+RewardedAdResultHandler::MobileAdManager_RewardedAdResultHandler_SetResult
               (MobileAdManager_RewardedAdResultHandler *this,
               RewardedAdResult__Enum rewardedAdResult,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MobileAdManager_RewardedAdResult);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  RStack_2 = rewardedAdResult;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_MobileAdManager_RewardedAdResult,pSVar3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  (this->fields).IsDone = 1;
  (this->fields).rewardedAdResult = rewardedAdResult;
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
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MobileAdManager_RewardedAdResult);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_RewardedAdResult,(MethodInfo *)0x0);
  iVar1 = iRam_?;
  (this->fields).context = context;
  (this->fields).adUIManager = adUIManager;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).adUIManager >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).rewardedAdCallback = rewardedAdCallback;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).rewardedAdCallback >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}

