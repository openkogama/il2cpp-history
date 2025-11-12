
/* Void DoCallBack() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InterstitialAdResultHandler::
     MobileAdManager_InterstitialAdResultHandler_DoCallBack
               (MobileAdManager_InterstitialAdResultHandler *this,MethodInfo *method)

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
    FUN_?(&StringLiteral_Ad_InterstitialShown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Success);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_InterstitialFinished_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MobileAdManager_InterstitialAdRe);
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
            ((Object *)StringLiteral_MobileAdManager_InterstitialAdRe,(MethodInfo *)0x0);
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
                  (this_00,AdType__Enum_InterstitialAd,AdActionType__Enum_Success,
                   (this->fields).context,(MethodInfo *)0x0);
        EStack_3.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
        EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
        iStack_4 = (this->fields).context;
        pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
        pSVar5 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_Ad_InterstitialFinished_,pSVar5,(MethodInfo *)0x0);
        MobileAdManager::MobileAdManager_SendStat(pSVar5,(MethodInfo *)0x0);
        if ((this->fields).interstitialAdResult == 3) {
          MobileAdManager::MobileAdManager_SendStat
                    (StringLiteral_Ad_InterstitialShown,(MethodInfo *)0x0);
          EStack_3.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
          EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
          iStack_4 = (this->fields).context;
          pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_5
                             (StringLiteral_Ad_InterstitialFinished_,pSVar5,StringLiteral__Success,
                              (MethodInfo *)0x0);
          MobileAdManager::MobileAdManager_SendStat(pSVar5,(MethodInfo *)0x0);
        }
        else {
          EStack_3.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
          EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
          iStack_4 = (this->fields).context;
          pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_5
                             (StringLiteral_Ad_InterstitialFinished_,pSVar5,StringLiteral__Failure,
                              (MethodInfo *)0x0);
          MobileAdManager::MobileAdManager_SendStat(pSVar5,(MethodInfo *)0x0);
        }
        pIVar6 = (this->fields).adUIManager;
        if (pIVar6 != (IAdUIManager *)0x0) {
          FUN_?(3,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar6,
                        (this->fields).interstitialAdResult);
          pAVar7 = (this->fields).interstitialCallback;
          if (pAVar7 != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
            (*(pAVar7->fields)._._.invoke_impl)
                      ((pAVar7->fields)._._.method_code,(this->fields).interstitialAdResult,
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


/* Void SetResult(InterstitialAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InterstitialAdResultHandler::
     MobileAdManager_InterstitialAdResultHandler_SetResult
               (MobileAdManager_InterstitialAdResultHandler *this,
               InterstitialAdResult__Enum interstitialAdResult,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MobileAdManager_InterstitialAdRe);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  IStack_2 = interstitialAdResult;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_MobileAdManager_InterstitialAdRe,pSVar3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  (this->fields).IsDone = 1;
  (this->fields).interstitialAdResult = interstitialAdResult;
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
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MobileAdManager_InterstitialAdRe);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_InterstitialAdRe,(MethodInfo *)0x0);
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
  (this->fields).interstitialCallback = interstitialCallback;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).interstitialCallback >> 0xc);
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

