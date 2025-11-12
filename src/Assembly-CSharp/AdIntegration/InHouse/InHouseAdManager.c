
/* Void InitializeAdConfigSettings(AdConfigSettings) */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
     InHouseAdManager_InitializeAdConfigSettings
               (InHouseAdManager *this,AdConfigSettings *config,MethodInfo *method)

{
  if (config != (AdConfigSettings *)0x0) {
    (this->fields).timeoutAsEnabled = (config->fields)._AdTimeoutAsSuccess_k__BackingField;
    (this->fields).timeoutSuccessDelay = (config->fields)._AdTimeoutAsSuccessDelay_k__BackingField;
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void InitializeAdController(InHouseAdController) */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
     InHouseAdManager_InitializeAdController
               (InHouseAdManager *this,InHouseAdController *controller,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).inHouseAdController = controller;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).inHouseAdController >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (longlong)method;
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  pIVar6 = (this->fields).inHouseAdController;
  iVar7 = (this->fields).timeoutSuccessDelay;
  if (pIVar6 == (InHouseAdController *)0x0) {
    FUN_?(0,iVar7,method);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar9 = (this->fields).timeoutAsEnabled;
  (pIVar6->fields).timeoutSuccessDelay = iVar7;
  (pIVar6->fields).timeoutAsEnabled = bVar9;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar6 = (this->fields).inHouseAdController;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pIVar6 == (InHouseAdController *)0x0) {
    (this->fields)._ReadyForRewardedAdRequest_k__BackingField = 0;
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  (this->fields)._ReadyForRewardedAdRequest_k__BackingField =
       (pIVar6->fields)._._._._.m_CachedPtr != (void *)0x0;
  return;
}


/* Void InitializeCallbackManager(IAdUIManager) */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
     InHouseAdManager_InitializeCallbackManager
               (InHouseAdManager *this,IAdUIManager *handler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inHouseAdController;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pIVar1 != (InHouseAdController *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    (this->fields)._ReadyForRewardedAdRequest_k__BackingField =
         (pIVar1->fields)._._._._.m_CachedPtr != (void *)0x0;
    return;
  }
  (this->fields)._ReadyForRewardedAdRequest_k__BackingField = 0;
  return;
}


/* Void OnAdFinished() */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::InHouseAdManager_OnAdFinished
               (InHouseAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_InHouseAdManager___OnAdFinished_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_False;
  if ((this->fields).rewarded != 0) {
    pSVar1 = StringLiteral_True;
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_InHouseAdManager___OnAdFinished_,pSVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  if ((this->fields).rewarded == 0) {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    adType = AdType__Enum_InterstitialAd;
  }
  else {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    adType = AdType__Enum_RewardedAd;
  }
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
            (this_01,adType,AdActionType__Enum_Success,AdContext__Enum_None,(MethodInfo *)0x0);
  pIVar2 = (this->fields).inHouseAdController;
  if ((pIVar2 != (InHouseAdController *)0x0) &&
     (this_00 = (pIVar2->fields).generalPromotionAd, this_00 != (GeneralPromotionAd *)0x0)) {
    GeneralPromotionAd::GeneralPromotionAd_Pop(this_00,(MethodInfo *)0x0);
    iVar3 = (this->fields).adContext;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__ILockCursorManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      pMVar4 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
      if ((pMVar4 == (MVGameControllerDesktop *)0x0) ||
         (pIVar5 = (pMVar4->fields).lockCursorManager, pIVar5 == (ILockCursorManager *)0x0))
      goto code_?;
      FUN_?(1,TypeInfo__ILockCursorManager,pIVar5,iVar3 == 0xe);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnInterstitialFinished(Boolean) */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
     InHouseAdManager_OnInterstitialFinished(InHouseAdManager *this,bool obj,MethodInfo *method)

{
  InHouseAdManager_OnAdFinished(this,(MethodInfo *)0x0);
  pAVar1 = (this->fields).interstitialCallback;
  if (pAVar1 != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,3,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void OnRewardedFinished(Boolean) */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
     InHouseAdManager_OnRewardedFinished(InHouseAdManager *this,bool obj,MethodInfo *method)

{
  InHouseAdManager_OnAdFinished(this,(MethodInfo *)0x0);
  pAVar1 = (this->fields).rewardCallback;
  if (pAVar1 != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,3,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void PrepareAd(Boolean, AdContext) */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::InHouseAdManager_PrepareAd
               (InHouseAdManager *this,bool reward,AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InHouseAdManager___Preparing_ad_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__context_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
  pSVar2 = StringLiteral_False;
  if (reward != 0) {
    pSVar2 = StringLiteral_True;
  }
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  AStack_3 = context;
  str3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_6
                     (StringLiteral_InHouseAdManager___Preparing_ad_,pSVar2,StringLiteral__context_,
                      str3,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar4 != (MVGameControllerBase *)0x0) &&
      (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar5->fields).operationRequests,
     this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
              (this_00,(uint)reward,AdActionType__Enum_Start,context,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__ILockCursorManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      pMVar6 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
      if ((pMVar6 == (MVGameControllerDesktop *)0x0) ||
         (pIVar7 = (pMVar6->fields).lockCursorManager, pIVar7 == (ILockCursorManager *)0x0))
      goto code_?;
      FUN_?(1,TypeInfo__ILockCursorManager,pIVar7,0);
    }
    (this->fields).rewarded = reward;
    (this->fields).adContext = context;
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RequestInterstitial(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult], AdContext)
    */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
     InHouseAdManager_RequestInterstitial
               (InHouseAdManager *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *callback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AdIntegration__InHouse__InHouseAdManager__OnInterstitialFinished_bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InHouseAdManager___RequestInters);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InHouseAdManager___RequestInters);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InHouseAdManager___RequestInters);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_InHouseAdManager___RequestInters;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_InHouseAdManager___RequestInters;
  pIVar2 = (this->fields).inHouseAdController;
  if (pIVar2 != (InHouseAdController *)0x0) {
    if ((pIVar2->fields)._Showing_k__BackingField == 0) {
      if ((this->fields)._ReadyForRewardedAdRequest_k__BackingField == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar1,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_InHouseAdManager___RequestInters,(MethodInfo *)0x0);
        if (callback != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
          pcVar3 = (callback->fields)._._.invoke_impl;
          uVar4 = 1;
          pvVar5 = (callback->fields)._._.method;
          goto code_?;
        }
      }
      else {
        bVar6 = iRam_? != 0;
        (this->fields).interstitialCallback = callback;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&(this->fields).interstitialCallback >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar8;
            LOCK();
            uVar10 = *puVar8;
            if (uVar9 == uVar10) {
              *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar10);
        }
        InHouseAdManager_PrepareAd(this,0,context,(MethodInfo *)0x0);
        pIVar2 = (this->fields).inHouseAdController;
        onPromotionFinished = (Action_1_Boolean_ *)FUN_?(TypeInfo__System__Action<bool>);
        FUN_?(onPromotionFinished,this,
                      MethodInfo__AdIntegration__InHouse__InHouseAdManager__OnInterstitialFinished_bool_
                     );
        if (pIVar2 != (InHouseAdController *)0x0) {
          InHouseAdController::InHouseAdController_ShowInHouseAd
                    (pIVar2,onPromotionFinished,5,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_InHouseAdManager___RequestInters,(MethodInfo *)0x0);
      if (callback != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
        pcVar3 = (callback->fields)._._.invoke_impl;
        uVar4 = 0;
        pvVar5 = (callback->fields)._._.method;
code_?:
        (*pcVar3)((callback->fields)._._.method_code,uVar4,pvVar5);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RequestRewardedAd(Action`1[Assets.Scripts.AdIntegration.RewardedAdResult], AdContext) */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
     InHouseAdManager_RequestRewardedAd
               (InHouseAdManager *this,
               Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *rewardedAdCallback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AdIntegration__InHouse__InHouseAdManager__OnRewardedFinished_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InHouseAdManager___RequestReward);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InHouseAdManager___RequestReward);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InHouseAdManager___RequestReward);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_InHouseAdManager___RequestReward;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  message = StringLiteral_InHouseAdManager___RequestReward;
  pSVar1 = StringLiteral_InHouseAdManager___RequestReward;
  pIVar2 = (this->fields).inHouseAdController;
  if (pIVar2 != (InHouseAdController *)0x0) {
    if ((pIVar2->fields)._Showing_k__BackingField == 0) {
      if ((this->fields)._ReadyForRewardedAdRequest_k__BackingField == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)message,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_InHouseAdManager___RequestReward,(MethodInfo *)0x0);
        if (rewardedAdCallback != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
          pcVar3 = (rewardedAdCallback->fields)._._.invoke_impl;
          uVar4 = 1;
          pvVar5 = (rewardedAdCallback->fields)._._.method;
          goto code_?;
        }
      }
      else {
        bVar6 = iRam_? != 0;
        (this->fields).rewardCallback = rewardedAdCallback;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&(this->fields).rewardCallback >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar8;
            LOCK();
            uVar10 = *puVar8;
            if (uVar9 == uVar10) {
              *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar10);
        }
        InHouseAdManager_PrepareAd(this,1,context,(MethodInfo *)0x0);
        pIVar2 = (this->fields).inHouseAdController;
        onPromotionFinished = (Action_1_Boolean_ *)FUN_?(TypeInfo__System__Action<bool>);
        FUN_?(onPromotionFinished,this,
                      MethodInfo__AdIntegration__InHouse__InHouseAdManager__OnRewardedFinished_bool_
                     );
        if (pIVar2 != (InHouseAdController *)0x0) {
          InHouseAdController::InHouseAdController_ShowInHouseAd
                    (pIVar2,onPromotionFinished,(pIVar2->fields).timeoutSuccessDelay,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar1,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_InHouseAdManager___RequestReward,(MethodInfo *)0x0);
      if (rewardedAdCallback != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
        pcVar3 = (rewardedAdCallback->fields)._._.invoke_impl;
        uVar4 = 0;
        pvVar5 = (rewardedAdCallback->fields)._._.method;
code_?:
        (*pcVar3)((rewardedAdCallback->fields)._._.method_code,uVar4,pvVar5);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateInitStatus() */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
     InHouseAdManager_UpdateInitStatus(InHouseAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inHouseAdController;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pIVar1 != (InHouseAdController *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    (this->fields)._ReadyForRewardedAdRequest_k__BackingField =
         (pIVar1->fields)._._._._.m_CachedPtr != (void *)0x0;
    return;
  }
  (this->fields)._ReadyForRewardedAdRequest_k__BackingField = 0;
  return;
}


/* InHouseAdManager() */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::InHouseAdManager__ctor
               (InHouseAdManager *this,MethodInfo *method)

{
  (this->fields).timeoutSuccessDelay = 0x14;
  return;
}


/* String get_RewardedAdNotAvailableText() */

String * Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
         InHouseAdManager_get_RewardedAdNotAvailableText(InHouseAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Ads_not_set_up_for_this_build_ta);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Ads_not_set_up_for_this_build_ta;
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___sPtr___sPtr_____________Ptr_________);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 == (String *)0x0) {
    return (String *)0x0;
  }
  this_01 = (Regex *)FUN_?(TypeInfo__System__Text__RegularExpressions__Regex);
  System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
            (this_01,StringLiteral___sPtr___sPtr_____________Ptr_________,(MethodInfo *)0x0);
  if (this_01 != (Regex *)0x0) {
    if (((this_01->fields).roptions & 0x40) == 0) {
      startat = 0;
    }
    else {
      startat = (pSVar1->fields)._stringLength;
    }
    pMVar2 = System.dll::System::Text::RegularExpressions::Regex::Regex_Run
                       (this_01,0,-1,pSVar1,0,(pSVar1->fields)._stringLength,startat,
                        (MethodInfo *)0x0);
    if (pMVar2 != (Match *)0x0) {
      if ((pMVar2->fields)._._capcount != 0) {
        this_02 = (GroupCollection *)
                  (*(pMVar2->klass->vtable).get_Groups.methodPtr)
                            (pMVar2,(pMVar2->klass->vtable).get_Groups.method);
        if (((this_02 == (GroupCollection *)0x0) ||
            (pGVar3 = System.dll::System::Text::RegularExpressions::GroupCollection::
                      GroupCollection_GetGroup(this_02,1,(MethodInfo *)0x0), pGVar3 == (Group *)0x0)
            ) || (pSVar1 = (String *)
                           (*(pGVar3->klass->vtable).ToString.methodPtr)
                                     (pGVar3,(pGVar3->klass->vtable).ToString.method),
                 pSVar1 == (String *)0x0)) goto code_?;
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar1,1,(pSVar1->fields)._stringLength + -2,(MethodInfo *)0x0);
        pSVar1 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                           (pSVar1,(MethodInfo *)0x0);
      }
      if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
        pTVar4 = TM::TM_get_Instance((MethodInfo *)0x0);
        if (pTVar4 == (TM *)0x0) goto code_?;
        if ((pTVar4->fields).catalog != (Catalog *)0x0) {
          pTVar4 = TM::TM_get_Instance((MethodInfo *)0x0);
          if ((pTVar4 == (TM *)0x0) ||
             (this_00 = (pTVar4->fields).catalog, this_00 == (Catalog *)0x0))
          goto code_?;
          this_03 = GNU::Gettext::Catalog::Catalog_FindItem
                              (this_00,pSVar1,::StringLiteral__,(MethodInfo *)0x0);
          if ((this_03 != (CatalogEntry *)0x0) &&
             ((text = GNU::Gettext::CatalogEntry::CatalogEntry_GetTranslation
                                (this_03,0,(MethodInfo *)0x0), text != (String *)0x0 &&
              ((text->fields)._stringLength != 0)))) {
            pSVar1 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                               (text,(MethodInfo *)0x0);
            return pSVar1;
          }
        }
      }
      return pSVar1;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* TimeSpan get_TimeSinceLastAd() */

TimeSpan Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
         InHouseAdManager_get_TimeSinceLastAd(InHouseAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
}


/* TimeSpan get_TimeSinceLastInterstitial() */

TimeSpan Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
         InHouseAdManager_get_TimeSinceLastInterstitial(InHouseAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
}


/* TimeSpan get_TimeSinceLastRewarded() */

TimeSpan Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::
         InHouseAdManager_get_TimeSinceLastRewarded(InHouseAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
}

