
/* Void ADLoadCallback(InterstitialAd, LoadAdError) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_ADLoadCallback
               (MobileAdManager_InternalStateInterstitial *this,InterstitialAd *ad,
               LoadAdError *error,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateInterstitial_ADLoad);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateInterstitial_ADLoad);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_InternalStateInterstitial_ADLoad;
  if (error == (LoadAdError *)0x0) {
    if (ad != (InterstitialAd *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GoogleMobileAds__Common__IInterstitialClient);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__GoogleMobileAds__Api__ResponseInfo);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((ad->fields)._client == (IInterstitialClient *)0x0) {
        pSVar2 = (String *)0x0;
        pSVar1 = StringLiteral_InternalStateInterstitial_ADLoad;
      }
      else {
        lVar3 = FUN_?(0x13,TypeInfo__GoogleMobileAds__Common__IInterstitialClient);
        plVar4 = (longlong *)FUN_?(TypeInfo__GoogleMobileAds__Api__ResponseInfo);
        bVar5 = iRam_? != 0;
        plVar4[2] = lVar3;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)(plVar4 + 2) >> 0xc);
          lVar3 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar8 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar5 = uVar7 == *puVar8;
            if (bVar5) {
              *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        pSVar1 = StringLiteral_InternalStateInterstitial_ADLoad;
        pSVar2 = (String *)
                  (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar2,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar1,(MethodInfo *)0x0);
      bVar5 = iRam_? != 0;
      (this->fields).interstitial = ad;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).interstitial >> 0xc);
        lVar3 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar8 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar5 = uVar7 == *puVar8;
          if (bVar5) {
            *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      MobileAdManager_InternalStateInterstitial_SetupCallbacks(this,(MethodInfo *)0x0);
      pMVar9 = (this->fields).adLoadState;
      if (pMVar9 != (MobileAdManager_AdLoadState *)0x0) {
        (pMVar9->fields).loadingAd = 0;
        if ((this->fields).isHandlingRequest != 0) {
          this_00 = (this->fields).interstitial;
          if (this_00 == (InterstitialAd *)0x0) goto code_?;
          GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::InterstitialAd_Show
                    (this_00,(MethodInfo *)0x0);
        }
        return;
      }
      goto code_?;
    }
    pSVar2 = (String *)0x0;
  }
  else {
    pSVar2 = (String *)
              (*(error->klass->vtable).ToString.methodPtr)
                        (error,(error->klass->vtable).ToString.method);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar2,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)pSVar1,(MethodInfo *)0x0);
  pMVar9 = (this->fields).adLoadState;
  if (pMVar9 != (MobileAdManager_AdLoadState *)0x0) {
    bVar5 = cRam_? == '\0';
    (pMVar9->fields).loadingAd = 0;
    if (bVar5) {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_InternalStateInterstitial_Handle);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_InternalStateInterstitial_Handle);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar9 = (this->fields).adLoadState;
    if (pMVar9 != (MobileAdManager_AdLoadState *)0x0) {
      bVar10 = MobileAdManager+AdLoadState::MobileAdManager_AdLoadState_Reload
                        (pMVar9,(MethodInfo *)0x0);
      if (bVar10 == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_InternalStateInterstitial_Handle,(MethodInfo *)0x0);
        (this->fields).interstitialAdResult = 1;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__DateTime);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_InternalStateInterstitial_Finish);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_InternalStateInterstitial_Finish);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((this->fields).interstitialAdCallback ==
            (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_InternalStateInterstitial_Finish,(MethodInfo *)0x0);
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_InternalStateInterstitial_Finish,(MethodInfo *)0x0);
          apAStack_11[0] = (AdRequest *)&stack0x00000008;
          pAVar12 = (this->fields).interstitialAdCallback;
          iVar13 = (this->fields).interstitialAdResult;
          if (pAVar12 == (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
            FUN_?(0,iVar13);
            FUN_?();
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          (*(pAVar12->fields)._._.invoke_impl)
                    ((pAVar12->fields)._._.method_code,iVar13,(pAVar12->fields)._._.method);
          FUN_?(apAStack_11);
        }
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_InternalStateInterstitial_Handle,(MethodInfo *)0x0);
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
      pMVar9 = (this->fields).adLoadState;
      if (pMVar9 != (MobileAdManager_AdLoadState *)0x0) {
        if ((pMVar9->fields).loadingAd != 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar1 = StringLiteral_InternalStateInterstitial_LoadIn;
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
          pIVar15 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
          if (pIVar15 != (ILogger_1 *)0x0) {
            apAStack_11[0] = (AdRequest *)pSVar1;
            FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar15,0);
            return;
          }
          FUN_?();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_InternalStateInterstitial_LoadIn,(MethodInfo *)0x0);
        pMVar9 = (this->fields).adLoadState;
        if (pMVar9 != (MobileAdManager_AdLoadState *)0x0) {
          (pMVar9->fields).loadingAd = 1;
          pAVar16 = MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
          pAVar17 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                              ((MethodInfo *)0x0);
          if (pAVar17 != (AdMobCredentials *)0x0) {
            pSVar1 = (pAVar17->fields).InterstitialAdUnitId;
            pUVar18 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(
                                   TypeInfo__System__Action<GoogleMobileAds::Api::InterstitialAd,_GoogleMobileAds::Api::LoadAdError>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar18,(Object *)this,
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
              FUN_?(&TypeInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0);
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
              bVar5 = iRam_? != 0;
              object[1].monitor = (MonitorData *)pUVar18;
              if (bVar5) {
                uVar6 = (uint)((ulonglong)&object[1].monitor >> 0xc);
                lVar3 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar7 = *(ulonglong *)(lVar3 + 0xADDR);
                  puVar8 = (ulonglong *)(lVar3 + 0xADDR);
                  LOCK();
                  bVar5 = uVar7 == *puVar8;
                  if (bVar5) {
                    *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar5);
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
              if (*(int *)&(TypeInfo__GoogleMobileAds__Api__MobileAds->_1).field_0x1c == 0) {
                FUN_?();
              }
              pIVar19 = GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::
                        MobileAds_GetClientFactory((MethodInfo *)0x0);
              if (pIVar19 != (IClientFactory *)0x0) {
                pOVar20 = (Object__Class *)
                          FUN_?(0,TypeInfo__GoogleMobileAds__IClientFactory,pIVar19);
                bVar5 = iRam_? != 0;
                object[1].klass = pOVar20;
                if (bVar5) {
                  uVar6 = (uint)((ulonglong)(object + 1) >> 0xc);
                  lVar3 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar7 = *(ulonglong *)(lVar3 + 0xADDR);
                    puVar8 = (ulonglong *)(lVar3 + 0xADDR);
                    LOCK();
                    bVar5 = uVar7 == *puVar8;
                    if (bVar5) {
                      *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar5);
                }
                if (object[1].klass != (Object__Class *)0x0) {
                  FUN_?(0x10,TypeInfo__GoogleMobileAds__Common__IInterstitialClient);
                  pOVar20 = object[1].klass;
                  pUVar18 = (UnityAction_2_System_Object_System_Object_ *)
                            FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            (pUVar18,object,
                             MethodInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                             ,(MethodInfo *)0x0);
                  if (pOVar20 != (Object__Class *)0x0) {
                    FUN_?(0,TypeInfo__GoogleMobileAds__Common__IInterstitialClient,pOVar20);
                    pOVar20 = object[1].klass;
                    pUVar18 = (UnityAction_2_System_Object_System_Object_ *)
                              FUN_?(
                                           TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                                           );
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                              (pUVar18,object,
                               MethodInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                               ,(MethodInfo *)0x0);
                    if (pOVar20 != (Object__Class *)0x0) {
                      FUN_?();
                      if (object[1].klass != (Object__Class *)0x0) {
                        apAStack_11[0] = pAVar16;
                        FUN_?(0x11,TypeInfo__GoogleMobileAds__Common__IInterstitialClient,
                                      object[1].klass,pSVar1);
                        return;
                      }
                    }
                  }
                }
              }
            }
            FUN_?();
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
      }
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void CreateAndLoadInterstitialAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_CreateAndLoadInterstitialAd
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
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
            ((Object *)StringLiteral_InternalStateInterstitial_Create,(MethodInfo *)0x0);
  MobileAdManager::MobileAdManager_SendStat(StringLiteral_Ad_InterstitialLoad,(MethodInfo *)0x0);
  MobileAdManager_InternalStateInterstitial_DestroyInterstitial(this,(MethodInfo *)0x0);
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
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    if ((pMVar1->fields).loadingAd != 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_InternalStateInterstitial_LoadIn;
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
              ((Object *)StringLiteral_InternalStateInterstitial_LoadIn,(MethodInfo *)0x0);
    pMVar1 = (this->fields).adLoadState;
    if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
      (pMVar1->fields).loadingAd = 1;
      pAVar5 = MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
      pAVar6 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                         ((MethodInfo *)0x0);
      if (pAVar6 != (AdMobCredentials *)0x0) {
        pSVar2 = (pAVar6->fields).InterstitialAdUnitId;
        pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Action<GoogleMobileAds::Api::InterstitialAd,_GoogleMobileAds::Api::LoadAdError>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar7,(Object *)this,
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
          FUN_?(&TypeInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_adLoadCallback_is_null__No_ad_wa);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        object = (Object *)
                 FUN_?(TypeInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0)
        ;
        if (object != (Object *)0x0) {
          bVar8 = iRam_? != 0;
          object[1].monitor = (MonitorData *)pUVar7;
          if (bVar8) {
            uVar9 = (uint)((ulonglong)&object[1].monitor >> 0xc);
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
          if (object[1].monitor == (MonitorData *)0x0) {
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
          pIVar13 = GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::MobileAds_GetClientFactory
                              ((MethodInfo *)0x0);
          if (pIVar13 != (IClientFactory *)0x0) {
            pOVar14 = (Object__Class *)
                      FUN_?(0,TypeInfo__GoogleMobileAds__IClientFactory,pIVar13);
            bVar8 = iRam_? != 0;
            object[1].klass = pOVar14;
            if (bVar8) {
              uVar9 = (uint)((ulonglong)(object + 1) >> 0xc);
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
            if (object[1].klass != (Object__Class *)0x0) {
              FUN_?(0x10,TypeInfo__GoogleMobileAds__Common__IInterstitialClient);
              pOVar14 = object[1].klass;
              pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
                        FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar7,object,
                         MethodInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                         ,(MethodInfo *)0x0);
              if (pOVar14 != (Object__Class *)0x0) {
                FUN_?(0,TypeInfo__GoogleMobileAds__Common__IInterstitialClient,pOVar14);
                pOVar14 = object[1].klass;
                pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(
                                       TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                                       );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar7,object,
                           MethodInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                           ,(MethodInfo *)0x0);
                if (pOVar14 != (Object__Class *)0x0) {
                  FUN_?();
                  if (object[1].klass != (Object__Class *)0x0) {
                    FUN_?(0x11,TypeInfo__GoogleMobileAds__Common__IInterstitialClient,
                                  object[1].klass,pSVar2,pAVar5);
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
     MobileAdManager+InternalStateInterstitial::MobileAdManager_InternalStateInterstitial_Destroy
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
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
  MobileAdManager_InternalStateInterstitial_DestroyInterstitial(this,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).interstitialAdCallback =
       (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).interstitialAdCallback >> 0xc);
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


/* Void DestroyInterstitial() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_DestroyInterstitial
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
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
  if ((this->fields).interstitial != (InterstitialAd *)0x0) {
    MobileAdManager_InternalStateInterstitial_RemoveCallbacks(this,(MethodInfo *)0x0);
    pIVar1 = (this->fields).interstitial;
    if (pIVar1 == (InterstitialAd *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GoogleMobileAds__Common__IInterstitialClient);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pIVar1->fields)._client != (IInterstitialClient *)0x0) {
      (pIVar1->fields)._canShowAd = 0;
      if ((pIVar1->fields)._client == (IInterstitialClient *)0x0) goto code_?;
      FUN_?(0x14,TypeInfo__GoogleMobileAds__Common__IInterstitialClient);
    }
  }
  bVar3 = iRam_? != 0;
  (this->fields).interstitial = (InterstitialAd *)0x0;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).interstitial >> 0xc);
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
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_FinishRequest
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  apMStackX_8[0] = this;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateInterstitial_Finish);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateInterstitial_Finish);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((apMStackX_8[0]->fields).interstitialAdCallback ==
      (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_InternalStateInterstitial_Finish,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateInterstitial_Finish,(MethodInfo *)0x0);
    appMStack_1[0] = apMStackX_8;
    pAVar2 = (apMStackX_8[0]->fields).interstitialAdCallback;
    iVar3 = (apMStackX_8[0]->fields).interstitialAdResult;
    if (pAVar2 == (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
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
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_HandleError
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateInterstitial_Handle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateInterstitial_Handle);
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
              ((Object *)StringLiteral_InternalStateInterstitial_Handle,(MethodInfo *)0x0);
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
    pMVar1 = (this->fields).adLoadState;
    if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
      if ((pMVar1->fields).loadingAd != 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar4 = StringLiteral_InternalStateInterstitial_LoadIn;
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
                ((Object *)StringLiteral_InternalStateInterstitial_LoadIn,(MethodInfo *)0x0);
      pMVar1 = (this->fields).adLoadState;
      if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
        (pMVar1->fields).loadingAd = 1;
        pAVar7 = MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
        pAVar8 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                            ((MethodInfo *)0x0);
        if (pAVar8 != (AdMobCredentials *)0x0) {
          pSVar4 = (pAVar8->fields).InterstitialAdUnitId;
          pUVar9 = (UnityAction_2_System_Object_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Action<GoogleMobileAds::Api::InterstitialAd,_GoogleMobileAds::Api::LoadAdError>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar9,(Object *)this,
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
            FUN_?(&TypeInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0);
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
            bVar10 = iRam_? != 0;
            object[1].monitor = (MonitorData *)pUVar9;
            if (bVar10) {
              uVar11 = (uint)((ulonglong)&object[1].monitor >> 0xc);
              lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
              do {
                uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
                puVar14 = (ulonglong *)(lVar12 + 0xADDR);
                LOCK();
                bVar10 = uVar13 == *puVar14;
                if (bVar10) {
                  *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                }
                UNLOCK();
              } while (!bVar10);
            }
            if (object[1].monitor == (MonitorData *)0x0) {
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
            pIVar15 = GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::
                      MobileAds_GetClientFactory((MethodInfo *)0x0);
            if (pIVar15 != (IClientFactory *)0x0) {
              pOVar16 = (Object__Class *)
                        FUN_?(0,TypeInfo__GoogleMobileAds__IClientFactory,pIVar15);
              bVar10 = iRam_? != 0;
              object[1].klass = pOVar16;
              if (bVar10) {
                uVar11 = (uint)((ulonglong)(object + 1) >> 0xc);
                lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
                do {
                  uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
                  puVar14 = (ulonglong *)(lVar12 + 0xADDR);
                  LOCK();
                  bVar10 = uVar13 == *puVar14;
                  if (bVar10) {
                    *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar10);
              }
              if (object[1].klass != (Object__Class *)0x0) {
                FUN_?(0x10,TypeInfo__GoogleMobileAds__Common__IInterstitialClient);
                pOVar16 = object[1].klass;
                pUVar9 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar9,object,
                           MethodInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                           ,(MethodInfo *)0x0);
                if (pOVar16 != (Object__Class *)0x0) {
                  FUN_?(0,TypeInfo__GoogleMobileAds__Common__IInterstitialClient,pOVar16);
                  pOVar16 = object[1].klass;
                  pUVar9 = (UnityAction_2_System_Object_System_Object_ *)
                            FUN_?(
                                         TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                                         );
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            (pUVar9,object,
                             MethodInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                             ,(MethodInfo *)0x0);
                  if (pOVar16 != (Object__Class *)0x0) {
                    FUN_?();
                    if (object[1].klass != (Object__Class *)0x0) {
                      apAStack_6[0] = pAVar7;
                      FUN_?(0x11,TypeInfo__GoogleMobileAds__Common__IInterstitialClient,
                                    object[1].klass,pSVar4);
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
            ((Object *)StringLiteral_InternalStateInterstitial_Handle,(MethodInfo *)0x0);
  (this->fields).interstitialAdResult = 1;
  pMStackX_8 = this;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateInterstitial_Finish);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateInterstitial_Finish);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pMStackX_8->fields).interstitialAdCallback ==
      (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_InternalStateInterstitial_Finish,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateInterstitial_Finish,(MethodInfo *)0x0);
    apAStack_6[0] = (AdRequest *)&pMStackX_8;
    pAVar17 = (pMStackX_8->fields).interstitialAdCallback;
    iVar18 = (pMStackX_8->fields).interstitialAdResult;
    if (pAVar17 == (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
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


/* Void InterstitialOnOnAdClicked() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_InterstitialOnOnAdClicked
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateInterstitial_Inters);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral_InternalStateInterstitial_Inters;
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


/* Void InterstitialOnOnAdFullScreenContentClosed() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_InterstitialOnOnAdFullScreenContentClosed
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateInterstitial_Inters);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateInterstitial_Inters,(MethodInfo *)0x0);
  (this->fields).interstitialAdResult = 3;
  MobileAdManager_InternalStateInterstitial_FinishRequest(this,(MethodInfo *)0x0);
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
            ((Object *)StringLiteral_InternalStateInterstitial_Create,(MethodInfo *)0x0);
  MobileAdManager::MobileAdManager_SendStat(StringLiteral_Ad_InterstitialLoad,(MethodInfo *)0x0);
  MobileAdManager_InternalStateInterstitial_DestroyInterstitial(this,(MethodInfo *)0x0);
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
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    if ((pMVar1->fields).loadingAd != 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_InternalStateInterstitial_LoadIn;
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
              ((Object *)StringLiteral_InternalStateInterstitial_LoadIn,(MethodInfo *)0x0);
    pMVar1 = (this->fields).adLoadState;
    if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
      (pMVar1->fields).loadingAd = 1;
      pAVar5 = MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
      pAVar6 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                         ((MethodInfo *)0x0);
      if (pAVar6 != (AdMobCredentials *)0x0) {
        pSVar2 = (pAVar6->fields).InterstitialAdUnitId;
        pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Action<GoogleMobileAds::Api::InterstitialAd,_GoogleMobileAds::Api::LoadAdError>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar7,(Object *)this,
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
          FUN_?(&TypeInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_adLoadCallback_is_null__No_ad_wa);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        object = (Object *)
                 FUN_?(TypeInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0)
        ;
        if (object != (Object *)0x0) {
          bVar8 = iRam_? != 0;
          object[1].monitor = (MonitorData *)pUVar7;
          if (bVar8) {
            uVar9 = (uint)((ulonglong)&object[1].monitor >> 0xc);
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
          if (object[1].monitor == (MonitorData *)0x0) {
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
          pIVar13 = GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::MobileAds_GetClientFactory
                              ((MethodInfo *)0x0);
          if (pIVar13 != (IClientFactory *)0x0) {
            pOVar14 = (Object__Class *)
                      FUN_?(0,TypeInfo__GoogleMobileAds__IClientFactory,pIVar13);
            bVar8 = iRam_? != 0;
            object[1].klass = pOVar14;
            if (bVar8) {
              uVar9 = (uint)((ulonglong)(object + 1) >> 0xc);
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
            if (object[1].klass != (Object__Class *)0x0) {
              FUN_?(0x10,TypeInfo__GoogleMobileAds__Common__IInterstitialClient);
              pOVar14 = object[1].klass;
              pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
                        FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar7,object,
                         MethodInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                         ,(MethodInfo *)0x0);
              if (pOVar14 != (Object__Class *)0x0) {
                FUN_?(0,TypeInfo__GoogleMobileAds__Common__IInterstitialClient,pOVar14);
                pOVar14 = object[1].klass;
                pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(
                                       TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                                       );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar7,object,
                           MethodInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                           ,(MethodInfo *)0x0);
                if (pOVar14 != (Object__Class *)0x0) {
                  FUN_?();
                  if (object[1].klass != (Object__Class *)0x0) {
                    FUN_?(0x11,TypeInfo__GoogleMobileAds__Common__IInterstitialClient,
                                  object[1].klass,pSVar2,pAVar5);
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


/* Void InterstitialOnOnAdFullScreenContentFailed(AdError) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_InterstitialOnOnAdFullScreenContentFailed
               (MobileAdManager_InternalStateInterstitial *this,AdError *error,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateInterstitial_Inters);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_InternalStateInterstitial_Inters;
  if (error == (AdError *)0x0) {
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
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InterstitialOnOnAdFullScreenContentOpened() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_InterstitialOnOnAdFullScreenContentOpened
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateInterstitial_Inters);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateInterstitial_Inters,(MethodInfo *)0x0);
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


/* Void InterstitialOnOnAdImpressionRecorded() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_InterstitialOnOnAdImpressionRecorded
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateInterstitial_Inters);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral_InternalStateInterstitial_Inters;
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


/* Void InterstitialOnOnAdPaid(AdValue) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_InterstitialOnOnAdPaid
               (MobileAdManager_InternalStateInterstitial *this,AdValue *adValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateInterstitial_Inters);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (adValue != (AdValue *)0x0) {
    aiStackX_10[0] = (adValue->fields)._Value_k__BackingField;
    arg0 = (Object *)FUN_?(uRam_?,aiStackX_10);
    pSVar1 = StringLiteral_InternalStateInterstitial_Inters;
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


/* Void LoadInterstitialAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_LoadInterstitialAd
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
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
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    if ((pMVar1->fields).loadingAd != 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_InternalStateInterstitial_LoadIn;
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
              ((Object *)StringLiteral_InternalStateInterstitial_LoadIn,(MethodInfo *)0x0);
    pMVar1 = (this->fields).adLoadState;
    if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
      (pMVar1->fields).loadingAd = 1;
      pAVar5 = MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
      pAVar6 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                         ((MethodInfo *)0x0);
      if (pAVar6 != (AdMobCredentials *)0x0) {
        pSVar2 = (pAVar6->fields).InterstitialAdUnitId;
        pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Action<GoogleMobileAds::Api::InterstitialAd,_GoogleMobileAds::Api::LoadAdError>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar7,(Object *)this,
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
          FUN_?(&TypeInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_adLoadCallback_is_null__No_ad_wa);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        object = (Object *)
                 FUN_?(TypeInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0)
        ;
        if (object != (Object *)0x0) {
          bVar8 = iRam_? != 0;
          object[1].monitor = (MonitorData *)pUVar7;
          if (bVar8) {
            uVar9 = (uint)((ulonglong)&object[1].monitor >> 0xc);
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
          if (object[1].monitor == (MonitorData *)0x0) {
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
          pIVar13 = GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::MobileAds_GetClientFactory
                              ((MethodInfo *)0x0);
          if (pIVar13 != (IClientFactory *)0x0) {
            pOVar14 = (Object__Class *)
                      FUN_?(0,TypeInfo__GoogleMobileAds__IClientFactory,pIVar13);
            bVar8 = iRam_? != 0;
            object[1].klass = pOVar14;
            if (bVar8) {
              uVar9 = (uint)((ulonglong)(object + 1) >> 0xc);
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
            if (object[1].klass != (Object__Class *)0x0) {
              FUN_?(0x10,TypeInfo__GoogleMobileAds__Common__IInterstitialClient);
              pOVar14 = object[1].klass;
              pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
                        FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar7,object,
                         MethodInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                         ,(MethodInfo *)0x0);
              if (pOVar14 != (Object__Class *)0x0) {
                FUN_?(0,TypeInfo__GoogleMobileAds__Common__IInterstitialClient,pOVar14);
                pOVar14 = object[1].klass;
                pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(
                                       TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                                       );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar7,object,
                           MethodInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                           ,(MethodInfo *)0x0);
                if (pOVar14 != (Object__Class *)0x0) {
                  FUN_?();
                  if (object[1].klass != (Object__Class *)0x0) {
                    FUN_?(0x11,TypeInfo__GoogleMobileAds__Common__IInterstitialClient,
                                  object[1].klass,pSVar2,pAVar5);
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
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_RemoveCallbacks
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

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
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdClicked__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentClosed__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentFailed_GoogleMobileAds__Api__AdError_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentOpened__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdImpressionRecorded__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdPaid_GoogleMobileAds__Api__AdValue_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateInterstitial_Remove);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateInterstitial_Remove,(MethodInfo *)0x0);
  pIVar1 = (this->fields).interstitial;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,
             MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentOpened__
             ,(MethodInfo *)0x0);
  if (pIVar1 != (InterstitialAd *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    ppAVar3 = &(pIVar1->fields).OnAdFullScreenContentOpened;
    pAVar4 = (pIVar1->fields).OnAdFullScreenContentOpened;
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
    pIVar1 = (this->fields).interstitial;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentClosed__
               ,(MethodInfo *)0x0);
    if (pIVar1 != (InterstitialAd *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      ppAVar3 = &(pIVar1->fields).OnAdFullScreenContentClosed;
      pAVar4 = (pIVar1->fields).OnAdFullScreenContentClosed;
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
      pIVar1 = (this->fields).interstitial;
      pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar2,(Object *)this,
                 MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdClicked__
                 ,(MethodInfo *)0x0);
      if (pIVar1 != (InterstitialAd *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        ppAVar3 = &(pIVar1->fields).OnAdClicked;
        pAVar4 = (pIVar1->fields).OnAdClicked;
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
        pIVar1 = (this->fields).interstitial;
        pUVar13 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (pUVar13,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdPaid_GoogleMobileAds__Api__AdValue_
                   ,(MethodInfo *)0x0);
        if (pIVar1 != (InterstitialAd *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pIVar14 = &pIVar1->fields;
          source = (pIVar1->fields).OnAdPaid;
          do {
            pDVar15 = mscorlib.dll::System::Delegate::Delegate_Remove
                                ((Delegate *)source,(Delegate *)pUVar13,(MethodInfo *)0x0);
            pAVar16 = TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>;
            if (pDVar15 == (Delegate *)0x0) {
              pAVar17 = (Action_1_GoogleMobileAds_Api_AdValue_ *)0x0;
            }
            else {
              pAVar17 = (Action_1_GoogleMobileAds_Api_AdValue_ *)
                        FUN_?(pDVar15,
                                      TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>);
              if (pAVar17 == (Action_1_GoogleMobileAds_Api_AdValue_ *)0x0) {
                FUN_?(pDVar15,pAVar16);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            LOCK();
            pAVar18 = pIVar14->OnAdPaid;
            bVar8 = source == pAVar18;
            if (bVar8) {
              pIVar14->OnAdPaid = pAVar17;
              pAVar18 = source;
            }
            UNLOCK();
            pAVar17 = source;
            if (!bVar8) {
              pAVar17 = pAVar18;
            }
            if (iRam_? != 0) {
              uVar9 = (uint)((ulonglong)pIVar14 >> 0xc);
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
          pIVar1 = (this->fields).interstitial;
          pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar2,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdImpressionRecorded__
                     ,(MethodInfo *)0x0);
          if (pIVar1 != (InterstitialAd *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Action);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pAVar4 = (pIVar1->fields).OnAdImpressionRecorded;
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
              ppAVar3 = &(pIVar1->fields).OnAdImpressionRecorded;
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
                uVar9 = (uint)((ulonglong)&(pIVar1->fields).OnAdImpressionRecorded >> 0xc);
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
            pIVar1 = (this->fields).interstitial;
            pUVar13 = (UnityAction_1_System_Object_ *)
                      FUN_?(TypeInfo__System__Action<GoogleMobileAds::Api::AdError>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (pUVar13,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentFailed_GoogleMobileAds__Api__AdError_
                       ,(MethodInfo *)0x0);
            if (pIVar1 != (InterstitialAd *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdError>);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              ppAVar19 = &(pIVar1->fields).OnAdFullScreenContentFailed;
              source_00 = (pIVar1->fields).OnAdFullScreenContentFailed;
              do {
                pDVar15 = mscorlib.dll::System::Delegate::Delegate_Remove
                                    ((Delegate *)source_00,(Delegate *)pUVar13,(MethodInfo *)0x0);
                pAVar20 = TypeInfo__System__Action<GoogleMobileAds::Api::AdError>;
                if (pDVar15 == (Delegate *)0x0) {
                  pAVar21 = (Action_1_GoogleMobileAds_Api_AdError_ *)0x0;
                }
                else {
                  pAVar21 = (Action_1_GoogleMobileAds_Api_AdError_ *)
                            FUN_?(pDVar15,
                                          TypeInfo__System__Action<GoogleMobileAds::Api::AdError>);
                  if (pAVar21 == (Action_1_GoogleMobileAds_Api_AdError_ *)0x0) {
                    FUN_?(pDVar15,pAVar20);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                LOCK();
                pAVar22 = *ppAVar19;
                bVar8 = source_00 == pAVar22;
                if (bVar8) {
                  *ppAVar19 = pAVar21;
                  pAVar22 = source_00;
                }
                UNLOCK();
                pAVar21 = source_00;
                if (!bVar8) {
                  pAVar21 = pAVar22;
                }
                if (iRam_? != 0) {
                  uVar9 = (uint)((ulonglong)ppAVar19 >> 0xc);
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


/* Void RequestInterstitialAd(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult]) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_RequestInterstitialAd
               (MobileAdManager_InternalStateInterstitial *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *interstitialAdCallback,
               MethodInfo *method)

{
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
  bVar1 = iRam_? != 0;
  (this->fields).interstitialAdCallback = interstitialAdCallback;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).interstitialAdCallback >> 0xc);
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
  if ((((this->fields).interstitial == (InterstitialAd *)0x0) ||
      (pIVar6 = (this->fields).interstitial, (pIVar6->fields)._client == (IInterstitialClient *)0x0)
      ) || ((pIVar6->fields)._canShowAd == 0)) {
    pMVar7 = (this->fields).adLoadState;
    if (pMVar7 == (MobileAdManager_AdLoadState *)0x0) goto code_?;
    if ((pMVar7->fields).loadingAd == 0) {
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
                ((Object *)StringLiteral_InternalStateInterstitial_Create,(MethodInfo *)0x0);
      MobileAdManager::MobileAdManager_SendStat(StringLiteral_Ad_InterstitialLoad,(MethodInfo *)0x0)
      ;
      MobileAdManager_InternalStateInterstitial_DestroyInterstitial(this,(MethodInfo *)0x0);
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
      pMVar7 = (this->fields).adLoadState;
      if (pMVar7 != (MobileAdManager_AdLoadState *)0x0) {
        if ((pMVar7->fields).loadingAd != 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar8 = StringLiteral_InternalStateInterstitial_LoadIn;
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
          pIVar9 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
          if (pIVar9 != (ILogger_1 *)0x0) {
            FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar9,0,pSVar8);
            return;
          }
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_InternalStateInterstitial_LoadIn,(MethodInfo *)0x0);
        pMVar7 = (this->fields).adLoadState;
        if (pMVar7 != (MobileAdManager_AdLoadState *)0x0) {
          (pMVar7->fields).loadingAd = 1;
          pAVar11 = MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
          pAVar12 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                              ((MethodInfo *)0x0);
          if (pAVar12 != (AdMobCredentials *)0x0) {
            pSVar8 = (pAVar12->fields).InterstitialAdUnitId;
            pUVar13 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(
                                   TypeInfo__System__Action<GoogleMobileAds::Api::InterstitialAd,_GoogleMobileAds::Api::LoadAdError>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar13,(Object *)this,
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
              FUN_?(&TypeInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0);
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
              bVar1 = iRam_? != 0;
              object[1].monitor = (MonitorData *)pUVar13;
              if (bVar1) {
                uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
                lVar14 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                do {
                  uVar5 = *(ulonglong *)(lVar14 + 0xADDR);
                  puVar3 = (ulonglong *)(lVar14 + 0xADDR);
                  LOCK();
                  bVar1 = uVar5 == *puVar3;
                  if (bVar1) {
                    *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar1);
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
              if (*(int *)&(TypeInfo__GoogleMobileAds__Api__MobileAds->_1).field_0x1c == 0) {
                FUN_?();
              }
              pIVar15 = GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::
                        MobileAds_GetClientFactory((MethodInfo *)0x0);
              if (pIVar15 != (IClientFactory *)0x0) {
                pOVar16 = (Object__Class *)
                          FUN_?(0,TypeInfo__GoogleMobileAds__IClientFactory,pIVar15);
                bVar1 = iRam_? != 0;
                object[1].klass = pOVar16;
                if (bVar1) {
                  uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
                  lVar14 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar5 = *(ulonglong *)(lVar14 + 0xADDR);
                    puVar3 = (ulonglong *)(lVar14 + 0xADDR);
                    LOCK();
                    bVar1 = uVar5 == *puVar3;
                    if (bVar1) {
                      *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar1);
                }
                if (object[1].klass != (Object__Class *)0x0) {
                  FUN_?(0x10,TypeInfo__GoogleMobileAds__Common__IInterstitialClient);
                  pOVar16 = object[1].klass;
                  pUVar13 = (UnityAction_2_System_Object_System_Object_ *)
                            FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            (pUVar13,object,
                             MethodInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0____m__0_System__Object__System__EventArgs_
                             ,(MethodInfo *)0x0);
                  if (pOVar16 != (Object__Class *)0x0) {
                    FUN_?(0,TypeInfo__GoogleMobileAds__Common__IInterstitialClient,pOVar16);
                    pOVar16 = object[1].klass;
                    pUVar13 = (UnityAction_2_System_Object_System_Object_ *)
                              FUN_?(
                                           TypeInfo__System__EventHandler<GoogleMobileAds::Common::LoadAdErrorClientEventArgs>
                                           );
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                              (pUVar13,object,
                               MethodInfo__GoogleMobileAds__Api__InterstitialAd___Load_c__AnonStorey0____m__1_System__Object__GoogleMobileAds__Common__LoadAdErrorClientEventArgs_
                               ,(MethodInfo *)0x0);
                    if (pOVar16 != (Object__Class *)0x0) {
                      FUN_?();
                      if (object[1].klass != (Object__Class *)0x0) {
                        FUN_?(0x11,TypeInfo__GoogleMobileAds__Common__IInterstitialClient,
                                      object[1].klass,pSVar8,pAVar11);
                        return;
                      }
                    }
                  }
                }
              }
            }
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
      }
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateInterstitial_Reques,(MethodInfo *)0x0);
    pIVar6 = (this->fields).interstitial;
    if (pIVar6 == (InterstitialAd *)0x0) {
code_?:
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    GoogleMobileAds.dll::GoogleMobileAds::Api::InterstitialAd::InterstitialAd_Show
              (pIVar6,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetupCallbacks() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_SetupCallbacks
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

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
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdClicked__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentClosed__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentFailed_GoogleMobileAds__Api__AdError_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentOpened__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdImpressionRecorded__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdPaid_GoogleMobileAds__Api__AdValue_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InternalStateInterstitial_SetupC);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalStateInterstitial_SetupC,(MethodInfo *)0x0);
  pIVar1 = (this->fields).interstitial;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,
             MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentOpened__
             ,(MethodInfo *)0x0);
  if (pIVar1 != (InterstitialAd *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    ppAVar3 = &(pIVar1->fields).OnAdFullScreenContentOpened;
    pAVar4 = (pIVar1->fields).OnAdFullScreenContentOpened;
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
    pIVar1 = (this->fields).interstitial;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentClosed__
               ,(MethodInfo *)0x0);
    if (pIVar1 != (InterstitialAd *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      ppAVar3 = &(pIVar1->fields).OnAdFullScreenContentClosed;
      pAVar4 = (pIVar1->fields).OnAdFullScreenContentClosed;
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
      pIVar1 = (this->fields).interstitial;
      pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar2,(Object *)this,
                 MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdClicked__
                 ,(MethodInfo *)0x0);
      if (pIVar1 != (InterstitialAd *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        ppAVar3 = &(pIVar1->fields).OnAdClicked;
        pAVar4 = (pIVar1->fields).OnAdClicked;
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
        pIVar1 = (this->fields).interstitial;
        pUVar13 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (pUVar13,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdPaid_GoogleMobileAds__Api__AdValue_
                   ,(MethodInfo *)0x0);
        if (pIVar1 != (InterstitialAd *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pIVar14 = &pIVar1->fields;
          a = (pIVar1->fields).OnAdPaid;
          do {
            pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)a,(Delegate *)pUVar13,(MethodInfo *)0x0);
            pAVar16 = TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>;
            if (pDVar15 == (Delegate *)0x0) {
              pAVar17 = (Action_1_GoogleMobileAds_Api_AdValue_ *)0x0;
            }
            else {
              pAVar17 = (Action_1_GoogleMobileAds_Api_AdValue_ *)
                        FUN_?(pDVar15,
                                      TypeInfo__System__Action<GoogleMobileAds::Api::AdValue>);
              if (pAVar17 == (Action_1_GoogleMobileAds_Api_AdValue_ *)0x0) {
                FUN_?(pDVar15,pAVar16);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            LOCK();
            pAVar18 = pIVar14->OnAdPaid;
            bVar8 = a == pAVar18;
            if (bVar8) {
              pIVar14->OnAdPaid = pAVar17;
              pAVar18 = a;
            }
            UNLOCK();
            pAVar17 = a;
            if (!bVar8) {
              pAVar17 = pAVar18;
            }
            if (iRam_? != 0) {
              uVar9 = (uint)((ulonglong)pIVar14 >> 0xc);
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
          pIVar1 = (this->fields).interstitial;
          pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar2,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdImpressionRecorded__
                     ,(MethodInfo *)0x0);
          if (pIVar1 != (InterstitialAd *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Action);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pAVar4 = (pIVar1->fields).OnAdImpressionRecorded;
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
              ppAVar3 = &(pIVar1->fields).OnAdImpressionRecorded;
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
                uVar9 = (uint)((ulonglong)&(pIVar1->fields).OnAdImpressionRecorded >> 0xc);
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
            pIVar1 = (this->fields).interstitial;
            pUVar13 = (UnityAction_1_System_Object_ *)
                      FUN_?(TypeInfo__System__Action<GoogleMobileAds::Api::AdError>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (pUVar13,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__InterstitialOnOnAdFullScreenContentFailed_GoogleMobileAds__Api__AdError_
                       ,(MethodInfo *)0x0);
            if (pIVar1 != (InterstitialAd *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Action<GoogleMobileAds::Api::AdError>);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              ppAVar19 = &(pIVar1->fields).OnAdFullScreenContentFailed;
              a_00 = (pIVar1->fields).OnAdFullScreenContentFailed;
              do {
                pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)a_00,(Delegate *)pUVar13,(MethodInfo *)0x0);
                pAVar20 = TypeInfo__System__Action<GoogleMobileAds::Api::AdError>;
                if (pDVar15 == (Delegate *)0x0) {
                  pAVar21 = (Action_1_GoogleMobileAds_Api_AdError_ *)0x0;
                }
                else {
                  pAVar21 = (Action_1_GoogleMobileAds_Api_AdError_ *)
                            FUN_?(pDVar15,
                                          TypeInfo__System__Action<GoogleMobileAds::Api::AdError>);
                  if (pAVar21 == (Action_1_GoogleMobileAds_Api_AdError_ *)0x0) {
                    FUN_?(pDVar15,pAVar20);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                LOCK();
                pAVar22 = *ppAVar19;
                bVar8 = a_00 == pAVar22;
                if (bVar8) {
                  *ppAVar19 = pAVar21;
                  pAVar22 = a_00;
                }
                UNLOCK();
                pAVar21 = a_00;
                if (!bVar8) {
                  pAVar21 = pAVar22;
                }
                if (iRam_? != 0) {
                  uVar9 = (uint)((ulonglong)ppAVar19 >> 0xc);
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


/* String ToString() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalStateInterstitial::
         MobileAdManager_InternalStateInterstitial_ToString
                   (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_interstitialAdCreated__0_u000A_isHan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).interstitial;
  bVar2 = false;
  if (pIVar1 != (InterstitialAd *)0x0) {
    if ((pIVar1->fields)._client == (IInterstitialClient *)0x0) {
      bVar3 = 0;
    }
    else {
      bVar3 = (pIVar1->fields)._canShowAd;
    }
    bVar2 = bVar3 != 0;
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,4);
  abStackX_8[0] = pIVar1 != (InterstitialAd *)0x0;
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
    pSVar8 = StringLiteral_interstitialAdCreated__0_u000A_isHan;
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


/* MobileAdManager+InternalStateInterstitial() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::MobileAdManager_InternalStateInterstitial__ctor
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

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
  (this->fields).interstitialAdResult = 3;
  return;
}


/* TimeSpan get_TimeSinceLastInterstitial() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalStateInterstitial::
         MobileAdManager_InternalStateInterstitial_get_TimeSinceLastInterstitial
                   (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

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

