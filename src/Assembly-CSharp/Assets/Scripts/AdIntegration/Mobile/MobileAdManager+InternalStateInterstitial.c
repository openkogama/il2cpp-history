
/* Void CreateAndLoadInterstitialAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_CreateAndLoadInterstitialAd
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_InitializeInterstitialAd,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0)) {
    func_?();
  }
  MobileAdManager::MobileAdManager_SendStat(StringLiteral_Ad_InterstitialLoad,(MethodInfo *)0x0);
  MobileAdManager_InternalStateInterstitial_DestroyInterstitial(this,(MethodInfo *)0x0);
  pAVar1 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                     ((MethodInfo *)0x0);
  if (pAVar1 != (AdMobCredentials *)0x0) {
    adUnitId = (pAVar1->fields).InterstitialAdUnitId;
    pIVar2 = (InterstitialAd *)func_?();
    GoogleMobileAds::Api::InterstitialAd::InterstitialAd__ctor(pIVar2,adUnitId,(MethodInfo *)0x0);
    (this->fields).interstitial = pIVar2;
    if (cRam_? == '\0') {
      func_?();
      pIVar2 = (this->fields).interstitial;
      cRam_? = '\x01';
    }
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialLoaded_System__Object__System__EventArgs_
               ,
               MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
              );
    if (pIVar2 != (InterstitialAd *)0x0) {
      GoogleMobileAds::Api::InterstitialAd::InterstitialAd_add_OnAdLoaded
                (pIVar2,(EventHandler_1_EventArgs_ *)pUVar3,(MethodInfo *)0x0);
      pIVar2 = (this->fields).interstitial;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialFailedToLoad_System__Object__GoogleMobileAds__Api__AdFailedToLoadEventArgs_
                 ,
                 MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>__EventHandler_System__Object__void__
                );
      if (pIVar2 != (InterstitialAd *)0x0) {
        GoogleMobileAds::Api::InterstitialAd::InterstitialAd_add_OnAdFailedToLoad
                  (pIVar2,(EventHandler_1_GoogleMobileAds_Api_AdFailedToLoadEventArgs_ *)pUVar3,
                   (MethodInfo *)0x0);
        pIVar2 = (this->fields).interstitial;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialOpened_System__Object__System__EventArgs_
                   ,
                   MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                  );
        if (pIVar2 != (InterstitialAd *)0x0) {
          GoogleMobileAds::Api::InterstitialAd::InterstitialAd_add_OnAdOpening
                    (pIVar2,(EventHandler_1_EventArgs_ *)pUVar3,(MethodInfo *)0x0);
          pIVar2 = (this->fields).interstitial;
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialClosed_System__Object__System__EventArgs_
                     ,
                     MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                    );
          if (pIVar2 != (InterstitialAd *)0x0) {
            GoogleMobileAds::Api::InterstitialAd::InterstitialAd_add_OnAdClosed
                      (pIVar2,(EventHandler_1_EventArgs_ *)pUVar3,(MethodInfo *)0x0);
            pIVar2 = (this->fields).interstitial;
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialLeftApplication_System__Object__System__EventArgs_
                       ,
                       MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                      );
            if (pIVar2 != (InterstitialAd *)0x0) {
              GoogleMobileAds::Api::InterstitialAd::InterstitialAd_add_OnAdLeavingApplication
                        (pIVar2,(EventHandler_1_EventArgs_ *)pUVar3,(MethodInfo *)0x0);
              MobileAdManager_InternalStateInterstitial_LoadInterstitialAd(this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::MobileAdManager_InternalStateInterstitial_Destroy
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  MobileAdManager_InternalStateInterstitial_DestroyInterstitial(this,(MethodInfo *)0x0);
  (this->fields).interstitialAdCallback =
       (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0;
  return;
}


/* Void DestroyInterstitial() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_DestroyInterstitial
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  pIVar1 = (this->fields).interstitial;
  if (pIVar1 == (InterstitialAd *)0x0) {
code_?:
    (this->fields).interstitial = (InterstitialAd *)0x0;
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    pIVar1 = (this->fields).interstitial;
    cRam_? = '\x01';
  }
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__EventHandler<System::EventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialLoaded_System__Object__System__EventArgs_
             ,
             MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
            );
  if (pIVar1 != (InterstitialAd *)0x0) {
    GoogleMobileAds::Api::InterstitialAd::InterstitialAd_remove_OnAdLoaded
              (pIVar1,(EventHandler_1_EventArgs_ *)pUVar2,(MethodInfo *)0x0);
    pIVar1 = (this->fields).interstitial;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialFailedToLoad_System__Object__GoogleMobileAds__Api__AdFailedToLoadEventArgs_
               ,
               MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>__EventHandler_System__Object__void__
              );
    if (pIVar1 != (InterstitialAd *)0x0) {
      GoogleMobileAds::Api::InterstitialAd::InterstitialAd_remove_OnAdFailedToLoad
                (pIVar1,(EventHandler_1_GoogleMobileAds_Api_AdFailedToLoadEventArgs_ *)pUVar2,
                 (MethodInfo *)0x0);
      pIVar1 = (this->fields).interstitial;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialOpened_System__Object__System__EventArgs_
                 ,
                 MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                );
      if (pIVar1 != (InterstitialAd *)0x0) {
        GoogleMobileAds::Api::InterstitialAd::InterstitialAd_remove_OnAdOpening
                  (pIVar1,(EventHandler_1_EventArgs_ *)pUVar2,(MethodInfo *)0x0);
        pIVar1 = (this->fields).interstitial;
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialClosed_System__Object__System__EventArgs_
                   ,
                   MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                  );
        if (pIVar1 != (InterstitialAd *)0x0) {
          GoogleMobileAds::Api::InterstitialAd::InterstitialAd_remove_OnAdClosed
                    (pIVar1,(EventHandler_1_EventArgs_ *)pUVar2,(MethodInfo *)0x0);
          pIVar1 = (this->fields).interstitial;
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialLeftApplication_System__Object__System__EventArgs_
                     ,
                     MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                    );
          if (pIVar1 != (InterstitialAd *)0x0) {
            GoogleMobileAds::Api::InterstitialAd::InterstitialAd_remove_OnAdLeavingApplication
                      (pIVar1,(EventHandler_1_EventArgs_ *)pUVar2,(MethodInfo *)0x0);
            pIVar1 = (this->fields).interstitial;
            if (pIVar1 != (InterstitialAd *)0x0) {
              GoogleMobileAds::Api::InterstitialAd::InterstitialAd_Destroy(pIVar1,(MethodInfo *)0x0)
              ;
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void FinishRequest() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_FinishRequest
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  func_?();
  if ((this->fields).interstitialAdCallback ==
      (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puStack_7 = (undefined4 *)&stack0xffffffb8, puStack_4 = &stack0xffffffb8,
       (TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      puStack_7 = (undefined4 *)&stack0xffffffb8;
      puStack_4 = &stack0xffffffb8;
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Callback_already_done__This_is_p,(MethodInfo *)0x0);
  }
  else {
    this_00 = (Action_1_UIPushOption_ *)(this->fields).interstitialAdCallback;
    uStack_1 = 1;
    if (this_00 == (Action_1_UIPushOption_ *)0x0) {
      puStack_7 = (undefined4 *)&stack0xffffffb8;
      puStack_4 = &stack0xffffffb8;
      func_?(0);
      DStack_8.ticks._ticks._4_4_ = 0;
      DStack_8.ticks._ticks._0_4_ = 0;
      func_?();
      pMStack_9 = this->klass;
      func_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,(this->fields).interstitialAdResult,
               MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Invoke_Assets__Scripts__AdIntegration__InterstitialAdResult_
              );
    *puStack_7 = 0x59;
    uStack_1 = 0xffffffff;
    if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar11 = mscorlib.dll::System::DateTime::DateTime_get_Now(&DStack_8,(MethodInfo *)0x0);
    iVar12 = (pDVar11->ticks)._ticks;
    uVar13 = *(undefined4 *)((int)&(pDVar11->ticks)._ticks + 4);
    iVar14 = pDVar11->kind;
    uVar15 = *(undefined4 *)&pDVar11->field_0xc;
    (this->fields).interstitialAdResult = 3;
    (this->fields).interstitialAdCallback =
         (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0;
    *(int *)&(this->fields).prevInterstitialTime.ticks._ticks = (int)iVar12;
    *(undefined4 *)((int)&(this->fields).prevInterstitialTime.ticks._ticks + 4) = uVar13;
    (this->fields).prevInterstitialTime.kind = iVar14;
    *(undefined4 *)&(this->fields).prevInterstitialTime.field_0xc = uVar15;
    (this->fields).isHandlingRequest = 0;
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void HandleError() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_HandleError
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  this_00 = (this->fields).adLoadState;
  if (this_00 == (MobileAdManager_AdLoadState *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = MobileAdManager+AdLoadState::MobileAdManager_AdLoadState_Reload(this_00,(MethodInfo *)0x0)
  ;
  if (bVar2 == 0) {
    (this->fields).interstitialAdResult = 1;
    MobileAdManager_InternalStateInterstitial_FinishRequest(this,(MethodInfo *)0x0);
    return;
  }
  MobileAdManager_InternalStateInterstitial_LoadInterstitialAd(this,(MethodInfo *)0x0);
  return;
}


/* Void HandleInterstitialClosed(Object, EventArgs) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_HandleInterstitialClosed
               (MobileAdManager_InternalStateInterstitial *this,Object *sender,EventArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_HandleInterstitialClosed_event_r,(MethodInfo *)0x0);
  (this->fields).interstitialAdResult = 3;
  MobileAdManager_InternalStateInterstitial_FinishRequest(this,(MethodInfo *)0x0);
  MobileAdManager_InternalStateInterstitial_CreateAndLoadInterstitialAd(this,(MethodInfo *)0x0);
  return;
}


/* Void HandleInterstitialFailedToLoad(Object, AdFailedToLoadEventArgs) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_HandleInterstitialFailedToLoad
               (MobileAdManager_InternalStateInterstitial *this,Object *sender,
               AdFailedToLoadEventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (args != (AdFailedToLoadEventArgs *)0x0) {
    pSVar1 = (String *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)args,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_HandleInterstitialFailedToLoad_e,pSVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
    pMVar2 = (this->fields).adLoadState;
    if (pMVar2 != (MobileAdManager_AdLoadState *)0x0) {
      (pMVar2->fields).loadingAd = 0;
      pMVar2 = (this->fields).adLoadState;
      if (pMVar2 != (MobileAdManager_AdLoadState *)0x0) {
        bVar3 = MobileAdManager+AdLoadState::MobileAdManager_AdLoadState_Reload
                          (pMVar2,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          (this->fields).interstitialAdResult = 1;
          MobileAdManager_InternalStateInterstitial_FinishRequest(this,(MethodInfo *)0x0);
          return;
        }
        MobileAdManager_InternalStateInterstitial_LoadInterstitialAd(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleInterstitialLeftApplication(Object, EventArgs) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_HandleInterstitialLeftApplication
               (MobileAdManager_InternalStateInterstitial *this,Object *sender,EventArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_HandleInterstitialLeftApplicatio,(MethodInfo *)0x0);
  return;
}


/* Void HandleInterstitialLoaded(Object, EventArgs) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_HandleInterstitialLoaded
               (MobileAdManager_InternalStateInterstitial *this,Object *sender,EventArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    (pMVar1->fields).loadingAd = 0;
    if ((this->fields).isHandlingRequest != 0) {
      this_00 = (this->fields).interstitial;
      if (this_00 == (InterstitialAd *)0x0) goto code_?;
      GoogleMobileAds::Api::InterstitialAd::InterstitialAd_Show(this_00,(MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_HandleInterstitialLoaded_event_r,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleInterstitialOpened(Object, EventArgs) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_HandleInterstitialOpened
               (MobileAdManager_InternalStateInterstitial *this,Object *sender,EventArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_HandleInterstitialOpened_event_r,(MethodInfo *)0x0);
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    (pMVar1->fields).loadAttempts = 0;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void LoadInterstitialAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_LoadInterstitialAd
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).adLoadState;
  if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
    if ((pMVar1->fields).loadingAd != 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Already_loading_ad,(MethodInfo *)0x0);
      return;
    }
    if (pMVar1 != (MobileAdManager_AdLoadState *)0x0) {
      (pMVar1->fields).loadingAd = 1;
      this_00 = (this->fields).interstitial;
      if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals
                  .methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0
         )) {
        func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
      }
      request = MobileAdManager::MobileAdManager_CreateAdRequest((MethodInfo *)0x0);
      if (this_00 != (InterstitialAd *)0x0) {
        GoogleMobileAds::Api::InterstitialAd::InterstitialAd_LoadAd
                  (this_00,request,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveCallbacks() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_RemoveCallbacks
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).interstitial;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__EventHandler<System::EventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialLoaded_System__Object__System__EventArgs_
             ,
             MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
            );
  if (pIVar1 != (InterstitialAd *)0x0) {
    GoogleMobileAds::Api::InterstitialAd::InterstitialAd_remove_OnAdLoaded
              (pIVar1,(EventHandler_1_EventArgs_ *)pUVar2,(MethodInfo *)0x0);
    pIVar1 = (this->fields).interstitial;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialFailedToLoad_System__Object__GoogleMobileAds__Api__AdFailedToLoadEventArgs_
               ,
               MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>__EventHandler_System__Object__void__
              );
    if (pIVar1 != (InterstitialAd *)0x0) {
      GoogleMobileAds::Api::InterstitialAd::InterstitialAd_remove_OnAdFailedToLoad
                (pIVar1,(EventHandler_1_GoogleMobileAds_Api_AdFailedToLoadEventArgs_ *)pUVar2,
                 (MethodInfo *)0x0);
      pIVar1 = (this->fields).interstitial;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialOpened_System__Object__System__EventArgs_
                 ,
                 MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                );
      if (pIVar1 != (InterstitialAd *)0x0) {
        GoogleMobileAds::Api::InterstitialAd::InterstitialAd_remove_OnAdOpening
                  (pIVar1,(EventHandler_1_EventArgs_ *)pUVar2,(MethodInfo *)0x0);
        pIVar1 = (this->fields).interstitial;
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialClosed_System__Object__System__EventArgs_
                   ,
                   MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                  );
        if (pIVar1 != (InterstitialAd *)0x0) {
          GoogleMobileAds::Api::InterstitialAd::InterstitialAd_remove_OnAdClosed
                    (pIVar1,(EventHandler_1_EventArgs_ *)pUVar2,(MethodInfo *)0x0);
          pIVar1 = (this->fields).interstitial;
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialLeftApplication_System__Object__System__EventArgs_
                     ,
                     MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                    );
          if (pIVar1 != (InterstitialAd *)0x0) {
            GoogleMobileAds::Api::InterstitialAd::InterstitialAd_remove_OnAdLeavingApplication
                      (pIVar1,(EventHandler_1_EventArgs_ *)pUVar2,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  (this->fields).interstitialAdCallback = interstitialAdCallback;
  pIVar1 = (this->fields).interstitial;
  (this->fields).isHandlingRequest = 1;
  if (pIVar1 != (InterstitialAd *)0x0) {
    bVar2 = GoogleMobileAds::Api::InterstitialAd::InterstitialAd_IsLoaded(pIVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pMVar3 = (this->fields).adLoadState;
      if (pMVar3 != (MobileAdManager_AdLoadState *)0x0) {
        if ((pMVar3->fields).loadingAd == 0) {
          MobileAdManager_InternalStateInterstitial_CreateAndLoadInterstitialAd
                    (this,(MethodInfo *)0x0);
        }
        return;
      }
    }
    else {
      pIVar1 = (this->fields).interstitial;
      if (pIVar1 != (InterstitialAd *)0x0) {
        GoogleMobileAds::Api::InterstitialAd::InterstitialAd_Show(pIVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupCallbacks() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::
     MobileAdManager_InternalStateInterstitial_SetupCallbacks
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).interstitial;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__EventHandler<System::EventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialLoaded_System__Object__System__EventArgs_
             ,
             MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
            );
  if (pIVar1 != (InterstitialAd *)0x0) {
    GoogleMobileAds::Api::InterstitialAd::InterstitialAd_add_OnAdLoaded
              (pIVar1,(EventHandler_1_EventArgs_ *)pUVar2,(MethodInfo *)0x0);
    pIVar1 = (this->fields).interstitial;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialFailedToLoad_System__Object__GoogleMobileAds__Api__AdFailedToLoadEventArgs_
               ,
               MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>__EventHandler_System__Object__void__
              );
    if (pIVar1 != (InterstitialAd *)0x0) {
      GoogleMobileAds::Api::InterstitialAd::InterstitialAd_add_OnAdFailedToLoad
                (pIVar1,(EventHandler_1_GoogleMobileAds_Api_AdFailedToLoadEventArgs_ *)pUVar2,
                 (MethodInfo *)0x0);
      pIVar1 = (this->fields).interstitial;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialOpened_System__Object__System__EventArgs_
                 ,
                 MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                );
      if (pIVar1 != (InterstitialAd *)0x0) {
        GoogleMobileAds::Api::InterstitialAd::InterstitialAd_add_OnAdOpening
                  (pIVar1,(EventHandler_1_EventArgs_ *)pUVar2,(MethodInfo *)0x0);
        pIVar1 = (this->fields).interstitial;
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialClosed_System__Object__System__EventArgs_
                   ,
                   MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                  );
        if (pIVar1 != (InterstitialAd *)0x0) {
          GoogleMobileAds::Api::InterstitialAd::InterstitialAd_add_OnAdClosed
                    (pIVar1,(EventHandler_1_EventArgs_ *)pUVar2,(MethodInfo *)0x0);
          pIVar1 = (this->fields).interstitial;
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalStateInterstitial__HandleInterstitialLeftApplication_System__Object__System__EventArgs_
                     ,
                     MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                    );
          if (pIVar1 != (InterstitialAd *)0x0) {
            GoogleMobileAds::Api::InterstitialAd::InterstitialAd_add_OnAdLeavingApplication
                      (pIVar1,(EventHandler_1_EventArgs_ *)pUVar2,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalStateInterstitial::
         MobileAdManager_InternalStateInterstitial_ToString
                   (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this._3_1_ = 0;
  this_00 = (pMVar1->fields).interstitial;
  if (this_00 != (InterstitialAd *)0x0) {
    this._3_1_ = GoogleMobileAds::Api::InterstitialAd::InterstitialAd_IsLoaded
                           (this_00,(MethodInfo *)0x0);
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  uStack_2 = CONCAT13(this_00 != (InterstitialAd *)0x0,(undefined3)uStack_2);
  pOVar3 = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_2 + 3);
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
  }
  else {
    if (pOVar3 != (Object *)0x0) {
      iVar5 = func_?(pOVar3,(args->klass->_0).element_class);
      if (iVar5 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar3;
    uStack_2._0_3_ = CONCAT12((pMVar1->fields).isHandlingRequest,(undefined2)uStack_2);
    pOVar3 = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_2 + 2);
    if (pOVar3 != (Object *)0x0) {
      iVar5 = func_?(pOVar3,(args->klass->_0).element_class);
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar3;
    pMVar6 = (pMVar1->fields).adLoadState;
    if (pMVar6 != (MobileAdManager_AdLoadState *)0x0) {
      iVar5 = func_?(pMVar6,(args->klass->_0).element_class);
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)pMVar6;
    uStack_2._0_2_ = CONCAT11(this._3_1_,(undefined1)uStack_2);
    pOVar3 = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_2 + 1);
    if (pOVar3 == (Object *)0x0) {
code_?:
      if (3 < args->max_length) {
        args->vector[3] = pOVar3;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar7 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral_interstitialAdCreated__0_u000A_isHan,args,
                            (MethodInfo *)0x0);
        return pSVar7;
      }
      goto code_?;
    }
    iVar5 = func_?(pOVar3,(args->klass->_0).element_class);
    if (iVar5 != 0) goto code_?;
  }
  uVar4 = func_?(0,0);
  func_?(uVar4);
code_?:
  uVar4 = func_?(0,0);
  func_?(uVar4);
  pcVar8 = (code *)swi(3);
  pSVar7 = (String *)(*pcVar8)();
  return pSVar7;
}


/* MobileAdManager+InternalStateInterstitial() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InternalStateInterstitial::MobileAdManager_InternalStateInterstitial__ctor
               (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar1 = TypeInfo__System__DateTime->static_fields;
  uVar2 = *(undefined4 *)((int)&(pDVar1->MinValue).ticks._ticks + 4);
  iVar3 = (pDVar1->MinValue).kind;
  uVar4 = *(undefined4 *)&(pDVar1->MinValue).field_0xc;
  *(int *)&(this->fields).prevInterstitialTime.ticks._ticks = (int)(pDVar1->MinValue).ticks._ticks;
  *(undefined4 *)((int)&(this->fields).prevInterstitialTime.ticks._ticks + 4) = uVar2;
  (this->fields).prevInterstitialTime.kind = iVar3;
  *(undefined4 *)&(this->fields).prevInterstitialTime.field_0xc = uVar4;
  method_00 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__AdLoadState;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields).adLoadState = (MobileAdManager_AdLoadState *)this_00;
  (this->fields).interstitialAdResult = 3;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}


/* TimeSpan get_TimeSinceLastInterstitial() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+InternalStateInterstitial::
         MobileAdManager_InternalStateInterstitial_get_TimeSinceLastInterstitial
                   (MobileAdManager_InternalStateInterstitial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now
                     ((DateTime *)&stack0xffffffec,(MethodInfo *)0x0);
  TVar2 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction
                    (*pDVar1,(this->fields).prevInterstitialTime,(MethodInfo *)0x0);
  return (TimeSpan)TVar2._ticks;
}

