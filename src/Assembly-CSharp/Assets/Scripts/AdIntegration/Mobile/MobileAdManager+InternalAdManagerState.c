
/* Void Destroy() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::MobileAdManager_InternalAdManagerState_Destroy
               (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalAdManagerState_Destroy);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalAdManagerState_Destroy,(MethodInfo *)0x0);
  this_00 = (this->fields).internalStateRewardedAds;
  if (this_00 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
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
    (this_00->fields).rewardedAdCallback =
         (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this_00->fields).rewardedAdCallback >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    MobileAdManager+InternalStateRewardedAd::
    MobileAdManager_InternalStateRewardedAd_DestroyRewardedAd(this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).internalStateInterstitial;
    if (this_01 != (MobileAdManager_InternalStateInterstitial *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_InternalStateInterstitial_Destro);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_InternalStateInterstitial_Destro,(MethodInfo *)0x0);
      MobileAdManager+InternalStateInterstitial::
      MobileAdManager_InternalStateInterstitial_DestroyInterstitial(this_01,(MethodInfo *)0x0);
      bVar1 = iRam_? != 0;
      (this_01->fields).interstitialAdCallback =
           (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(this_01->fields).interstitialAdCallback >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::MobileAdManager_InternalAdManagerState_Initialize
               (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalAdManagerState_Initializ);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalAdManagerState_Initializ,(MethodInfo *)0x0);
  this_00 = (this->fields).internalStateRewardedAds;
  if (this_00 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    MobileAdManager+InternalStateRewardedAd::
    MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd(this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).internalStateInterstitial;
    if (this_01 != (MobileAdManager_InternalStateInterstitial *)0x0) {
      MobileAdManager+InternalStateInterstitial::
      MobileAdManager_InternalStateInterstitial_CreateAndLoadInterstitialAd
                (this_01,(MethodInfo *)0x0);
      (this->fields).isReady = 1;
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RequestInterstitial(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult]) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::
     MobileAdManager_InternalAdManagerState_RequestInterstitial
               (MobileAdManager_InternalAdManagerState *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *interstitialCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Interstitial_ad_request_is_not_r);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalAdManagerState_RequestIn);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isReady == 0) {
code_?:
    bVar1 = 0;
  }
  else {
    pMVar2 = (this->fields).internalStateRewardedAds;
    if (pMVar2 == (MobileAdManager_InternalStateRewardedAd *)0x0) goto code_?;
    if ((pMVar2->fields).isHandlingRequest != 0) goto code_?;
    pMVar3 = (this->fields).internalStateInterstitial;
    if (pMVar3 == (MobileAdManager_InternalStateInterstitial *)0x0) goto code_?;
    if ((pMVar3->fields).isHandlingRequest != 0) goto code_?;
    pMVar4 = (pMVar3->fields).adLoadState;
    if (pMVar4 == (MobileAdManager_AdLoadState *)0x0) goto code_?;
    bVar1 = (byte)((uint)(pMVar4->fields).loadAttempts >> 0x1f) ^ 1;
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
  pSVar5 = StringLiteral_False;
  if (bVar1 != 0) {
    pSVar5 = StringLiteral_True;
  }
  pSVar5 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_InternalAdManagerState_RequestIn,pSVar5,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar5,(MethodInfo *)0x0);
  if ((this->fields).isReady != 0) {
    pMVar2 = (this->fields).internalStateRewardedAds;
    if (pMVar2 == (MobileAdManager_InternalStateRewardedAd *)0x0) goto code_?;
    if ((pMVar2->fields).isHandlingRequest == 0) {
      pMVar3 = (this->fields).internalStateInterstitial;
      if (pMVar3 == (MobileAdManager_InternalStateInterstitial *)0x0) goto code_?;
      if ((pMVar3->fields).isHandlingRequest == 0) {
        pMVar4 = (pMVar3->fields).adLoadState;
        if (pMVar4 == (MobileAdManager_AdLoadState *)0x0) goto code_?;
        if (-1 < (pMVar4->fields).loadAttempts) {
          pMVar3 = (this->fields).internalStateInterstitial;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_InternalStateInterstitial_Reques);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_InternalStateInterstitial_Reques);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_InternalStateInterstitial_Reques,(MethodInfo *)0x0);
          bVar6 = iRam_? != 0;
          (pMVar3->fields).interstitialAdCallback = interstitialCallback;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)&(pMVar3->fields).interstitialAdCallback >> 0xc);
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
          (pMVar3->fields).isHandlingRequest = 1;
          if ((((pMVar3->fields).interstitial == (InterstitialAd *)0x0) ||
              (pIVar11 = (pMVar3->fields).interstitial,
              (pIVar11->fields)._client == (IInterstitialClient *)0x0)) ||
             ((pIVar11->fields)._canShowAd == 0)) {
            pMVar4 = (pMVar3->fields).adLoadState;
            if (pMVar4 != (MobileAdManager_AdLoadState *)0x0) {
              if ((pMVar4->fields).loadingAd != 0) {
                return;
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Debug);
                LOCK();
                UNLOCK();
                FUN_?(&StringLiteral_InternalStateInterstitial_Create);
                LOCK();
                UNLOCK();
                FUN_?(&StringLiteral_Ad_InterstitialLoad);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_InternalStateInterstitial_Create,(MethodInfo *)0x0)
              ;
              MobileAdManager::MobileAdManager_SendStat
                        (StringLiteral_Ad_InterstitialLoad,(MethodInfo *)0x0);
              MobileAdManager+InternalStateInterstitial::
              MobileAdManager_InternalStateInterstitial_DestroyInterstitial
                        (pMVar3,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&
                              TypeInfo__System__Action<GoogleMobileAds::Api::InterstitialAd,_GoogleMobileAds::Api::LoadAdError>
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__UnityEngine__Debug);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__ADLoadCallback_GoogleMobileAds__Api__InterstitialAd__GoogleMobileAds__Api__LoadAdError_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&StringLiteral_InternalStateInterstitial_LoadIn);
                LOCK();
                UNLOCK();
                FUN_?(&StringLiteral_InternalStateInterstitial_LoadIn);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar4 = (pMVar3->fields).adLoadState;
              if (pMVar4 != (MobileAdManager_AdLoadState *)0x0) {
                if ((pMVar4->fields).loadingAd != 0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pSVar5 = StringLiteral_InternalStateInterstitial_LoadIn;
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
                  pIVar12 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
                  if (pIVar12 != (ILogger_1 *)0x0) {
                    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar12,0,pSVar5);
                    return;
                  }
                  FUN_?();
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)StringLiteral_InternalStateInterstitial_LoadIn,
                           (MethodInfo *)0x0);
                pMVar4 = (pMVar3->fields).adLoadState;
                if (pMVar4 != (MobileAdManager_AdLoadState *)0x0) {
                  (pMVar4->fields).loadingAd = 1;
                  pAVar14 = MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
                  pAVar15 = MobileAdManagerCredentials::
                            MobileAdManagerCredentials_GetAdMobCredentials((MethodInfo *)0x0);
                  if (pAVar15 != (AdMobCredentials *)0x0) {
                    pSVar5 = (pAVar15->fields).InterstitialAdUnitId;
                    pUVar16 = (UnityAction_2_System_Object_System_Object_ *)
                              FUN_?(
                                           TypeInfo__System__Action<GoogleMobileAds::Api::InterstitialAd,_GoogleMobileAds::Api::LoadAdError>
                                           );
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                              (pUVar16,(Object *)pMVar3,
                               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__ADLoadCallback_GoogleMobileAds__Api__InterstitialAd__GoogleMobileAds__Api__LoadAdError_
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
                      FUN_?(&TypeInfo__GoogleMobileAds__Common__IInterstitialClient);
                      LOCK();
                      UNLOCK();
                      FUN_?(&TypeInfo__GoogleMobileAds__Api__MobileAds);
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    TypeInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&StringLiteral_adLoadCallback_is_null__No_ad_wa);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    object = (Object *)
                             FUN_?(
                                          TypeInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0
                                          );
                    if (object != (Object *)0x0) {
                      bVar6 = iRam_? != 0;
                      object[1].monitor = (MonitorData *)pUVar16;
                      if (bVar6) {
                        uVar7 = (uint)((ulonglong)&object[1].monitor >> 0xc);
                        lVar17 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar10 = *(ulonglong *)(lVar17 + 0xADDR);
                          puVar8 = (ulonglong *)(lVar17 + 0xADDR);
                          LOCK();
                          bVar6 = uVar10 == *puVar8;
                          if (bVar6) {
                            *puVar8 = uVar10 | 1L << (uVar7 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar6);
                      }
                      if (object[1].monitor == (MonitorData *)0x0) {
                        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                  ((Object *)StringLiteral_adLoadCallback_is_null__No_ad_wa,
                                   (MethodInfo *)0x0);
                        return;
                      }
                      if (*(int *)&(TypeInfo__GoogleMobileAds__Api__MobileAds->_1).field_0x1c == 0)
                      {
                        FUN_?();
                      }
                      pIVar18 = GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::
                                MobileAds_GetClientFactory((MethodInfo *)0x0);
                      if (pIVar18 != (IClientFactory *)0x0) {
                        pOVar19 = (Object__Class *)
                                  FUN_?(0,TypeInfo__GoogleMobileAds__IClientFactory,pIVar18)
                        ;
                        bVar6 = iRam_? != 0;
                        object[1].klass = pOVar19;
                        if (bVar6) {
                          uVar7 = (uint)((ulonglong)(object + 1) >> 0xc);
                          lVar17 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar10 = *(ulonglong *)(lVar17 + 0xADDR);
                            puVar8 = (ulonglong *)(lVar17 + 0xADDR);
                            LOCK();
                            bVar6 = uVar10 == *puVar8;
                            if (bVar6) {
                              *puVar8 = uVar10 | 1L << (uVar7 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar6);
                        }
                        if (object[1].klass != (Object__Class *)0x0) {
                          FUN_?(0x10,TypeInfo__GoogleMobileAds__Common__IInterstitialClient)
                          ;
                          pOVar19 = object[1].klass;
                          pUVar16 = (UnityAction_2_System_Object_System_Object_ *)
                                    FUN_?(TypeInfo__System__EventHandler<System::EventArgs>)
                          ;
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                          Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                    (pUVar16,object,
                                     MethodInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                                     ,(MethodInfo *)0x0);
                          if (pOVar19 != (Object__Class *)0x0) {
                            FUN_?(0,TypeInfo__GoogleMobileAds__Common__IInterstitialClient,
                                          pOVar19);
                            pOVar19 = object[1].klass;
                            pUVar16 = (UnityAction_2_System_Object_System_Object_ *)
                                      FUN_?(
                                                  TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                                                  );
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                            Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                      (pUVar16,object,
                                       MethodInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                                       ,(MethodInfo *)0x0);
                            if (pOVar19 != (Object__Class *)0x0) {
                              FUN_?();
                              if (object[1].klass != (Object__Class *)0x0) {
                                FUN_?(0x11,
                                              TypeInfo__GoogleMobileAds__Common__IInterstitialClient
                                              ,object[1].klass,pSVar5,pAVar14);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                    FUN_?();
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                }
              }
              FUN_?();
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          else {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_InternalStateInterstitial_Reques,(MethodInfo *)0x0);
            pIVar11 = (pMVar3->fields).interstitial;
            if (pIVar11 != (InterstitialAd *)0x0) {
              GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::InterstitialAd_Show
                        (pIVar11,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_Interstitial_ad_request_is_not_r,(MethodInfo *)0x0);
  if (interstitialCallback != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(interstitialCallback->fields)._._.invoke_impl)
              ((interstitialCallback->fields)._._.method_code,0,
               (interstitialCallback->fields)._._.method);
    return;
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void RequestRewardedAd(Action`1[Assets.Scripts.AdIntegration.RewardedAdResult]) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::
     MobileAdManager_InternalAdManagerState_RequestRewardedAd
               (MobileAdManager_InternalAdManagerState *this,
               Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *rewardedAdCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Rewarded_ad_request_is_not_ready);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalAdManagerState_RequestRe);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isReady == 0) {
code_?:
    bVar1 = 0;
  }
  else {
    pMVar2 = (this->fields).internalStateRewardedAds;
    if (pMVar2 == (MobileAdManager_InternalStateRewardedAd *)0x0) goto code_?;
    if ((pMVar2->fields).isHandlingRequest != 0) goto code_?;
    pMVar3 = (this->fields).internalStateInterstitial;
    if (pMVar3 == (MobileAdManager_InternalStateInterstitial *)0x0) goto code_?;
    if ((pMVar3->fields).isHandlingRequest != 0) goto code_?;
    pMVar4 = (((this->fields).internalStateRewardedAds)->fields).adLoadState;
    if (pMVar4 == (MobileAdManager_AdLoadState *)0x0) goto code_?;
    bVar1 = (byte)((uint)(pMVar4->fields).loadAttempts >> 0x1f) ^ 1;
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
  pSVar5 = StringLiteral_False;
  if (bVar1 != 0) {
    pSVar5 = StringLiteral_True;
  }
  pSVar5 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_InternalAdManagerState_RequestRe,pSVar5,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar5,(MethodInfo *)0x0);
  if ((this->fields).isReady != 0) {
    pMVar2 = (this->fields).internalStateRewardedAds;
    if (pMVar2 == (MobileAdManager_InternalStateRewardedAd *)0x0) goto code_?;
    if ((pMVar2->fields).isHandlingRequest == 0) {
      pMVar3 = (this->fields).internalStateInterstitial;
      if (pMVar3 == (MobileAdManager_InternalStateInterstitial *)0x0) goto code_?;
      if ((pMVar3->fields).isHandlingRequest == 0) {
        pMVar4 = (((this->fields).internalStateRewardedAds)->fields).adLoadState;
        if (pMVar4 == (MobileAdManager_AdLoadState *)0x0) goto code_?;
        if (-1 < (pMVar4->fields).loadAttempts) {
          pMVar2 = (this->fields).internalStateRewardedAds;
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
          bVar6 = iRam_? != 0;
          (pMVar2->fields).rewardedAdCallback = rewardedAdCallback;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)&(pMVar2->fields).rewardedAdCallback >> 0xc);
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
          (pMVar2->fields).isHandlingRequest = 1;
          if ((((pMVar2->fields).rewardedAd == (RewardedAd *)0x0) ||
              (this_00 = (pMVar2->fields).rewardedAd,
              (this_00->fields)._client == (IRewardedAdClient *)0x0)) ||
             ((this_00->fields)._canShowAd == 0)) {
            pMVar4 = (pMVar2->fields).adLoadState;
            if (pMVar4 != (MobileAdManager_AdLoadState *)0x0) {
              if ((pMVar4->fields).loadingAd != 0) {
                return;
              }
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
                        ((Object *)StringLiteral_InternalStateRewardedAd_CreateAn,(MethodInfo *)0x0)
              ;
              MobileAdManager::MobileAdManager_SendStat
                        (StringLiteral_Ad_RewardedLoad,(MethodInfo *)0x0);
              MobileAdManager+InternalStateRewardedAd::
              MobileAdManager_InternalStateRewardedAd_DestroyRewardedAd(pMVar2,(MethodInfo *)0x0);
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
              pMVar4 = (pMVar2->fields).adLoadState;
              if (pMVar4 != (MobileAdManager_AdLoadState *)0x0) {
                if ((pMVar4->fields).loadingAd != 0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pSVar5 = StringLiteral_InternalStateRewardedAd_LoadRewa;
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
                  pIVar11 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
                  if (pIVar11 != (ILogger_1 *)0x0) {
                    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar11,0,pSVar5);
                    return;
                  }
                  FUN_?();
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)StringLiteral_InternalStateRewardedAd_LoadRewa,
                           (MethodInfo *)0x0);
                pMVar4 = (pMVar2->fields).adLoadState;
                if (pMVar4 != (MobileAdManager_AdLoadState *)0x0) {
                  (pMVar4->fields).loadingAd = 1;
                  pAVar13 = MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
                  pAVar14 = MobileAdManagerCredentials::
                            MobileAdManagerCredentials_GetAdMobCredentials((MethodInfo *)0x0);
                  if (pAVar14 != (AdMobCredentials *)0x0) {
                    pSVar5 = (pAVar14->fields).RewardedAdUnitId;
                    this_01 = (Object__Class *)
                              FUN_?(
                                           TypeInfo__System__Action<GoogleMobileAds::Api::RewardedAd,_GoogleMobileAds::Api::LoadAdError>
                                           );
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                              ((UnityAction_2_System_Object_System_Object_ *)this_01,
                               (Object *)pMVar2,
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
                      FUN_?(&
                                    TypeInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&StringLiteral_adLoadCallback_is_null__No_ad_wa);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    object = (Object *)
                             FUN_?(
                                          TypeInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0
                                          );
                    if (object != (Object *)0x0) {
                      bVar6 = iRam_? != 0;
                      object[1].klass = this_01;
                      if (bVar6) {
                        uVar7 = (uint)((ulonglong)(object + 1) >> 0xc);
                        lVar15 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar10 = *(ulonglong *)(lVar15 + 0xADDR);
                          puVar8 = (ulonglong *)(lVar15 + 0xADDR);
                          LOCK();
                          bVar6 = uVar10 == *puVar8;
                          if (bVar6) {
                            *puVar8 = uVar10 | 1L << (uVar7 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar6);
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
                      if (*(int *)&(TypeInfo__GoogleMobileAds__Api__MobileAds->_1).field_0x1c == 0)
                      {
                        FUN_?();
                      }
                      pIVar16 = GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::
                                MobileAds_GetClientFactory((MethodInfo *)0x0);
                      if (pIVar16 != (IClientFactory *)0x0) {
                        pMVar17 = (MonitorData *)
                                  FUN_?(1,TypeInfo__GoogleMobileAds__IClientFactory,pIVar16)
                        ;
                        bVar6 = iRam_? != 0;
                        object[1].monitor = pMVar17;
                        if (bVar6) {
                          uVar7 = (uint)((ulonglong)&object[1].monitor >> 0xc);
                          lVar15 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar10 = *(ulonglong *)(lVar15 + 0xADDR);
                            puVar8 = (ulonglong *)(lVar15 + 0xADDR);
                            LOCK();
                            bVar6 = uVar10 == *puVar8;
                            if (bVar6) {
                              *puVar8 = uVar10 | 1L << (uVar7 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar6);
                        }
                        if (object[1].monitor != (MonitorData *)0x0) {
                          FUN_?(0x12,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient);
                          pMVar17 = object[1].monitor;
                          pUVar18 = (UnityAction_2_System_Object_System_Object_ *)
                                    FUN_?(TypeInfo__System__EventHandler<System::EventArgs>)
                          ;
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                          Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                    (pUVar18,object,
                                     MethodInfo__GoogleMobileAds__Api__RewardedAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                                     ,(MethodInfo *)0x0);
                          if (pMVar17 != (MonitorData *)0x0) {
                            FUN_?(0,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,
                                          pMVar17);
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
                                FUN_?(0x13,
                                              TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,
                                              object[1].monitor,pSVar5,pAVar13);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                    FUN_?();
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                }
              }
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
          else {
            this_02 = (UnityAction_1_System_Object_ *)
                      FUN_?(TypeInfo__System__Action<GoogleMobileAds::Api::Reward>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (this_02,(Object *)pMVar2,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd__UserRewardEarnedCallback_GoogleMobileAds__Api__Reward_
                       ,(MethodInfo *)0x0);
            if (this_00 != (RewardedAd *)0x0) {
              GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_Show
                        (this_00,(Action_1_GoogleMobileAds_Api_Reward_ *)this_02,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_Rewarded_ad_request_is_not_ready,(MethodInfo *)0x0);
  if (rewardedAdCallback != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(rewardedAdCallback->fields)._._.invoke_impl)
              ((rewardedAdCallback->fields)._._.method_code,0,
               (rewardedAdCallback->fields)._._.method);
    return;
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalAdManagerState::MobileAdManager_InternalAdManagerState_ToString
                   (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_isReady__0_u000A_internalStateInters);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  abStackX_8[0] = (this->fields).isReady;
  arg0 = (Object *)FUN_?(uRam_?,abStackX_8);
  pSVar1 = StringLiteral_isReady__0_u000A_internalStateInters;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
            (&PStack_2,arg0,(Object *)(this->fields).internalStateInterstitial,
             (Object *)(this->fields).internalStateRewardedAds,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* MobileAdManager+InternalAdManagerState() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::MobileAdManager_InternalAdManagerState__ctor
               (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalAdManagerState_construct);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalAdManagerState_construct,(MethodInfo *)0x0);
  pMVar1 = (MobileAdManager_InternalStateRewardedAd *)
           FUN_?(
                        TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateRewardedAd
                        );
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
  (pMVar1->fields).prevInterstitialTime._dateData =
       (TypeInfo__System__DateTime->static_fields->MinValue)._dateData;
  pMVar2 = (MobileAdManager_AdLoadState *)
           FUN_?(
                        TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__AdLoadState
                        );
  (pMVar1->fields).adLoadState = pMVar2;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&(pMVar1->fields).adLoadState >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  iVar8 = iRam_?;
  (pMVar1->fields).rewardAdResult = 4;
  (this->fields).internalStateRewardedAds = pMVar1;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).internalStateRewardedAds >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pMVar9 = (MobileAdManager_InternalStateInterstitial *)
           FUN_?(
                        TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial
                        );
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
  (pMVar9->fields).prevInterstitialTime._dateData =
       (TypeInfo__System__DateTime->static_fields->MinValue)._dateData;
  pMVar2 = (MobileAdManager_AdLoadState *)
           FUN_?(
                        TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__AdLoadState
                        );
  (pMVar9->fields).adLoadState = pMVar2;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&(pMVar9->fields).adLoadState >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  iVar8 = iRam_?;
  (pMVar9->fields).interstitialAdResult = 3;
  (this->fields).internalStateInterstitial = pMVar9;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).internalStateInterstitial >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return;
}


/* Boolean get_IsHandlingRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::
     MobileAdManager_InternalAdManagerState_get_IsHandlingRequest
               (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  pMVar1 = (this->fields).internalStateRewardedAds;
  if (pMVar1 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    if ((pMVar1->fields).isHandlingRequest != 0) {
      return 1;
    }
    pMVar2 = (this->fields).internalStateInterstitial;
    if (pMVar2 != (MobileAdManager_InternalStateInterstitial *)0x0) {
      return (pMVar2->fields).isHandlingRequest;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean get_ReadyForInterstitialAdRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::
     MobileAdManager_InternalAdManagerState_get_ReadyForInterstitialAdRequest
               (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  if ((this->fields).isReady == 0) {
    return 0;
  }
  pMVar1 = (this->fields).internalStateRewardedAds;
  if (pMVar1 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    if ((pMVar1->fields).isHandlingRequest != 0) {
      return 0;
    }
    pMVar2 = (this->fields).internalStateInterstitial;
    if (pMVar2 != (MobileAdManager_InternalStateInterstitial *)0x0) {
      if ((pMVar2->fields).isHandlingRequest != 0) {
        return 0;
      }
      pMVar3 = (pMVar2->fields).adLoadState;
      if (pMVar3 != (MobileAdManager_AdLoadState *)0x0) {
        return (byte)((uint)(pMVar3->fields).loadAttempts >> 0x1f) ^ 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean get_ReadyForRewardedAdRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalAdManagerState::
     MobileAdManager_InternalAdManagerState_get_ReadyForRewardedAdRequest
               (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  if ((this->fields).isReady == 0) {
    return 0;
  }
  pMVar1 = (this->fields).internalStateRewardedAds;
  if (pMVar1 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    if ((pMVar1->fields).isHandlingRequest != 0) {
      return 0;
    }
    pMVar2 = (this->fields).internalStateInterstitial;
    if (pMVar2 != (MobileAdManager_InternalStateInterstitial *)0x0) {
      if ((pMVar2->fields).isHandlingRequest != 0) {
        return 0;
      }
      pMVar3 = (((this->fields).internalStateRewardedAds)->fields).adLoadState;
      if (pMVar3 != (MobileAdManager_AdLoadState *)0x0) {
        return (byte)((uint)(pMVar3->fields).loadAttempts >> 0x1f) ^ 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* TimeSpan get_TimeSinceLastAd() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalAdManagerState::
         MobileAdManager_InternalAdManagerState_get_TimeSinceLastAd
                   (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TVar1 = MobileAdManager_InternalAdManagerState_get_TimeSinceLastInterstitial
                    (this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  TVar2 = MobileAdManager_InternalAdManagerState_get_TimeSinceLastRewarded(this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TVar1._ticks <= TVar2._ticks) {
    TVar2 = TVar1;
  }
  return (TimeSpan)TVar2._ticks;
}


/* TimeSpan get_TimeSinceLastInterstitial() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalAdManagerState::
         MobileAdManager_InternalAdManagerState_get_TimeSinceLastInterstitial
                   (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  pMVar1 = (this->fields).internalStateInterstitial;
  if (pMVar1 != (MobileAdManager_InternalStateInterstitial *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    DVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
    uVar3 = (pMVar1->fields).prevInterstitialTime._dateData;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime,uVar3,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    return (TimeSpan)((DVar2._dateData & 0x3fffffffffffffff) - (uVar3 & 0x3fffffffffffffff));
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  TVar5._ticks = (*pcVar4)();
  return (TimeSpan)TVar5._ticks;
}


/* TimeSpan get_TimeSinceLastRewarded() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalAdManagerState::
         MobileAdManager_InternalAdManagerState_get_TimeSinceLastRewarded
                   (MobileAdManager_InternalAdManagerState *this,MethodInfo *method)

{
  pMVar1 = (this->fields).internalStateRewardedAds;
  if (pMVar1 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    DVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
    uVar3 = (pMVar1->fields).prevInterstitialTime._dateData;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime,uVar3,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    return (TimeSpan)((DVar2._dateData & 0x3fffffffffffffff) - (uVar3 & 0x3fffffffffffffff));
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  TVar5._ticks = (*pcVar4)();
  return (TimeSpan)TVar5._ticks;
}

