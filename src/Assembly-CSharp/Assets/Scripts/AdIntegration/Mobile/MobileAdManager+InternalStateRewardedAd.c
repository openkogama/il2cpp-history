
/* Void CreateAndLoadRewardedAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_CreateAn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_RewardedLoad);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_CreateAn,(MethodInfo *)0x0);
  MobileAdManager::MobileAdManager_SendStat(StringLiteral_Ad_RewardedLoad,(MethodInfo *)0x0);
  MobileAdManager_InternalStateRewardedAd_DestroyRewardedAd(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<GoogleMobileAds::Api::RewardedAd,_GoogleMobileAds::Api::LoadAdError>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_GoogleMobileAds__Api__RewardedAd__GoogleMobileAds__Api__LoadAdError_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_LoadRewa);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_LoadRewa);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    if ((pMVar1->fields).loadingAd != 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_InternalStateRewardedAd_LoadRewa;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
        return;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateRewardedAd_LoadRewa,(MethodInfo *)0x0);
    pMVar1 = (this->fields).adLoadState;
    if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
      (pMVar1->fields).loadingAd = 1;
      pAVar5 = MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
      pAVar6 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                         ((MethodInfo *)0x0);
      if (pAVar6 != (AdMobCredentials *)0x0) {
        pSVar2 = (pAVar6->fields).RewardedAdUnitId;
        this_00 = (Object__Class *)
                  FUN_?(
                               TypeInfo__System__Action<GoogleMobileAds::Api::RewardedAd,_GoogleMobileAds::Api::LoadAdError>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)this_00,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_GoogleMobileAds__Api__RewardedAd__GoogleMobileAds__Api__LoadAdError_
                   ,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__GoogleMobileAds__IClientFactory);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__GoogleMobileAds__Common__IRewardedAdClient);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__GoogleMobileAds__Api__MobileAds);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_adLoadCallback_is_null__No_ad_wa);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        object = (Object *)
                 FUN_?(TypeInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0);
        if (object != (Object *)0x0) {
          bVar7 = iRam_? != 0;
          object[1].klass = this_00;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)(object + 1) >> 0xc);
            lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
            do {
              uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
              puVar11 = (ulonglong *)(lVar9 + 0xADDR);
              LOCK();
              bVar7 = uVar10 == *puVar11;
              if (bVar7) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          if (object[1].klass == (Object__Class *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_adLoadCallback_is_null__No_ad_wa,(MethodInfo *)0x0);
            return;
          }
          if (*(int *)&(TypeInfo__GoogleMobileAds__Api__MobileAds->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar12 = GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::MobileAds_GetClientFactory
                              ((MethodInfo *)0x0);
          if (pIVar12 != (IClientFactory *)0x0) {
            pMVar13 = (MonitorData *)
                      FUN_?(1,TypeInfo__GoogleMobileAds__IClientFactory,pIVar12);
            bVar7 = iRam_? != 0;
            object[1].monitor = pMVar13;
            if (bVar7) {
              uVar8 = (uint)((ulonglong)&object[1].monitor >> 0xc);
              lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
              do {
                uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
                puVar11 = (ulonglong *)(lVar9 + 0xADDR);
                LOCK();
                bVar7 = uVar10 == *puVar11;
                if (bVar7) {
                  *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                }
                UNLOCK();
              } while (!bVar7);
            }
            if (object[1].monitor != (MonitorData *)0x0) {
              FUN_?(0x12,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient);
              pMVar13 = object[1].monitor;
              pUVar14 = (UnityAction_2_System_Object_System_Object_ *)
                        FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar14,object,
                         MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                         ,(MethodInfo *)0x0);
              if (pMVar13 != (MonitorData *)0x0) {
                FUN_?(0,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pMVar13);
                pMVar13 = object[1].monitor;
                pUVar14 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(
                                       TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                                       );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar14,object,
                           MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                           ,(MethodInfo *)0x0);
                if (pMVar13 != (MonitorData *)0x0) {
                  FUN_?();
                  if (object[1].monitor != (MonitorData *)0x0) {
                    FUN_?(0x13,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,
                                  object[1].monitor,pSVar2,pAVar5);
                    return;
                  }
                }
              }
            }
          }
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_Destroy
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_Destroy);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_Destroy,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).rewardedAdCallback = (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0
  ;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).rewardedAdCallback >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_DestroyR);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_DestroyR,(MethodInfo *)0x0);
  if ((this->fields).rewardedAd != (RewardedAd *)0x0) {
    MobileAdManager_InternalStateRewardedAd_RemoveCallbacks(this,(MethodInfo *)0x0);
    pRVar6 = (this->fields).rewardedAd;
    if (pRVar6 == (RewardedAd *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GoogleMobileAds__Common__IRewardedAdClient);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    (pRVar6->fields)._canShowAd = 0;
    if ((pRVar6->fields)._client != (IRewardedAdClient *)0x0) {
      FUN_?(0x15,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,
                    (pRVar6->fields)._client);
    }
  }
  bVar1 = iRam_? != 0;
  (this->fields).rewardedAd = (RewardedAd *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).rewardedAd >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Void DestroyRewardedAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_DestroyRewardedAd
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_DestroyR);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_DestroyR,(MethodInfo *)0x0);
  if ((this->fields).rewardedAd != (RewardedAd *)0x0) {
    MobileAdManager_InternalStateRewardedAd_RemoveCallbacks(this,(MethodInfo *)0x0);
    pRVar1 = (this->fields).rewardedAd;
    if (pRVar1 == (RewardedAd *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GoogleMobileAds__Common__IRewardedAdClient);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    (pRVar1->fields)._canShowAd = 0;
    if ((pRVar1->fields)._client != (IRewardedAdClient *)0x0) {
      FUN_?(0x15,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,
                    (pRVar1->fields)._client);
    }
  }
  bVar3 = iRam_? != 0;
  (this->fields).rewardedAd = (RewardedAd *)0x0;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).rewardedAd >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void FinishRequest() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_FinishRequest
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  apMStackX_8[0] = this;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_FinishRe);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_FinishRe);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((apMStackX_8[0]->fields).rewardedAdCallback ==
      (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_InternalStateRewardedAd_FinishRe,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateRewardedAd_FinishRe,(MethodInfo *)0x0);
    appMStack_1[0] = apMStackX_8;
    pAVar2 = (apMStackX_8[0]->fields).rewardedAdCallback;
    iVar3 = (apMStackX_8[0]->fields).rewardAdResult;
    if (pAVar2 == (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
      FUN_?(0,iVar3);
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,iVar3,(pAVar2->fields)._._.method);
    FUN_?(appMStack_1);
  }
  return;
}


/* Void HandleError() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_HandleError
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_HandleEr);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_HandleEr);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 == (MobileAdManager_AdLoadState *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = MobileAdManager+AdLoadState::MobileAdManager_AdLoadState_Reload(pMVar1,(MethodInfo *)0x0)
  ;
  if (bVar3 != 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateRewardedAd_HandleEr,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_InternalStateRewardedAd_CreateAn);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Ad_RewardedLoad);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateRewardedAd_CreateAn,(MethodInfo *)0x0);
    MobileAdManager::MobileAdManager_SendStat(StringLiteral_Ad_RewardedLoad,(MethodInfo *)0x0);
    MobileAdManager_InternalStateRewardedAd_DestroyRewardedAd(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__System__Action<GoogleMobileAds::Api::RewardedAd,_GoogleMobileAds::Api::LoadAdError>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_GoogleMobileAds__Api__RewardedAd__GoogleMobileAds__Api__LoadAdError_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_InternalStateRewardedAd_LoadRewa);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_InternalStateRewardedAd_LoadRewa);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = (this->fields).adLoadState;
    if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
      if ((pMVar1->fields).loadingAd != 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar4 = StringLiteral_InternalStateRewardedAd_LoadRewa;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__ILogger);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pIVar5 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar5 != (ILogger_1 *)0x0) {
          apAStack_6[0] = (AdRequest *)pSVar4;
          FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,0);
          return;
        }
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_InternalStateRewardedAd_LoadRewa,(MethodInfo *)0x0);
      pMVar1 = (this->fields).adLoadState;
      if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
        (pMVar1->fields).loadingAd = 1;
        pAVar7 = MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
        pAVar8 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                            ((MethodInfo *)0x0);
        if (pAVar8 != (AdMobCredentials *)0x0) {
          pSVar4 = (pAVar8->fields).RewardedAdUnitId;
          this_00 = (Object__Class *)
                    FUN_?(
                                 TypeInfo__System__Action<GoogleMobileAds::Api::RewardedAd,_GoogleMobileAds::Api::LoadAdError>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)this_00,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_GoogleMobileAds__Api__RewardedAd__GoogleMobileAds__Api__LoadAdError_
                     ,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__GoogleMobileAds__IClientFactory);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__GoogleMobileAds__Common__IRewardedAdClient);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__GoogleMobileAds__Api__MobileAds);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_adLoadCallback_is_null__No_ad_wa);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          object = (Object *)
                   FUN_?(TypeInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0);
          if (object != (Object *)0x0) {
            bVar9 = iRam_? != 0;
            object[1].klass = this_00;
            if (bVar9) {
              uVar10 = (uint)((ulonglong)(object + 1) >> 0xc);
              lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
              do {
                uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
                puVar13 = (ulonglong *)(lVar11 + 0xADDR);
                LOCK();
                bVar9 = uVar12 == *puVar13;
                if (bVar9) {
                  *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                }
                UNLOCK();
              } while (!bVar9);
            }
            if (object[1].klass == (Object__Class *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_adLoadCallback_is_null__No_ad_wa,(MethodInfo *)0x0)
              ;
              return;
            }
            if (*(int *)&(TypeInfo__GoogleMobileAds__Api__MobileAds->_1).field_0x1c == 0) {
              FUN_?();
            }
            pIVar14 = GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::
                      MobileAds_GetClientFactory((MethodInfo *)0x0);
            if (pIVar14 != (IClientFactory *)0x0) {
              pMVar15 = (MonitorData *)
                        FUN_?(1,TypeInfo__GoogleMobileAds__IClientFactory,pIVar14);
              bVar9 = iRam_? != 0;
              object[1].monitor = pMVar15;
              if (bVar9) {
                uVar10 = (uint)((ulonglong)&object[1].monitor >> 0xc);
                lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
                do {
                  uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
                  puVar13 = (ulonglong *)(lVar11 + 0xADDR);
                  LOCK();
                  bVar9 = uVar12 == *puVar13;
                  if (bVar9) {
                    *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar9);
              }
              if (object[1].monitor != (MonitorData *)0x0) {
                FUN_?(0x12,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient);
                pMVar15 = object[1].monitor;
                pUVar16 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar16,object,
                           MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                           ,(MethodInfo *)0x0);
                if (pMVar15 != (MonitorData *)0x0) {
                  FUN_?(0,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pMVar15);
                  pMVar15 = object[1].monitor;
                  pUVar16 = (UnityAction_2_System_Object_System_Object_ *)
                            FUN_?(
                                         TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                                         );
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            (pUVar16,object,
                             MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                             ,(MethodInfo *)0x0);
                  if (pMVar15 != (MonitorData *)0x0) {
                    FUN_?();
                    if (object[1].monitor != (MonitorData *)0x0) {
                      apAStack_6[0] = pAVar7;
                      FUN_?(0x13,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,
                                    object[1].monitor,pSVar4);
                      return;
                    }
                  }
                }
              }
            }
          }
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_HandleEr,(MethodInfo *)0x0);
  (this->fields).rewardAdResult = 1;
  pMStackX_8 = this;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_FinishRe);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_FinishRe);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pMStackX_8->fields).rewardedAdCallback ==
      (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_InternalStateRewardedAd_FinishRe,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateRewardedAd_FinishRe,(MethodInfo *)0x0);
    apAStack_6[0] = (AdRequest *)&pMStackX_8;
    pAVar17 = (pMStackX_8->fields).rewardedAdCallback;
    iVar18 = (pMStackX_8->fields).rewardAdResult;
    if (pAVar17 == (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
      FUN_?(0,iVar18);
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(pAVar17->fields)._._.invoke_impl)
              ((pAVar17->fields)._._.method_code,iVar18,(pAVar17->fields)._._.method);
    FUN_?(apAStack_6);
  }
  return;
}


/* Void HandleRewardedAdLoaded(RewardedAd, LoadAdError) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_HandleRewardedAdLoaded
               (MobileAdManager_InternalStateRewardedAd *this,RewardedAd *ad,LoadAdError *error,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<GoogleMobileAds::Api::Reward>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__UserRewardEarnedCallback_GoogleMobileAds__Api__Reward_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_HandleRe);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_HandleRe);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_InternalStateRewardedAd_HandleRe;
  if (error == (LoadAdError *)0x0) {
    if (ad != (RewardedAd *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_InternalStateRewardedAd_HandleRe,(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      (this->fields).rewardedAd = ad;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).rewardedAd >> 0xc);
        puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar5 = *puVar4;
          LOCK();
          uVar6 = *puVar4;
          if (uVar5 == uVar6) {
            *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar5 != uVar6);
      }
      MobileAdManager_InternalStateRewardedAd_SetupCallbacks(this,(MethodInfo *)0x0);
      pMVar7 = (this->fields).adLoadState;
      if (pMVar7 != (MobileAdManager_AdLoadState *)0x0) {
        (pMVar7->fields).loadingAd = 0;
        if ((this->fields).isHandlingRequest != 0) {
          this_00 = (this->fields).rewardedAd;
          this_02 = (UnityAction_1_System_Object_ *)
                    FUN_?(TypeInfo__System__Action<GoogleMobileAds::Api::Reward>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_02,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__UserRewardEarnedCallback_GoogleMobileAds__Api__Reward_
                     ,(MethodInfo *)0x0);
          if (this_00 == (RewardedAd *)0x0) goto code_?;
          GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_Show
                    (this_00,(Action_1_GoogleMobileAds_Api_Reward_ *)this_02,(MethodInfo *)0x0);
        }
        return;
      }
      goto code_?;
    }
    str1 = (String *)0x0;
  }
  else {
    str1 = (String *)
           (*(error->klass->vtable).ToString.methodPtr)
                     (error,(error->klass->vtable).ToString.method);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,str1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)pSVar1,(MethodInfo *)0x0);
  pMVar7 = (this->fields).adLoadState;
  if (pMVar7 != (MobileAdManager_AdLoadState *)0x0) {
    (pMVar7->fields).loadingAd = 0;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_InternalStateRewardedAd_HandleEr);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_InternalStateRewardedAd_HandleEr);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar7 = (this->fields).adLoadState;
    if (pMVar7 == (MobileAdManager_AdLoadState *)0x0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar9 = MobileAdManager+AdLoadState::MobileAdManager_AdLoadState_Reload
                       (pMVar7,(MethodInfo *)0x0);
    if (bVar9 != 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_InternalStateRewardedAd_HandleEr,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_InternalStateRewardedAd_CreateAn);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Ad_RewardedLoad);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_InternalStateRewardedAd_CreateAn,(MethodInfo *)0x0);
      MobileAdManager::MobileAdManager_SendStat(StringLiteral_Ad_RewardedLoad,(MethodInfo *)0x0);
      MobileAdManager_InternalStateRewardedAd_DestroyRewardedAd(this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      TypeInfo__System__Action<GoogleMobileAds::Api::RewardedAd,_GoogleMobileAds::Api::LoadAdError>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_GoogleMobileAds__Api__RewardedAd__GoogleMobileAds__Api__LoadAdError_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_InternalStateRewardedAd_LoadRewa);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_InternalStateRewardedAd_LoadRewa);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar7 = (this->fields).adLoadState;
      if (pMVar7 != (MobileAdManager_AdLoadState *)0x0) {
        if ((pMVar7->fields).loadingAd != 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar1 = StringLiteral_InternalStateRewardedAd_LoadRewa;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__ILogger);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar10 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
          if (pIVar10 != (ILogger_1 *)0x0) {
            apAStack_11[0] = (AdRequest *)pSVar1;
            FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar10,0);
            return;
          }
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_InternalStateRewardedAd_LoadRewa,(MethodInfo *)0x0);
        pMVar7 = (this->fields).adLoadState;
        if (pMVar7 != (MobileAdManager_AdLoadState *)0x0) {
          (pMVar7->fields).loadingAd = 1;
          pAVar12 = MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
          pAVar13 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                              ((MethodInfo *)0x0);
          if (pAVar13 != (AdMobCredentials *)0x0) {
            pSVar1 = (pAVar13->fields).RewardedAdUnitId;
            this_01 = (Object__Class *)
                      FUN_?(
                                   TypeInfo__System__Action<GoogleMobileAds::Api::RewardedAd,_GoogleMobileAds::Api::LoadAdError>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)this_01,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_GoogleMobileAds__Api__RewardedAd__GoogleMobileAds__Api__LoadAdError_
                       ,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              FUN_?(&
                            TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__GoogleMobileAds__IClientFactory);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__GoogleMobileAds__Common__IRewardedAdClient);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__GoogleMobileAds__Api__MobileAds);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_adLoadCallback_is_null__No_ad_wa);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            object = (Object *)
                     FUN_?(TypeInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0)
            ;
            if (object != (Object *)0x0) {
              bVar2 = iRam_? != 0;
              object[1].klass = this_01;
              if (bVar2) {
                uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
                lVar14 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                do {
                  uVar6 = *(ulonglong *)(lVar14 + 0xADDR);
                  puVar4 = (ulonglong *)(lVar14 + 0xADDR);
                  LOCK();
                  bVar2 = uVar6 == *puVar4;
                  if (bVar2) {
                    *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar2);
              }
              if (object[1].klass == (Object__Class *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_adLoadCallback_is_null__No_ad_wa,
                           (MethodInfo *)0x0);
                return;
              }
              if (*(int *)&(TypeInfo__GoogleMobileAds__Api__MobileAds->_1).field_0x1c == 0) {
                FUN_?();
              }
              pIVar15 = GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::
                        MobileAds_GetClientFactory((MethodInfo *)0x0);
              if (pIVar15 != (IClientFactory *)0x0) {
                pMVar16 = (MonitorData *)
                          FUN_?(1,TypeInfo__GoogleMobileAds__IClientFactory,pIVar15);
                bVar2 = iRam_? != 0;
                object[1].monitor = pMVar16;
                if (bVar2) {
                  uVar3 = (uint)((ulonglong)&object[1].monitor >> 0xc);
                  lVar14 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar6 = *(ulonglong *)(lVar14 + 0xADDR);
                    puVar4 = (ulonglong *)(lVar14 + 0xADDR);
                    LOCK();
                    bVar2 = uVar6 == *puVar4;
                    if (bVar2) {
                      *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar2);
                }
                if (object[1].monitor != (MonitorData *)0x0) {
                  FUN_?(0x12,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient);
                  pMVar16 = object[1].monitor;
                  pUVar17 = (UnityAction_2_System_Object_System_Object_ *)
                            FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            (pUVar17,object,
                             MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                             ,(MethodInfo *)0x0);
                  if (pMVar16 != (MonitorData *)0x0) {
                    FUN_?(0,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pMVar16);
                    pMVar16 = object[1].monitor;
                    pUVar17 = (UnityAction_2_System_Object_System_Object_ *)
                              FUN_?(
                                           TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                                           );
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                              (pUVar17,object,
                               MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                               ,(MethodInfo *)0x0);
                    if (pMVar16 != (MonitorData *)0x0) {
                      FUN_?();
                      if (object[1].monitor != (MonitorData *)0x0) {
                        apAStack_11[0] = pAVar12;
                        FUN_?(0x13,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,
                                      object[1].monitor,pSVar1);
                        return;
                      }
                    }
                  }
                }
              }
            }
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateRewardedAd_HandleEr,(MethodInfo *)0x0);
    (this->fields).rewardAdResult = 1;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_InternalStateRewardedAd_FinishRe);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_InternalStateRewardedAd_FinishRe);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((this->fields).rewardedAdCallback ==
        (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_InternalStateRewardedAd_FinishRe,(MethodInfo *)0x0);
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_InternalStateRewardedAd_FinishRe,(MethodInfo *)0x0);
      apAStack_11[0] = (AdRequest *)&stack0x00000008;
      pAVar18 = (this->fields).rewardedAdCallback;
      iVar19 = (this->fields).rewardAdResult;
      if (pAVar18 == (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
        FUN_?(0,iVar19);
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (*(pAVar18->fields)._._.invoke_impl)
                ((pAVar18->fields)._._.method_code,iVar19,(pAVar18->fields)._._.method);
      FUN_?(apAStack_11);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void LoadRewardedAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_LoadRewardedAd
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<GoogleMobileAds::Api::RewardedAd,_GoogleMobileAds::Api::LoadAdError>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_GoogleMobileAds__Api__RewardedAd__GoogleMobileAds__Api__LoadAdError_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_LoadRewa);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_LoadRewa);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    if ((pMVar1->fields).loadingAd != 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_InternalStateRewardedAd_LoadRewa;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
        return;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateRewardedAd_LoadRewa,(MethodInfo *)0x0);
    pMVar1 = (this->fields).adLoadState;
    if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
      (pMVar1->fields).loadingAd = 1;
      pAVar5 = MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
      pAVar6 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                         ((MethodInfo *)0x0);
      if (pAVar6 != (AdMobCredentials *)0x0) {
        pSVar2 = (pAVar6->fields).RewardedAdUnitId;
        this_00 = (Object__Class *)
                  FUN_?(
                               TypeInfo__System__Action<GoogleMobileAds::Api::RewardedAd,_GoogleMobileAds::Api::LoadAdError>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)this_00,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_GoogleMobileAds__Api__RewardedAd__GoogleMobileAds__Api__LoadAdError_
                   ,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__GoogleMobileAds__IClientFactory);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__GoogleMobileAds__Common__IRewardedAdClient);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__GoogleMobileAds__Api__MobileAds);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_adLoadCallback_is_null__No_ad_wa);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        object = (Object *)
                 FUN_?(TypeInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0);
        if (object != (Object *)0x0) {
          bVar7 = iRam_? != 0;
          object[1].klass = this_00;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)(object + 1) >> 0xc);
            lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
            do {
              uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
              puVar11 = (ulonglong *)(lVar9 + 0xADDR);
              LOCK();
              bVar7 = uVar10 == *puVar11;
              if (bVar7) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          if (object[1].klass == (Object__Class *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_adLoadCallback_is_null__No_ad_wa,(MethodInfo *)0x0);
            return;
          }
          if (*(int *)&(TypeInfo__GoogleMobileAds__Api__MobileAds->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar12 = GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::MobileAds_GetClientFactory
                              ((MethodInfo *)0x0);
          if (pIVar12 != (IClientFactory *)0x0) {
            pMVar13 = (MonitorData *)
                      FUN_?(1,TypeInfo__GoogleMobileAds__IClientFactory,pIVar12);
            bVar7 = iRam_? != 0;
            object[1].monitor = pMVar13;
            if (bVar7) {
              uVar8 = (uint)((ulonglong)&object[1].monitor >> 0xc);
              lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
              do {
                uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
                puVar11 = (ulonglong *)(lVar9 + 0xADDR);
                LOCK();
                bVar7 = uVar10 == *puVar11;
                if (bVar7) {
                  *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                }
                UNLOCK();
              } while (!bVar7);
            }
            if (object[1].monitor != (MonitorData *)0x0) {
              FUN_?(0x12,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient);
              pMVar13 = object[1].monitor;
              pUVar14 = (UnityAction_2_System_Object_System_Object_ *)
                        FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar14,object,
                         MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                         ,(MethodInfo *)0x0);
              if (pMVar13 != (MonitorData *)0x0) {
                FUN_?(0,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pMVar13);
                pMVar13 = object[1].monitor;
                pUVar14 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(
                                       TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                                       );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar14,object,
                           MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                           ,(MethodInfo *)0x0);
                if (pMVar13 != (MonitorData *)0x0) {
                  FUN_?();
                  if (object[1].monitor != (MonitorData *)0x0) {
                    FUN_?(0x13,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,
                                  object[1].monitor,pSVar2,pAVar5);
                    return;
                  }
                }
              }
            }
          }
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RemoveCallbacks() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_RemoveCallbacks
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdError>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdClicked__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentClosed__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentFailed_GoogleMobileAds__Api__AdError_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentOpened__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdImpressionRecorded__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdPaid_GoogleMobileAds__Api__AdValue_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_RemoveCa);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_RemoveCa,(MethodInfo *)0x0);
  pRVar1 = (this->fields).rewardedAd;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,
             MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentOpened__
             ,(MethodInfo *)0x0);
  if (pRVar1 != (RewardedAd *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    ppAVar3 = &(pRVar1->fields).OnAdFullScreenContentOpened;
    pAVar4 = (pRVar1->fields).OnAdFullScreenContentOpened;
    do {
      pAVar5 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar4,(Delegate *)pNVar2,(MethodInfo *)0x0);
      pAVar6 = (Action *)0x0;
      if (pAVar5 != (Action *)0x0) {
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar5;
        }
        if (pAVar6 == (Action *)0x0) {
          FUN_?(pAVar5);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      LOCK();
      pAVar5 = *ppAVar3;
      bVar8 = pAVar4 == pAVar5;
      if (bVar8) {
        *ppAVar3 = pAVar6;
        pAVar5 = pAVar4;
      }
      UNLOCK();
      pAVar6 = pAVar4;
      if (!bVar8) {
        pAVar6 = pAVar5;
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)ppAVar3 >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      bVar8 = pAVar6 != pAVar4;
      pAVar4 = pAVar6;
    } while (bVar8);
    pRVar1 = (this->fields).rewardedAd;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentClosed__
               ,(MethodInfo *)0x0);
    if (pRVar1 != (RewardedAd *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      ppAVar3 = &(pRVar1->fields).OnAdFullScreenContentClosed;
      pAVar4 = (pRVar1->fields).OnAdFullScreenContentClosed;
      do {
        pAVar5 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pAVar4,(Delegate *)pNVar2,(MethodInfo *)0x0);
        pAVar6 = (Action *)0x0;
        if (pAVar5 != (Action *)0x0) {
          if (pAVar5->klass == TypeInfo__System__Action) {
            pAVar6 = pAVar5;
          }
          if (pAVar6 == (Action *)0x0) {
            FUN_?(pAVar5);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        LOCK();
        pAVar5 = *ppAVar3;
        bVar8 = pAVar4 == pAVar5;
        if (bVar8) {
          *ppAVar3 = pAVar6;
          pAVar5 = pAVar4;
        }
        UNLOCK();
        pAVar6 = pAVar4;
        if (!bVar8) {
          pAVar6 = pAVar5;
        }
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)ppAVar3 >> 0xc);
          lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
          do {
            uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
            puVar12 = (ulonglong *)(lVar10 + 0xADDR);
            LOCK();
            bVar8 = uVar11 == *puVar12;
            if (bVar8) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        bVar8 = pAVar6 != pAVar4;
        pAVar4 = pAVar6;
      } while (bVar8);
      pRVar1 = (this->fields).rewardedAd;
      pUVar13 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<GoogleMobileAds::Api::AdError>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (pUVar13,(Object *)this,
                 MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentFailed_GoogleMobileAds__Api__AdError_
                 ,(MethodInfo *)0x0);
      if (pRVar1 != (RewardedAd *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdError>);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        ppAVar14 = &(pRVar1->fields).OnAdFullScreenContentFailed;
        source = (pRVar1->fields).OnAdFullScreenContentFailed;
        do {
          pDVar15 = mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)source,(Delegate *)pUVar13,(MethodInfo *)0x0);
          pAVar16 = TypeInfo__System__Action<GoogleMobileAds::Api::AdError>;
          if (pDVar15 == (Delegate *)0x0) {
            pAVar17 = (Action_1_GoogleMobileAds_Api_AdError_ *)0x0;
          }
          else {
            pAVar17 = (Action_1_GoogleMobileAds_Api_AdError_ *)
                      FUN_?(pDVar15,TypeInfo__System__Action<GoogleMobileAds::Api::AdError>)
            ;
            if (pAVar17 == (Action_1_GoogleMobileAds_Api_AdError_ *)0x0) {
              FUN_?(pDVar15,pAVar16);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          LOCK();
          pAVar18 = *ppAVar14;
          bVar8 = source == pAVar18;
          if (bVar8) {
            *ppAVar14 = pAVar17;
            pAVar18 = source;
          }
          UNLOCK();
          pAVar17 = source;
          if (!bVar8) {
            pAVar17 = pAVar18;
          }
          if (iRam_? != 0) {
            uVar9 = (uint)((ulonglong)ppAVar14 >> 0xc);
            lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
            do {
              uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
              puVar12 = (ulonglong *)(lVar10 + 0xADDR);
              LOCK();
              bVar8 = uVar11 == *puVar12;
              if (bVar8) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          bVar8 = pAVar17 != source;
          source = pAVar17;
        } while (bVar8);
        pRVar1 = (this->fields).rewardedAd;
        pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar2,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdClicked__
                   ,(MethodInfo *)0x0);
        if (pRVar1 != (RewardedAd *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Action);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          ppAVar3 = &(pRVar1->fields).OnAdClicked;
          pAVar4 = (pRVar1->fields).OnAdClicked;
          do {
            pAVar5 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Remove
                                ((Delegate *)pAVar4,(Delegate *)pNVar2,(MethodInfo *)0x0);
            pAVar6 = (Action *)0x0;
            if (pAVar5 != (Action *)0x0) {
              if (pAVar5->klass == TypeInfo__System__Action) {
                pAVar6 = pAVar5;
              }
              if (pAVar6 == (Action *)0x0) {
                FUN_?(pAVar5);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            LOCK();
            pAVar5 = *ppAVar3;
            bVar8 = pAVar4 == pAVar5;
            if (bVar8) {
              *ppAVar3 = pAVar6;
              pAVar5 = pAVar4;
            }
            UNLOCK();
            pAVar6 = pAVar4;
            if (!bVar8) {
              pAVar6 = pAVar5;
            }
            if (iRam_? != 0) {
              uVar9 = (uint)((ulonglong)ppAVar3 >> 0xc);
              lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
              do {
                uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                LOCK();
                bVar8 = uVar11 == *puVar12;
                if (bVar8) {
                  *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                }
                UNLOCK();
              } while (!bVar8);
            }
            bVar8 = pAVar6 != pAVar4;
            pAVar4 = pAVar6;
          } while (bVar8);
          pRVar1 = (this->fields).rewardedAd;
          pUVar13 = (UnityAction_1_System_Object_ *)
                    FUN_?(TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (pUVar13,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdPaid_GoogleMobileAds__Api__AdValue_
                     ,(MethodInfo *)0x0);
          if (pRVar1 != (RewardedAd *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pRVar19 = &pRVar1->fields;
            source_00 = (pRVar1->fields).OnAdPaid;
            do {
              pDVar15 = mscorlib.dll::System::Delegate::Delegate_Remove
                                  ((Delegate *)source_00,(Delegate *)pUVar13,(MethodInfo *)0x0);
              pAVar20 = TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>;
              if (pDVar15 == (Delegate *)0x0) {
                pAVar21 = (Action_1_GoogleMobileAds_Api_AdValue_ *)0x0;
              }
              else {
                pAVar21 = (Action_1_GoogleMobileAds_Api_AdValue_ *)
                          FUN_?(pDVar15,
                                        TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>);
                if (pAVar21 == (Action_1_GoogleMobileAds_Api_AdValue_ *)0x0) {
                  FUN_?(pDVar15,pAVar20);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              LOCK();
              pAVar22 = pRVar19->OnAdPaid;
              bVar8 = source_00 == pAVar22;
              if (bVar8) {
                pRVar19->OnAdPaid = pAVar21;
                pAVar22 = source_00;
              }
              UNLOCK();
              pAVar21 = source_00;
              if (!bVar8) {
                pAVar21 = pAVar22;
              }
              if (iRam_? != 0) {
                uVar9 = (uint)((ulonglong)pRVar19 >> 0xc);
                lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
                do {
                  uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                  puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                  LOCK();
                  bVar8 = uVar11 == *puVar12;
                  if (bVar8) {
                    *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar8);
              }
              bVar8 = pAVar21 != source_00;
              source_00 = pAVar21;
            } while (bVar8);
            pRVar1 = (this->fields).rewardedAd;
            pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar2,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdImpressionRecorded__
                       ,(MethodInfo *)0x0);
            if (pRVar1 != (RewardedAd *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Action);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pAVar4 = (pRVar1->fields).OnAdImpressionRecorded;
              do {
                pAVar5 = (Action *)
                          mscorlib.dll::System::Delegate::Delegate_Remove
                                    ((Delegate *)pAVar4,(Delegate *)pNVar2,(MethodInfo *)0x0);
                pAVar6 = (Action *)0x0;
                if (pAVar5 != (Action *)0x0) {
                  if (pAVar5->klass == TypeInfo__System__Action) {
                    pAVar6 = pAVar5;
                  }
                  if (pAVar6 == (Action *)0x0) {
                    FUN_?(pAVar5);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                ppAVar3 = &(pRVar1->fields).OnAdImpressionRecorded;
                LOCK();
                pAVar5 = *ppAVar3;
                bVar8 = pAVar4 == pAVar5;
                if (bVar8) {
                  *ppAVar3 = pAVar6;
                  pAVar5 = pAVar4;
                }
                UNLOCK();
                pAVar6 = pAVar4;
                if (!bVar8) {
                  pAVar6 = pAVar5;
                }
                if (iRam_? != 0) {
                  uVar9 = (uint)((ulonglong)&(pRVar1->fields).OnAdImpressionRecorded >> 0xc);
                  lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                    puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                    LOCK();
                    bVar8 = uVar11 == *puVar12;
                    if (bVar8) {
                      *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar8);
                }
                bVar8 = pAVar6 == pAVar4;
                pAVar4 = pAVar6;
                if (bVar8) {
                  return;
                }
              } while( true );
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RequestRewardedAd(Action`1[Assets.Scripts.AdIntegration.RewardedAdResult]) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_RequestRewardedAd
               (MobileAdManager_InternalStateRewardedAd *this,
               Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *rewardedAdCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<GoogleMobileAds::Api::Reward>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__UserRewardEarnedCallback_GoogleMobileAds__Api__Reward_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_RequestR);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_RequestR,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).rewardedAdCallback = rewardedAdCallback;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).rewardedAdCallback >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  (this->fields).isHandlingRequest = 1;
  if ((((this->fields).rewardedAd == (RewardedAd *)0x0) ||
      (this_00 = (this->fields).rewardedAd, (this_00->fields)._client == (IRewardedAdClient *)0x0))
     || ((this_00->fields)._canShowAd == 0)) {
    pMVar6 = (this->fields).adLoadState;
    if (pMVar6 == (MobileAdManager_AdLoadState *)0x0) goto code_?;
    if ((pMVar6->fields).loadingAd == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_InternalStateRewardedAd_CreateAn);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Ad_RewardedLoad);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_InternalStateRewardedAd_CreateAn,(MethodInfo *)0x0);
      MobileAdManager::MobileAdManager_SendStat(StringLiteral_Ad_RewardedLoad,(MethodInfo *)0x0);
      MobileAdManager_InternalStateRewardedAd_DestroyRewardedAd(this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      TypeInfo__System__Action<GoogleMobileAds::Api::RewardedAd,_GoogleMobileAds::Api::LoadAdError>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_GoogleMobileAds__Api__RewardedAd__GoogleMobileAds__Api__LoadAdError_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_InternalStateRewardedAd_LoadRewa);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_InternalStateRewardedAd_LoadRewa);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = (this->fields).adLoadState;
      if (pMVar6 != (MobileAdManager_AdLoadState *)0x0) {
        if ((pMVar6->fields).loadingAd != 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar7 = StringLiteral_InternalStateRewardedAd_LoadRewa;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__ILogger);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar8 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
          if (pIVar8 != (ILogger_1 *)0x0) {
            FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar8,0,pSVar7);
            return;
          }
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_InternalStateRewardedAd_LoadRewa,(MethodInfo *)0x0);
        pMVar6 = (this->fields).adLoadState;
        if (pMVar6 != (MobileAdManager_AdLoadState *)0x0) {
          (pMVar6->fields).loadingAd = 1;
          pAVar10 = MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
          pAVar11 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                              ((MethodInfo *)0x0);
          if (pAVar11 != (AdMobCredentials *)0x0) {
            pSVar7 = (pAVar11->fields).RewardedAdUnitId;
            this_02 = (Object__Class *)
                      FUN_?(
                                   TypeInfo__System__Action<GoogleMobileAds::Api::RewardedAd,_GoogleMobileAds::Api::LoadAdError>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)this_02,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_GoogleMobileAds__Api__RewardedAd__GoogleMobileAds__Api__LoadAdError_
                       ,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              FUN_?(&
                            TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__GoogleMobileAds__IClientFactory);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__GoogleMobileAds__Common__IRewardedAdClient);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__GoogleMobileAds__Api__MobileAds);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_adLoadCallback_is_null__No_ad_wa);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            object = (Object *)
                     FUN_?(TypeInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0)
            ;
            if (object != (Object *)0x0) {
              bVar1 = iRam_? != 0;
              object[1].klass = this_02;
              if (bVar1) {
                uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
                lVar12 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                do {
                  uVar5 = *(ulonglong *)(lVar12 + 0xADDR);
                  puVar3 = (ulonglong *)(lVar12 + 0xADDR);
                  LOCK();
                  bVar1 = uVar5 == *puVar3;
                  if (bVar1) {
                    *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar1);
              }
              if (object[1].klass == (Object__Class *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_adLoadCallback_is_null__No_ad_wa,
                           (MethodInfo *)0x0);
                return;
              }
              if (*(int *)&(TypeInfo__GoogleMobileAds__Api__MobileAds->_1).field_0x1c == 0) {
                FUN_?();
              }
              pIVar13 = GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::
                        MobileAds_GetClientFactory((MethodInfo *)0x0);
              if (pIVar13 != (IClientFactory *)0x0) {
                pMVar14 = (MonitorData *)
                          FUN_?(1,TypeInfo__GoogleMobileAds__IClientFactory,pIVar13);
                bVar1 = iRam_? != 0;
                object[1].monitor = pMVar14;
                if (bVar1) {
                  uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
                  lVar12 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar5 = *(ulonglong *)(lVar12 + 0xADDR);
                    puVar3 = (ulonglong *)(lVar12 + 0xADDR);
                    LOCK();
                    bVar1 = uVar5 == *puVar3;
                    if (bVar1) {
                      *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar1);
                }
                if (object[1].monitor != (MonitorData *)0x0) {
                  FUN_?(0x12,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient);
                  pMVar14 = object[1].monitor;
                  pUVar15 = (UnityAction_2_System_Object_System_Object_ *)
                            FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            (pUVar15,object,
                             MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                             ,(MethodInfo *)0x0);
                  if (pMVar14 != (MonitorData *)0x0) {
                    FUN_?(0,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pMVar14);
                    pMVar14 = object[1].monitor;
                    pUVar15 = (UnityAction_2_System_Object_System_Object_ *)
                              FUN_?(
                                           TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                                           );
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                              (pUVar15,object,
                               MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                               ,(MethodInfo *)0x0);
                    if (pMVar14 != (MonitorData *)0x0) {
                      FUN_?();
                      if (object[1].monitor != (MonitorData *)0x0) {
                        FUN_?(0x13,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,
                                      object[1].monitor,pSVar7,pAVar10);
                        return;
                      }
                    }
                  }
                }
              }
            }
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
      }
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<GoogleMobileAds::Api::Reward>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__UserRewardEarnedCallback_GoogleMobileAds__Api__Reward_
               ,(MethodInfo *)0x0);
    if (this_00 == (RewardedAd *)0x0) {
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_Show
              (this_00,(Action_1_GoogleMobileAds_Api_Reward_ *)this_01,(MethodInfo *)0x0);
  }
  return;
}


/* Void RewardedAdOnOnAdClicked() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_RewardedAdOnOnAdClicked
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_Rewarded);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral_InternalStateRewardedAd_Rewarded;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,3,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RewardedAdOnOnAdFullScreenContentClosed() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_RewardedAdOnOnAdFullScreenContentClosed
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_Rewarded);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_Rewarded,(MethodInfo *)0x0);
  MobileAdManager_InternalStateRewardedAd_FinishRequest(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_CreateAn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_RewardedLoad);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_CreateAn,(MethodInfo *)0x0);
  MobileAdManager::MobileAdManager_SendStat(StringLiteral_Ad_RewardedLoad,(MethodInfo *)0x0);
  MobileAdManager_InternalStateRewardedAd_DestroyRewardedAd(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<GoogleMobileAds::Api::RewardedAd,_GoogleMobileAds::Api::LoadAdError>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_GoogleMobileAds__Api__RewardedAd__GoogleMobileAds__Api__LoadAdError_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_LoadRewa);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_LoadRewa);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    if ((pMVar1->fields).loadingAd != 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_InternalStateRewardedAd_LoadRewa;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
        return;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateRewardedAd_LoadRewa,(MethodInfo *)0x0);
    pMVar1 = (this->fields).adLoadState;
    if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
      (pMVar1->fields).loadingAd = 1;
      pAVar5 = MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
      pAVar6 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                         ((MethodInfo *)0x0);
      if (pAVar6 != (AdMobCredentials *)0x0) {
        pSVar2 = (pAVar6->fields).RewardedAdUnitId;
        this_00 = (Object__Class *)
                  FUN_?(
                               TypeInfo__System__Action<GoogleMobileAds::Api::RewardedAd,_GoogleMobileAds::Api::LoadAdError>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)this_00,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_GoogleMobileAds__Api__RewardedAd__GoogleMobileAds__Api__LoadAdError_
                   ,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__GoogleMobileAds__IClientFactory);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__GoogleMobileAds__Common__IRewardedAdClient);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__GoogleMobileAds__Api__MobileAds);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_adLoadCallback_is_null__No_ad_wa);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        object = (Object *)
                 FUN_?(TypeInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0);
        if (object != (Object *)0x0) {
          bVar7 = iRam_? != 0;
          object[1].klass = this_00;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)(object + 1) >> 0xc);
            lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
            do {
              uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
              puVar11 = (ulonglong *)(lVar9 + 0xADDR);
              LOCK();
              bVar7 = uVar10 == *puVar11;
              if (bVar7) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          if (object[1].klass == (Object__Class *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_adLoadCallback_is_null__No_ad_wa,(MethodInfo *)0x0);
            return;
          }
          if (*(int *)&(TypeInfo__GoogleMobileAds__Api__MobileAds->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar12 = GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::MobileAds_GetClientFactory
                              ((MethodInfo *)0x0);
          if (pIVar12 != (IClientFactory *)0x0) {
            pMVar13 = (MonitorData *)
                      FUN_?(1,TypeInfo__GoogleMobileAds__IClientFactory,pIVar12);
            bVar7 = iRam_? != 0;
            object[1].monitor = pMVar13;
            if (bVar7) {
              uVar8 = (uint)((ulonglong)&object[1].monitor >> 0xc);
              lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
              do {
                uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
                puVar11 = (ulonglong *)(lVar9 + 0xADDR);
                LOCK();
                bVar7 = uVar10 == *puVar11;
                if (bVar7) {
                  *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                }
                UNLOCK();
              } while (!bVar7);
            }
            if (object[1].monitor != (MonitorData *)0x0) {
              FUN_?(0x12,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient);
              pMVar13 = object[1].monitor;
              pUVar14 = (UnityAction_2_System_Object_System_Object_ *)
                        FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar14,object,
                         MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                         ,(MethodInfo *)0x0);
              if (pMVar13 != (MonitorData *)0x0) {
                FUN_?(0,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pMVar13);
                pMVar13 = object[1].monitor;
                pUVar14 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(
                                       TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                                       );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar14,object,
                           MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                           ,(MethodInfo *)0x0);
                if (pMVar13 != (MonitorData *)0x0) {
                  FUN_?();
                  if (object[1].monitor != (MonitorData *)0x0) {
                    FUN_?(0x13,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,
                                  object[1].monitor,pSVar2,pAVar5);
                    return;
                  }
                }
              }
            }
          }
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RewardedAdOnOnAdFullScreenContentFailed(AdError) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_RewardedAdOnOnAdFullScreenContentFailed
               (MobileAdManager_InternalStateRewardedAd *this,AdError *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_Rewarded);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_InternalStateRewardedAd_Rewarded;
  if (obj == (AdError *)0x0) {
    str1 = (String *)0x0;
  }
  else {
    str1 = (String *)
           (*(obj->klass->vtable).ToString.methodPtr)(obj,(obj->klass->vtable).ToString.method);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,str1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)pSVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_HandleEr);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_HandleEr);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = (this->fields).adLoadState;
  if (pMVar2 != (MobileAdManager_AdLoadState *)0x0) {
    bVar3 = MobileAdManager+AdLoadState::MobileAdManager_AdLoadState_Reload
                      (pMVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_InternalStateRewardedAd_HandleEr,(MethodInfo *)0x0);
      (this->fields).rewardAdResult = 1;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__DateTime);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_InternalStateRewardedAd_FinishRe);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_InternalStateRewardedAd_FinishRe);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this->fields).rewardedAdCallback ==
          (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_InternalStateRewardedAd_FinishRe,(MethodInfo *)0x0);
      }
      else {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_InternalStateRewardedAd_FinishRe,(MethodInfo *)0x0);
        apAStack_4[0] = (AdRequest *)&stack0x00000008;
        pAVar5 = (this->fields).rewardedAdCallback;
        iVar6 = (this->fields).rewardAdResult;
        if (pAVar5 == (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
          FUN_?(0,iVar6);
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (*(pAVar5->fields)._._.invoke_impl)
                  ((pAVar5->fields)._._.method_code,iVar6,(pAVar5->fields)._._.method);
        FUN_?(apAStack_4);
      }
      return;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateRewardedAd_HandleEr,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_InternalStateRewardedAd_CreateAn);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Ad_RewardedLoad);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateRewardedAd_CreateAn,(MethodInfo *)0x0);
    MobileAdManager::MobileAdManager_SendStat(StringLiteral_Ad_RewardedLoad,(MethodInfo *)0x0);
    MobileAdManager_InternalStateRewardedAd_DestroyRewardedAd(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__System__Action<GoogleMobileAds::Api::RewardedAd,_GoogleMobileAds::Api::LoadAdError>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_GoogleMobileAds__Api__RewardedAd__GoogleMobileAds__Api__LoadAdError_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_InternalStateRewardedAd_LoadRewa);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_InternalStateRewardedAd_LoadRewa);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = (this->fields).adLoadState;
    if (pMVar2 != (MobileAdManager_AdLoadState *)0x0) {
      if ((pMVar2->fields).loadingAd != 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar1 = StringLiteral_InternalStateRewardedAd_LoadRewa;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__ILogger);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pIVar8 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar8 != (ILogger_1 *)0x0) {
          apAStack_4[0] = (AdRequest *)pSVar1;
          FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar8,0);
          return;
        }
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_InternalStateRewardedAd_LoadRewa,(MethodInfo *)0x0);
      pMVar2 = (this->fields).adLoadState;
      if (pMVar2 != (MobileAdManager_AdLoadState *)0x0) {
        (pMVar2->fields).loadingAd = 1;
        pAVar9 = MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
        pAVar10 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                            ((MethodInfo *)0x0);
        if (pAVar10 != (AdMobCredentials *)0x0) {
          pSVar1 = (pAVar10->fields).RewardedAdUnitId;
          this_00 = (Object__Class *)
                    FUN_?(
                                 TypeInfo__System__Action<GoogleMobileAds::Api::RewardedAd,_GoogleMobileAds::Api::LoadAdError>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)this_00,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__HandleRewardedAdLoaded_GoogleMobileAds__Api__RewardedAd__GoogleMobileAds__Api__LoadAdError_
                     ,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__GoogleMobileAds__IClientFactory);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__GoogleMobileAds__Common__IRewardedAdClient);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__GoogleMobileAds__Api__MobileAds);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_adLoadCallback_is_null__No_ad_wa);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          object = (Object *)
                   FUN_?(TypeInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0);
          if (object != (Object *)0x0) {
            bVar11 = iRam_? != 0;
            object[1].klass = this_00;
            if (bVar11) {
              uVar12 = (uint)((ulonglong)(object + 1) >> 0xc);
              lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
              do {
                uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                LOCK();
                bVar11 = uVar14 == *puVar15;
                if (bVar11) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (!bVar11);
            }
            if (object[1].klass == (Object__Class *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_adLoadCallback_is_null__No_ad_wa,(MethodInfo *)0x0)
              ;
              return;
            }
            if (*(int *)&(TypeInfo__GoogleMobileAds__Api__MobileAds->_1).field_0x1c == 0) {
              FUN_?();
            }
            pIVar16 = GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::
                      MobileAds_GetClientFactory((MethodInfo *)0x0);
            if (pIVar16 != (IClientFactory *)0x0) {
              pMVar17 = (MonitorData *)
                        FUN_?(1,TypeInfo__GoogleMobileAds__IClientFactory,pIVar16);
              bVar11 = iRam_? != 0;
              object[1].monitor = pMVar17;
              if (bVar11) {
                uVar12 = (uint)((ulonglong)&object[1].monitor >> 0xc);
                lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
                do {
                  uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                  puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                  LOCK();
                  bVar11 = uVar14 == *puVar15;
                  if (bVar11) {
                    *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar11);
              }
              if (object[1].monitor != (MonitorData *)0x0) {
                FUN_?(0x12,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient);
                pMVar17 = object[1].monitor;
                pUVar18 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar18,object,
                           MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                           ,(MethodInfo *)0x0);
                if (pMVar17 != (MonitorData *)0x0) {
                  FUN_?(0,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pMVar17);
                  pMVar17 = object[1].monitor;
                  pUVar18 = (UnityAction_2_System_Object_System_Object_ *)
                            FUN_?(
                                         TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                                         );
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            (pUVar18,object,
                             MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                             ,(MethodInfo *)0x0);
                  if (pMVar17 != (MonitorData *)0x0) {
                    FUN_?();
                    if (object[1].monitor != (MonitorData *)0x0) {
                      apAStack_4[0] = pAVar9;
                      FUN_?(0x13,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,
                                    object[1].monitor,pSVar1);
                      return;
                    }
                  }
                }
              }
            }
          }
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RewardedAdOnOnAdFullScreenContentOpened() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_RewardedAdOnOnAdFullScreenContentOpened
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_Rewarded);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_Rewarded,(MethodInfo *)0x0);
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    (pMVar1->fields).loadAttempts = 0;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RewardedAdOnOnAdImpressionRecorded() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_RewardedAdOnOnAdImpressionRecorded
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_Rewarded);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral_InternalStateRewardedAd_Rewarded;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,3,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RewardedAdOnOnAdPaid(AdValue) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_RewardedAdOnOnAdPaid
               (MobileAdManager_InternalStateRewardedAd *this,AdValue *adValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_Rewarded);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (adValue != (AdValue *)0x0) {
    aiStackX_10[0] = (adValue->fields)._Value_k__BackingField;
    arg0 = (Object *)FUN_?(uRam_?,aiStackX_10);
    pSVar1 = StringLiteral_InternalStateRewardedAd_Rewarded;
    PStack_2._arg0 = (Object *)0x0;
    PStack_2._arg1 = (Object *)0x0;
    PStack_2._arg2 = (Object *)0x0;
    PStack_2._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_2,arg0,(Object *)(adValue->fields)._CurrencyCode_k__BackingField,
               (MethodInfo *)0x0);
    PStack_3._arg0 = PStack_2._arg0;
    PStack_3._arg1 = PStack_2._arg1;
    PStack_3._arg2 = PStack_2._arg2;
    PStack_3._args = PStack_2._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupCallbacks() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_SetupCallbacks
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdError>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdClicked__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentClosed__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentFailed_GoogleMobileAds__Api__AdError_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentOpened__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdImpressionRecorded__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdPaid_GoogleMobileAds__Api__AdValue_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateRewardedAd_SetupCal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateRewardedAd_SetupCal,(MethodInfo *)0x0);
  pRVar1 = (this->fields).rewardedAd;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,
             MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentOpened__
             ,(MethodInfo *)0x0);
  if (pRVar1 != (RewardedAd *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    ppAVar3 = &(pRVar1->fields).OnAdFullScreenContentOpened;
    pAVar4 = (pRVar1->fields).OnAdFullScreenContentOpened;
    do {
      pAVar5 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar4,(Delegate *)pNVar2,(MethodInfo *)0x0);
      pAVar6 = (Action *)0x0;
      if (pAVar5 != (Action *)0x0) {
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar5;
        }
        if (pAVar6 == (Action *)0x0) {
          FUN_?(pAVar5);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      LOCK();
      pAVar5 = *ppAVar3;
      bVar8 = pAVar4 == pAVar5;
      if (bVar8) {
        *ppAVar3 = pAVar6;
        pAVar5 = pAVar4;
      }
      UNLOCK();
      pAVar6 = pAVar4;
      if (!bVar8) {
        pAVar6 = pAVar5;
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)ppAVar3 >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      bVar8 = pAVar6 != pAVar4;
      pAVar4 = pAVar6;
    } while (bVar8);
    pRVar1 = (this->fields).rewardedAd;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentClosed__
               ,(MethodInfo *)0x0);
    if (pRVar1 != (RewardedAd *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      ppAVar3 = &(pRVar1->fields).OnAdFullScreenContentClosed;
      pAVar4 = (pRVar1->fields).OnAdFullScreenContentClosed;
      do {
        pAVar5 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar4,(Delegate *)pNVar2,(MethodInfo *)0x0);
        pAVar6 = (Action *)0x0;
        if (pAVar5 != (Action *)0x0) {
          if (pAVar5->klass == TypeInfo__System__Action) {
            pAVar6 = pAVar5;
          }
          if (pAVar6 == (Action *)0x0) {
            FUN_?(pAVar5);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        LOCK();
        pAVar5 = *ppAVar3;
        bVar8 = pAVar4 == pAVar5;
        if (bVar8) {
          *ppAVar3 = pAVar6;
          pAVar5 = pAVar4;
        }
        UNLOCK();
        pAVar6 = pAVar4;
        if (!bVar8) {
          pAVar6 = pAVar5;
        }
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)ppAVar3 >> 0xc);
          lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
          do {
            uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
            puVar12 = (ulonglong *)(lVar10 + 0xADDR);
            LOCK();
            bVar8 = uVar11 == *puVar12;
            if (bVar8) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        bVar8 = pAVar6 != pAVar4;
        pAVar4 = pAVar6;
      } while (bVar8);
      pRVar1 = (this->fields).rewardedAd;
      pUVar13 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<GoogleMobileAds::Api::AdError>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (pUVar13,(Object *)this,
                 MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdFullScreenContentFailed_GoogleMobileAds__Api__AdError_
                 ,(MethodInfo *)0x0);
      if (pRVar1 != (RewardedAd *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdError>);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        ppAVar14 = &(pRVar1->fields).OnAdFullScreenContentFailed;
        a = (pRVar1->fields).OnAdFullScreenContentFailed;
        do {
          pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a,(Delegate *)pUVar13,(MethodInfo *)0x0);
          pAVar16 = TypeInfo__System__Action<GoogleMobileAds::Api::AdError>;
          if (pDVar15 == (Delegate *)0x0) {
            pAVar17 = (Action_1_GoogleMobileAds_Api_AdError_ *)0x0;
          }
          else {
            pAVar17 = (Action_1_GoogleMobileAds_Api_AdError_ *)
                      FUN_?(pDVar15,TypeInfo__System__Action<GoogleMobileAds::Api::AdError>)
            ;
            if (pAVar17 == (Action_1_GoogleMobileAds_Api_AdError_ *)0x0) {
              FUN_?(pDVar15,pAVar16);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          LOCK();
          pAVar18 = *ppAVar14;
          bVar8 = a == pAVar18;
          if (bVar8) {
            *ppAVar14 = pAVar17;
            pAVar18 = a;
          }
          UNLOCK();
          pAVar17 = a;
          if (!bVar8) {
            pAVar17 = pAVar18;
          }
          if (iRam_? != 0) {
            uVar9 = (uint)((ulonglong)ppAVar14 >> 0xc);
            lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
            do {
              uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
              puVar12 = (ulonglong *)(lVar10 + 0xADDR);
              LOCK();
              bVar8 = uVar11 == *puVar12;
              if (bVar8) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          bVar8 = pAVar17 != a;
          a = pAVar17;
        } while (bVar8);
        pRVar1 = (this->fields).rewardedAd;
        pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar2,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdClicked__
                   ,(MethodInfo *)0x0);
        if (pRVar1 != (RewardedAd *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Action);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          ppAVar3 = &(pRVar1->fields).OnAdClicked;
          pAVar4 = (pRVar1->fields).OnAdClicked;
          do {
            pAVar5 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar4,(Delegate *)pNVar2,(MethodInfo *)0x0);
            pAVar6 = (Action *)0x0;
            if (pAVar5 != (Action *)0x0) {
              if (pAVar5->klass == TypeInfo__System__Action) {
                pAVar6 = pAVar5;
              }
              if (pAVar6 == (Action *)0x0) {
                FUN_?(pAVar5);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            LOCK();
            pAVar5 = *ppAVar3;
            bVar8 = pAVar4 == pAVar5;
            if (bVar8) {
              *ppAVar3 = pAVar6;
              pAVar5 = pAVar4;
            }
            UNLOCK();
            pAVar6 = pAVar4;
            if (!bVar8) {
              pAVar6 = pAVar5;
            }
            if (iRam_? != 0) {
              uVar9 = (uint)((ulonglong)ppAVar3 >> 0xc);
              lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
              do {
                uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                LOCK();
                bVar8 = uVar11 == *puVar12;
                if (bVar8) {
                  *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                }
                UNLOCK();
              } while (!bVar8);
            }
            bVar8 = pAVar6 != pAVar4;
            pAVar4 = pAVar6;
          } while (bVar8);
          pRVar1 = (this->fields).rewardedAd;
          pUVar13 = (UnityAction_1_System_Object_ *)
                    FUN_?(TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (pUVar13,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdPaid_GoogleMobileAds__Api__AdValue_
                     ,(MethodInfo *)0x0);
          if (pRVar1 != (RewardedAd *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pRVar19 = &pRVar1->fields;
            a_00 = (pRVar1->fields).OnAdPaid;
            do {
              pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)a_00,(Delegate *)pUVar13,(MethodInfo *)0x0);
              pAVar20 = TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>;
              if (pDVar15 == (Delegate *)0x0) {
                pAVar21 = (Action_1_GoogleMobileAds_Api_AdValue_ *)0x0;
              }
              else {
                pAVar21 = (Action_1_GoogleMobileAds_Api_AdValue_ *)
                          FUN_?(pDVar15,
                                        TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>);
                if (pAVar21 == (Action_1_GoogleMobileAds_Api_AdValue_ *)0x0) {
                  FUN_?(pDVar15,pAVar20);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              LOCK();
              pAVar22 = pRVar19->OnAdPaid;
              bVar8 = a_00 == pAVar22;
              if (bVar8) {
                pRVar19->OnAdPaid = pAVar21;
                pAVar22 = a_00;
              }
              UNLOCK();
              pAVar21 = a_00;
              if (!bVar8) {
                pAVar21 = pAVar22;
              }
              if (iRam_? != 0) {
                uVar9 = (uint)((ulonglong)pRVar19 >> 0xc);
                lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
                do {
                  uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                  puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                  LOCK();
                  bVar8 = uVar11 == *puVar12;
                  if (bVar8) {
                    *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar8);
              }
              bVar8 = pAVar21 != a_00;
              a_00 = pAVar21;
            } while (bVar8);
            pRVar1 = (this->fields).rewardedAd;
            pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar2,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__RewardedAdOnOnAdImpressionRecorded__
                       ,(MethodInfo *)0x0);
            if (pRVar1 != (RewardedAd *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Action);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pAVar4 = (pRVar1->fields).OnAdImpressionRecorded;
              do {
                pAVar5 = (Action *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar4,(Delegate *)pNVar2,(MethodInfo *)0x0);
                pAVar6 = (Action *)0x0;
                if (pAVar5 != (Action *)0x0) {
                  if (pAVar5->klass == TypeInfo__System__Action) {
                    pAVar6 = pAVar5;
                  }
                  if (pAVar6 == (Action *)0x0) {
                    FUN_?(pAVar5);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                ppAVar3 = &(pRVar1->fields).OnAdImpressionRecorded;
                LOCK();
                pAVar5 = *ppAVar3;
                bVar8 = pAVar4 == pAVar5;
                if (bVar8) {
                  *ppAVar3 = pAVar6;
                  pAVar5 = pAVar4;
                }
                UNLOCK();
                pAVar6 = pAVar4;
                if (!bVar8) {
                  pAVar6 = pAVar5;
                }
                if (iRam_? != 0) {
                  uVar9 = (uint)((ulonglong)&(pRVar1->fields).OnAdImpressionRecorded >> 0xc);
                  lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                    puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                    LOCK();
                    bVar8 = uVar11 == *puVar12;
                    if (bVar8) {
                      *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar8);
                }
                bVar8 = pAVar6 == pAVar4;
                pAVar4 = pAVar6;
                if (bVar8) {
                  return;
                }
              } while( true );
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_ToString
                   (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_rewardedAdCreated__0_u000A_isHandlin);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).rewardedAd;
  bVar2 = false;
  if (pRVar1 != (RewardedAd *)0x0) {
    if ((pRVar1->fields)._client == (IRewardedAdClient *)0x0) {
      bVar3 = 0;
    }
    else {
      bVar3 = (pRVar1->fields)._canShowAd;
    }
    bVar2 = bVar3 != 0;
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,4);
  abStackX_8[0] = pRVar1 != (RewardedAd *)0x0;
  lVar4 = FUN_?(uRam_?,abStackX_8);
  if (args != (Object__Array *)0x0) {
    if (lVar4 != 0) {
      lVar5 = FUN_?(lVar4,(args->klass->_0).element_class);
      if (lVar5 == 0) {
        uVar6 = FUN_?();
        FUN_?(uVar6,0);
        pcVar7 = (code *)swi(3);
        pSVar8 = (String *)(*pcVar7)();
        return pSVar8;
      }
    }
    FUN_?(args,0,lVar4);
    abStackX_8[0] = (this->fields).isHandlingRequest;
    lVar4 = FUN_?(uRam_?,abStackX_8);
    if (lVar4 != 0) {
      lVar5 = FUN_?(lVar4,(args->klass->_0).element_class);
      if (lVar5 == 0) {
        uVar6 = FUN_?();
        FUN_?(uVar6,0);
        pcVar7 = (code *)swi(3);
        pSVar8 = (String *)(*pcVar7)();
        return pSVar8;
      }
    }
    FUN_?(args,1,lVar4);
    pMVar9 = (this->fields).adLoadState;
    if (pMVar9 != (MobileAdManager_AdLoadState *)0x0) {
      lVar4 = FUN_?(pMVar9,(args->klass->_0).element_class);
      if (lVar4 == 0) {
        uVar6 = FUN_?();
        FUN_?(uVar6,0);
        pcVar7 = (code *)swi(3);
        pSVar8 = (String *)(*pcVar7)();
        return pSVar8;
      }
    }
    FUN_?(args,2,pMVar9);
    abStackX_8[0] = bVar2;
    lVar4 = FUN_?(uRam_?,abStackX_8);
    if (lVar4 != 0) {
      lVar4 = FUN_?(lVar4,(args->klass->_0).element_class);
      if (lVar4 == 0) {
        uVar6 = FUN_?();
        FUN_?(uVar6,0);
        pcVar7 = (code *)swi(3);
        pSVar8 = (String *)(*pcVar7)();
        return pSVar8;
      }
    }
    FUN_?(args,3);
    pSVar8 = StringLiteral_rewardedAdCreated__0_u000A_isHandlin;
    PStack_10._arg0 = (Object *)0x0;
    PStack_10._arg1 = (Object *)0x0;
    PStack_10._arg2 = (Object *)0x0;
    PStack_10._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_10,args,(MethodInfo *)0x0);
    PStack_11._arg0 = PStack_10._arg0;
    PStack_11._arg1 = PStack_10._arg1;
    PStack_11._arg2 = PStack_10._arg2;
    PStack_11._args = PStack_10._args;
    pSVar8 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar8,&PStack_11,(MethodInfo *)0x0);
    return pSVar8;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar7)();
  return pSVar8;
}


/* Void UserRewardEarnedCallback(Reward) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::
     MobileAdManager_InternalStateRewardedAd_UserRewardEarnedCallback
               (MobileAdManager_InternalStateRewardedAd *this,Reward *reward,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__amount_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (reward != (Reward *)0x0) {
    value = (reward->fields).Amount;
    pSVar1 = (reward->fields).Type;
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    str3 = mscorlib.dll::System::Number::Number_FormatDouble
                     (value,(String *)0x0,info,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_6
                       (StringLiteral_InternalStateRewardedAd_UserRewa,pSVar1,StringLiteral__amount_
                        ,str3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
    (this->fields).rewardAdResult = 3;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MobileAdManager+InternalStateRewardedAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd__ctor
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__AdLoadState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__DateTime);
  }
  (this->fields).prevInterstitialTime._dateData =
       (TypeInfo__System__DateTime->static_fields->MinValue)._dateData;
  pMVar1 = (MobileAdManager_AdLoadState *)
           FUN_?(
                        TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__AdLoadState
                        );
  bVar2 = iRam_? != 0;
  (this->fields).adLoadState = pMVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).adLoadState >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  (this->fields).rewardAdResult = 4;
  return;
}


/* Boolean get_IsOk() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateRewardedAd::MobileAdManager_InternalStateRewardedAd_get_IsOk
               (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    return (byte)((uint)(pMVar1->fields).loadAttempts >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* TimeSpan get_TimeSinceLastRewarded() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalStateRewardedAd::
         MobileAdManager_InternalStateRewardedAd_get_TimeSinceLastRewarded
                   (MobileAdManager_InternalStateRewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  DVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  uVar2 = (this->fields).prevInterstitialTime._dateData;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime,uVar2,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  return (TimeSpan)((DVar1._dateData & 0x3fffffffffffffff) - (uVar2 & 0x3fffffffffffffff));
}

