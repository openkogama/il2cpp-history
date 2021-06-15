
/* AdRequest CreateAdRequest() */

AdRequest *
Assembly-CSharp.dll::GoogleMobileAdsDemoScript::GoogleMobileAdsDemoScript_CreateAdRequest
          (GoogleMobileAdsDemoScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (AdRequest_Builder *)func_?(TypeInfo__GoogleMobileAds__Api__AdRequest__Builder);
  GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder__ctor(pAVar1,(MethodInfo *)0x0);
  if (pAVar1 != (AdRequest_Builder *)0x0) {
    pAVar1 = GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_AddTestDevice
                       (pAVar1,StringLiteral__2F722B7F88436E816B98A0245E195219,(MethodInfo *)0x0);
    if (pAVar1 != (AdRequest_Builder *)0x0) {
      pAVar1 = GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_AddKeyword
                         (pAVar1,StringLiteral_game,(MethodInfo *)0x0);
      if (pAVar1 != (AdRequest_Builder *)0x0) {
        pAVar1 = GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_SetGender
                           (pAVar1,Gender__Enum_Male,(MethodInfo *)0x0);
        uVar2 = 0;
        uVar3 = 0;
        puVar4 = &UNK_?;
        func_?();
        if (pAVar1 != (AdRequest_Builder *)0x0) {
          birthday.ticks._ticks._4_4_ = uVar2;
          birthday.ticks._ticks._0_4_ = puVar4;
          birthday.kind = uVar3;
          birthday._12_4_ = 0;
          pAVar1 = GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_SetBirthday
                             (pAVar1,birthday,in_stack_5);
          if (pAVar1 != (AdRequest_Builder *)0x0) {
            pAVar1 = GoogleMobileAds::Api::AdRequest+Builder::
                     AdRequest_Builder_TagForChildDirectedTreatment(pAVar1,0,(MethodInfo *)0x0);
            if (pAVar1 != (AdRequest_Builder *)0x0) {
              pAVar1 = GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_AddExtra
                                 (pAVar1,StringLiteral_color_bg,StringLiteral__9B30FF,
                                  (MethodInfo *)0x0);
              if (pAVar1 != (AdRequest_Builder *)0x0) {
                pAVar6 = GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_Build
                                   (pAVar1,(MethodInfo *)0x0);
                return pAVar6;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pAVar6 = (AdRequest *)(*pcVar7)();
  return pAVar6;
}


/* Void CreateAndLoadRewardedAd() */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::
     GoogleMobileAdsDemoScript_CreateAndLoadRewardedAd
               (GoogleMobileAdsDemoScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = Assets::Scripts::AdIntegration::Mobile::MobileAdManagerCredentials::
           MobileAdManagerCredentials_GetAdMobCredentials((MethodInfo *)0x0);
  if (pAVar1 != (AdMobCredentials *)0x0) {
    adUnitId = (pAVar1->fields).RewardedAdUnitId;
    pRVar2 = (RewardedAd *)func_?(TypeInfo__GoogleMobileAds__Api__RewardedAd);
    GoogleMobileAds::Api::RewardedAd::RewardedAd__ctor(pRVar2,adUnitId,(MethodInfo *)0x0);
    (this->fields).rewardedAd = pRVar2;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__GoogleMobileAdsDemoScript__HandleRewardedAdLoaded_System__Object__System__EventArgs_
               ,
               MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
              );
    if (pRVar2 != (RewardedAd *)0x0) {
      GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnAdLoaded
                (pRVar2,(EventHandler_1_EventArgs_ *)pUVar3,(MethodInfo *)0x0);
      pRVar2 = (this->fields).rewardedAd;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__GoogleMobileAdsDemoScript__HandleRewardedAdFailedToLoad_System__Object__GoogleMobileAds__Api__AdErrorEventArgs_
                 ,
                 MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>__EventHandler_System__Object__void__
                );
      if (pRVar2 != (RewardedAd *)0x0) {
        GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnAdFailedToLoad
                  (pRVar2,(EventHandler_1_GoogleMobileAds_Api_AdErrorEventArgs_ *)pUVar3,
                   (MethodInfo *)0x0);
        pRVar2 = (this->fields).rewardedAd;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__GoogleMobileAdsDemoScript__HandleRewardedAdOpening_System__Object__System__EventArgs_
                   ,
                   MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                  );
        if (pRVar2 != (RewardedAd *)0x0) {
          GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnAdOpening
                    (pRVar2,(EventHandler_1_EventArgs_ *)pUVar3,(MethodInfo *)0x0);
          pRVar2 = (this->fields).rewardedAd;
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(
                                     TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>
                                     );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this,
                     MethodInfo__GoogleMobileAdsDemoScript__HandleRewardedAdFailedToShow_System__Object__GoogleMobileAds__Api__AdErrorEventArgs_
                     ,
                     MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>__EventHandler_System__Object__void__
                    );
          if (pRVar2 != (RewardedAd *)0x0) {
            GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnAdFailedToShow
                      (pRVar2,(EventHandler_1_GoogleMobileAds_Api_AdErrorEventArgs_ *)pUVar3,
                       (MethodInfo *)0x0);
            pRVar2 = (this->fields).rewardedAd;
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__EventHandler<GoogleMobileAds::Api::Reward>
                                       );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)this,
                       MethodInfo__GoogleMobileAdsDemoScript__HandleUserEarnedReward_System__Object__GoogleMobileAds__Api__Reward_
                       ,
                       MethodInfo__System__EventHandler<GoogleMobileAds::Api::Reward>__EventHandler_System__Object__void__
                      );
            if (pRVar2 != (RewardedAd *)0x0) {
              GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnUserEarnedReward
                        (pRVar2,(EventHandler_1_GoogleMobileAds_Api_Reward_ *)pUVar3,
                         (MethodInfo *)0x0);
              pRVar2 = (this->fields).rewardedAd;
              pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar3,(Object *)this,
                         MethodInfo__GoogleMobileAdsDemoScript__HandleRewardedAdClosed_System__Object__System__EventArgs_
                         ,
                         MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                        );
              if (pRVar2 != (RewardedAd *)0x0) {
                GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnAdClosed
                          (pRVar2,(EventHandler_1_EventArgs_ *)pUVar3,(MethodInfo *)0x0);
                request = GoogleMobileAdsDemoScript_CreateAdRequest(this,(MethodInfo *)0x0);
                pRVar2 = (this->fields).rewardedAd;
                if (pRVar2 != (RewardedAd *)0x0) {
                  GoogleMobileAds::Api::RewardedAd::RewardedAd_LoadAd
                            (pRVar2,request,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleAdClosed(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::GoogleMobileAdsDemoScript_HandleAdClosed
               (GoogleMobileAdsDemoScript *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  GoogleMobileAdsDemoScript_Print
            (this,StringLiteral_HandleAdClosed_event_received,(MethodInfo *)0x0);
  return;
}


/* Void HandleAdFailedToLoad(Object, AdFailedToLoadEventArgs) */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::GoogleMobileAdsDemoScript_HandleAdFailedToLoad
               (GoogleMobileAdsDemoScript *this,Object *sender,AdFailedToLoadEventArgs *args,
               MethodInfo *method)

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
                       (StringLiteral_HandleFailedToReceiveAd_event_re,pSVar1,(MethodInfo *)0x0);
    GoogleMobileAdsDemoScript_Print(this,pSVar1,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleAdLeftApplication(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::
     GoogleMobileAdsDemoScript_HandleAdLeftApplication
               (GoogleMobileAdsDemoScript *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  GoogleMobileAdsDemoScript_Print
            (this,StringLiteral_HandleAdLeftApplication_event_re,(MethodInfo *)0x0);
  return;
}


/* Void HandleAdLoaded(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::GoogleMobileAdsDemoScript_HandleAdLoaded
               (GoogleMobileAdsDemoScript *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  GoogleMobileAdsDemoScript_Print
            (this,StringLiteral_HandleAdLoaded_event_received,(MethodInfo *)0x0);
  return;
}


/* Void HandleAdOpened(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::GoogleMobileAdsDemoScript_HandleAdOpened
               (GoogleMobileAdsDemoScript *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  GoogleMobileAdsDemoScript_Print
            (this,StringLiteral_HandleAdOpened_event_received,(MethodInfo *)0x0);
  return;
}


/* Void HandleInterstitialClosed(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::
     GoogleMobileAdsDemoScript_HandleInterstitialClosed
               (GoogleMobileAdsDemoScript *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  GoogleMobileAdsDemoScript_Print
            (this,StringLiteral_HandleInterstitialClosed_event_r,(MethodInfo *)0x0);
  return;
}


/* Void HandleInterstitialFailedToLoad(Object, AdFailedToLoadEventArgs) */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::
     GoogleMobileAdsDemoScript_HandleInterstitialFailedToLoad
               (GoogleMobileAdsDemoScript *this,Object *sender,AdFailedToLoadEventArgs *args,
               MethodInfo *method)

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
    GoogleMobileAdsDemoScript_Print(this,pSVar1,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleInterstitialLeftApplication(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::
     GoogleMobileAdsDemoScript_HandleInterstitialLeftApplication
               (GoogleMobileAdsDemoScript *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  GoogleMobileAdsDemoScript_Print
            (this,StringLiteral_HandleInterstitialLeftApplicatio,(MethodInfo *)0x0);
  return;
}


/* Void HandleInterstitialLoaded(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::
     GoogleMobileAdsDemoScript_HandleInterstitialLoaded
               (GoogleMobileAdsDemoScript *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  GoogleMobileAdsDemoScript_Print
            (this,StringLiteral_HandleInterstitialLoaded_event_r,(MethodInfo *)0x0);
  return;
}


/* Void HandleInterstitialOpened(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::
     GoogleMobileAdsDemoScript_HandleInterstitialOpened
               (GoogleMobileAdsDemoScript *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  GoogleMobileAdsDemoScript_Print
            (this,StringLiteral_HandleInterstitialOpened_event_r,(MethodInfo *)0x0);
  return;
}


/* Void HandleRewardedAdClosed(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::
     GoogleMobileAdsDemoScript_HandleRewardedAdClosed
               (GoogleMobileAdsDemoScript *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  GoogleMobileAdsDemoScript_Print
            (this,StringLiteral_HandleRewardedAdClosed_event_rec,(MethodInfo *)0x0);
  return;
}


/* Void HandleRewardedAdFailedToLoad(Object, AdErrorEventArgs) */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::
     GoogleMobileAdsDemoScript_HandleRewardedAdFailedToLoad
               (GoogleMobileAdsDemoScript *this,Object *sender,AdErrorEventArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (args != (AdErrorEventArgs *)0x0) {
    pSVar1 = (String *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)args,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_HandleRewardedAdFailedToLoad_eve,pSVar1,(MethodInfo *)0x0);
    GoogleMobileAdsDemoScript_Print(this,pSVar1,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleRewardedAdFailedToShow(Object, AdErrorEventArgs) */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::
     GoogleMobileAdsDemoScript_HandleRewardedAdFailedToShow
               (GoogleMobileAdsDemoScript *this,Object *sender,AdErrorEventArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (args != (AdErrorEventArgs *)0x0) {
    pSVar1 = (String *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)args,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_HandleRewardedAdFailedToShow_eve,pSVar1,(MethodInfo *)0x0);
    GoogleMobileAdsDemoScript_Print(this,pSVar1,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleRewardedAdLoaded(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::
     GoogleMobileAdsDemoScript_HandleRewardedAdLoaded
               (GoogleMobileAdsDemoScript *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  GoogleMobileAdsDemoScript_Print
            (this,StringLiteral_HandleRewardedAdLoaded_event_rec,(MethodInfo *)0x0);
  return;
}


/* Void HandleRewardedAdOpening(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::
     GoogleMobileAdsDemoScript_HandleRewardedAdOpening
               (GoogleMobileAdsDemoScript *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  GoogleMobileAdsDemoScript_Print
            (this,StringLiteral_HandleRewardedAdOpening_event_re,(MethodInfo *)0x0);
  return;
}


/* Void HandleUserEarnedReward(Object, Reward) */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::
     GoogleMobileAdsDemoScript_HandleUserEarnedReward
               (GoogleMobileAdsDemoScript *this,Object *sender,Reward *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (args != (Reward *)0x0) {
    pSVar1 = (String *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)args,(MethodInfo *)0x0);
    GoogleMobileAds::Api::Reward::Reward_get_Amount(args,(MethodInfo *)0x0);
    str1 = (String *)func_?(&stack0xfffffff4,0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_HandleRewardedAdRewarded_event_r,str1,::StringLiteral__,pSVar1
                        ,(MethodInfo *)0x0);
    GoogleMobileAdsDemoScript_Print(this,pSVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnGUI() */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::GoogleMobileAdsDemoScript_OnGUI
               (GoogleMobileAdsDemoScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIStack_1 = (Il2CppClass *)0x0;
  pIStack_2 = (Il2CppClass *)0x0;
  pIStack_3 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
  p_Stack_3c = (Il2CppMetadataGenericContainerHandle)0x0;
  pIStack_4 = (Il2CppRGCTXData *)0x0;
  ppIStack_5 = (Il2CppClass **)0x0;
  pvStack_6 = (void *)0x0;
  fStack_7 = 0.0;
  pIStack_8 = (Il2CppClass *)0x0;
  pIStack_9 = (Il2CppClass *)0x0;
  pIStack_10 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
  p_Stack_5c = (Il2CppMetadataGenericContainerHandle)0x0;
  pFStack_11 = (FieldInfo *)0x0;
  pEStack_12 = (EventInfo *)0x0;
  pPStack_13 = (PropertyInfo *)0x0;
  ppMStack_14 = (MethodInfo **)0x0;
  _Stack_a8.dummy = (Il2CppClass **)0x0;
  pGVar15 = (GUIStyle *)func_?(TypeInfo__UnityEngine__GUIStyle);
  UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyle::GUIStyle__ctor(pGVar15,(MethodInfo *)0x0);
  iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  iVar17 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  func_?(&pIStack_1,0,0,(float)iVar16,(float)iVar17);
  if (pGVar15 != (GUIStyle *)0x0) {
    UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyle::GUIStyle_set_alignment
              (pGVar15,TextAnchor__Enum_LowerRight,(MethodInfo *)0x0);
    iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyle::GUIStyle_set_fontSize
              (pGVar15,(int)((double)iVar16 * _UNK_?),(MethodInfo *)0x0);
    this_01 = UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyle::GUIStyle_get_normal
                        (pGVar15,(MethodInfo *)0x0);
    uStack_18 = 0;
    uStack_19 = 0;
    uStack_20 = 0;
    fStack_21 = 0.0;
    func_?();
    if (this_01 != (GUIStyleState *)0x0) {
      value.g = (float)uStack_19;
      value.r = (float)uStack_18;
      value.b = (float)uStack_20;
      value.a = fStack_21;
      UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyleState::GUIStyleState_set_textColor
                (this_01,value,(MethodInfo *)0x0);
      fStack_22 = _UNK_? / (this->fields).deltaTime;
      arg0 = (Object *)func_?(TypeInfo__System__Single);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar23 = mscorlib.dll::System::String::String_Format
                         (StringLiteral__0_0___fps,arg0,(MethodInfo *)0x0);
      _Stack_24 = (_union_86)pIStack_1;
      pIStack_24 = pIStack_2;
      _Stack_1c = (_union_86)pIStack_3;
      pIStack_25 = (Il2CppClass *)p_Stack_3c;
      if ((((uint)(TypeInfo__UnityEngine__GUI->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__GUI->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__GUI);
      }
      position.m_YMin = (float)pIStack_24;
      position.m_XMin = (float)_Stack_24;
      position.m_Width = (float)_Stack_1c;
      position.m_Height = (float)pIStack_25;
      UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_Label
                (position,pSVar23,pGVar15,(MethodInfo *)0x0);
      this_02 = UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_get_skin((MethodInfo *)0x0);
      if (this_02 != (GUISkin *)0x0) {
        pGVar15 = (GUIStyle *)
                 MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           ((KogamaSettingNumericBase_1_System_Single_ *)this_02,(MethodInfo *)0x0);
        iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0)
        ;
        if (pGVar15 != (GUIStyle *)0x0) {
          UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyle::GUIStyle_set_fontSize
                    (pGVar15,(int)((float)iVar16 * _UNK_?),(MethodInfo *)0x0);
          iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width
                            ((MethodInfo *)0x0);
          pIStack_26 = (Il2CppClass *)((float)iVar16 * _UNK_?);
          iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                            ((MethodInfo *)0x0);
          pIStack_27 = (Il2CppClass *)((float)iVar16 * _UNK_?);
          iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width
                            ((MethodInfo *)0x0);
          fStack_28 = (float)iVar16 * _UNK_?;
          iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width
                            ((MethodInfo *)0x0);
          pIStack_29 = (Il2CppRuntimeInterfaceOffsetPair *)((float)iVar16 * _UNK_?);
          UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
          func_?();
          position_07.m_YMin = (float)ppIStack_5;
          position_07.m_XMin = (float)pIStack_4;
          position_07.m_Width = (float)pvStack_6;
          position_07.m_Height = fStack_7;
          bVar30 = UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_Button
                            (position_07,StringLiteral_Requestu000ABanner,(MethodInfo *)0x0);
          if (bVar30 != 0) {
            _Stack_a8.dummy = &UNK_?;
            GoogleMobileAdsDemoScript_RequestBanner(this,(MethodInfo *)0x0);
          }
          iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                            ((MethodInfo *)0x0);
          pIVar31 = pIStack_26;
          _Stack_a8.dummy = &pIStack_8;
          _Var10 = (_union_86)((float)iVar16 * _UNK_?);
          fVar32 = fStack_28;
          pIVar33 = pIStack_27;
          func_?();
          _Stack_24 = (_union_86)pIStack_8;
          pIStack_24 = pIStack_9;
          _Stack_1c = (_union_86)pIStack_10;
          pIStack_25 = (Il2CppClass *)p_Stack_5c;
          if ((((uint)(TypeInfo__UnityEngine__GUI->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__GUI->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__GUI);
          }
          position_00.m_YMin = (float)pIStack_24;
          position_00.m_XMin = (float)_Stack_24;
          position_00.m_Width = (float)_Stack_1c;
          position_00.m_Height = (float)pIStack_25;
          bVar30 = UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_Button
                            (position_00,StringLiteral_Destroyu000ABanner,(MethodInfo *)0x0);
          if (bVar30 != 0) {
            this_00 = (this->fields).bannerView;
            if (this_00 == (BannerView *)0x0) goto code_?;
            GoogleMobileAds::Api::BannerView::BannerView_Destroy(this_00,(MethodInfo *)0x0);
          }
          iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                            ((MethodInfo *)0x0);
          func_?(&pFStack_11,fStack_28,(float)iVar16 * _UNK_?,pIStack_26);
          _Stack_24 = (_union_86)pFStack_11;
          pIStack_24 = (Il2CppClass *)pEStack_12;
          _Stack_1c = (_union_86)pPStack_13;
          pIStack_25 = (Il2CppClass *)ppMStack_14;
          if ((((uint)(TypeInfo__UnityEngine__GUI->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__GUI->_1).cctor_started == 0)) {
            func_?();
          }
          position_05.m_YMin = (float)pIStack_24;
          position_05.m_XMin = (float)_Stack_24;
          position_05.m_Width = (float)_Stack_1c;
          position_05.m_Height = (float)pIStack_25;
          bVar30 = UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_Button
                            (position_05,StringLiteral_Requestu000AInterstitial,(MethodInfo *)0x0);
          if (bVar30 != 0) {
            GoogleMobileAdsDemoScript_RequestInterstitial(this,(MethodInfo *)0x0);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
          func_?();
          _Stack_24 = (_union_86)0x0;
          pIStack_24 = (Il2CppClass *)0x0;
          _Stack_1c = (_union_86)0x0;
          pIStack_25 = (Il2CppClass *)0x0;
          if ((((uint)(TypeInfo__UnityEngine__GUI->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__GUI->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__GUI);
          }
          position_01.m_YMin = (float)pIStack_24;
          position_01.m_XMin = (float)_Stack_24;
          position_01.m_Width = (float)_Stack_1c;
          position_01.m_Height = (float)pIStack_25;
          bVar30 = UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_Button
                            (position_01,StringLiteral_Showu000AInterstitial,(MethodInfo *)0x0);
          if (bVar30 != 0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pIVar34 = (this->fields).interstitial;
            if (pIVar34 == (InterstitialAd *)0x0) goto code_?;
            bVar30 = GoogleMobileAds::Api::InterstitialAd::InterstitialAd_IsLoaded
                              (pIVar34,(MethodInfo *)0x0);
            if (bVar30 == 0) {
              GoogleMobileAdsDemoScript_Print
                        (this,StringLiteral_Interstitial_is_not_ready_yet,(MethodInfo *)0x0);
            }
            else {
              pIVar34 = (this->fields).interstitial;
              if (pIVar34 == (InterstitialAd *)0x0) goto code_?;
              GoogleMobileAds::Api::InterstitialAd::InterstitialAd_Show(pIVar34,(MethodInfo *)0x0);
            }
          }
          UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
          func_?();
          pIStack_24 = (Il2CppClass *)0x0;
          _Stack_1c = (_union_86)0x0;
          pIStack_25 = (Il2CppClass *)0x0;
          _Stack_24 = (_union_86)pIVar33;
          if ((((uint)(TypeInfo__UnityEngine__GUI->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__GUI->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__GUI);
          }
          position_02.m_YMin = (float)pIStack_24;
          position_02.m_XMin = (float)_Stack_24;
          position_02.m_Width = (float)_Stack_1c;
          position_02.m_Height = (float)pIStack_25;
          bVar30 = UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_Button
                            (position_02,StringLiteral_Destroyu000AInterstitial,(MethodInfo *)0x0);
          if (bVar30 != 0) {
            pIVar34 = (this->fields).interstitial;
            if (pIVar34 == (InterstitialAd *)0x0) goto code_?;
            GoogleMobileAds::Api::InterstitialAd::InterstitialAd_Destroy(pIVar34,(MethodInfo *)0x0);
          }
          iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                            ((MethodInfo *)0x0);
          func_?(&_Stack_a8,pIStack_29,(float)iVar16 * _UNK_?,pIStack_26);
          _Stack_24 = _Stack_a8;
          pIStack_25 = pIVar31;
          pIStack_24 = (Il2CppClass *)fVar32;
          _Stack_1c = _Var10;
          if ((((uint)(TypeInfo__UnityEngine__GUI->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__GUI->_1).cctor_started == 0)) {
            func_?();
          }
          position_06.m_YMin = (float)pIStack_24;
          position_06.m_XMin = (float)_Stack_24.dummy;
          position_06.m_Width = (float)_Stack_1c.dummy;
          position_06.m_Height = (float)pIStack_25;
          bVar30 = UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_Button
                            (position_06,StringLiteral_Requestu000ARewarded_Ad,(MethodInfo *)0x0);
          if (bVar30 != 0) {
            GoogleMobileAdsDemoScript_CreateAndLoadRewardedAd(this,(MethodInfo *)0x0);
          }
          iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                            ((MethodInfo *)0x0);
          pIVar31 = (Il2CppClass *)&stack0xffffff48;
          p_Var11 = (Il2CppMetadataGenericContainerHandle)((float)iVar16 * _UNK_?);
          pIVar33 = (Il2CppClass *)&UNK_?;
          pIVar35 = pIStack_29;
          pIVar36 = pIStack_26;
          pIVar37 = pIStack_27;
          func_?();
          _Stack_1c = (_union_86)0x0;
          _Stack_24 = (_union_86)pIVar36;
          pIStack_24 = pIVar37;
          if ((((uint)(TypeInfo__UnityEngine__GUI->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__GUI->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__GUI);
          }
          position_04.m_YMin = (float)pIStack_24;
          position_04.m_XMin = (float)_Stack_24;
          position_04.m_Width = (float)_Stack_1c;
          position_04.m_Height = (float)pIStack_25;
          bVar30 = UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_Button
                            (position_04,StringLiteral_Showu000ARewarded_Ad,(MethodInfo *)0x0);
          if (bVar30 != 0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pRVar38 = (this->fields).rewardedAd;
            if (pRVar38 == (RewardedAd *)0x0) goto code_?;
            bVar30 = GoogleMobileAds::Api::RewardedAd::RewardedAd_IsLoaded(pRVar38,(MethodInfo *)0x0);
            if (bVar30 == 0) {
              GoogleMobileAdsDemoScript_Print
                        (this,StringLiteral_Rewarded_ad_is_not_ready_yet,(MethodInfo *)0x0);
            }
            else {
              pRVar38 = (this->fields).rewardedAd;
              if (pRVar38 == (RewardedAd *)0x0) goto code_?;
              pSVar23 = GoogleMobileAds::Api::RewardedAd::RewardedAd_MediationAdapterClassName
                                 (pRVar38,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                pIVar33 = (Il2CppClass *)TypeInfo__System__String;
                func_?();
              }
              pSVar23 = mscorlib.dll::System::String::String_Concat_2
                                 (StringLiteral_this_rewardedAd_MediationAdapter,pSVar23,
                                  (MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)pSVar23,(MethodInfo *)0x0);
              pRVar38 = (this->fields).rewardedAd;
              if (pRVar38 == (RewardedAd *)0x0) goto code_?;
              GoogleMobileAds::Api::RewardedAd::RewardedAd_Show(pRVar38,(MethodInfo *)0x0);
            }
          }
          UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
          fVar32 = 0.0;
          func_?(&stack0xffffff38,pIStack_29);
          _Stack_24 = (_union_86)pIVar33;
          pIStack_24 = pIVar31;
          _Stack_1c = (_union_86)pIVar35;
          pIStack_25 = (Il2CppClass *)p_Var11;
          if ((((uint)(TypeInfo__UnityEngine__GUI->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__GUI->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__GUI);
          }
          position_03.m_YMin = (float)pIStack_24;
          position_03.m_XMin = (float)_Stack_24;
          position_03.m_Width = (float)_Stack_1c;
          position_03.m_Height = (float)pIStack_25;
          bVar30 = UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_Button
                            (position_03,StringLiteral_Showu000ATest_suite,(MethodInfo *)0x0);
          if (bVar30 != 0) {
            if ((((uint)(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->
                        vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->_1).
                cctor_started == 0)) {
              func_?();
            }
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((((uint)(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->
                        vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->_1).
                cctor_started == 0)) {
              func_?();
            }
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((((uint)(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->
                        vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->_1).
                cctor_started == 0)) {
              func_?();
            }
            pMVar39 = TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->
                     static_fields->instance;
            if (pMVar39 == (MediationTestSuite *)0x0) goto code_?;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((pMVar39->fields).client == (IMediationTestClient *)0x0) goto code_?;
            func_?(4,
                            TypeInfo__GoogleMobileAdsMediationTestSuite__Common__IMediationTestClient
                           );
          }
          iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                            ((MethodInfo *)0x0);
          iVar17 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                            ((MethodInfo *)0x0);
          uVar40 = 0;
          fVar41 = (float)iVar17 * _UNK_?;
          func_?(&stack0xffffff28,pIStack_29,(float)iVar16 * _UNK_?);
          pGVar15 = (GUIStyle *)func_?(TypeInfo__UnityEngine__GUIStyle);
          UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyle::GUIStyle__ctor
                    (pGVar15,(MethodInfo *)0x0);
          if (pGVar15 != (GUIStyle *)0x0) {
            UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyle::GUIStyle_set_wordWrap
                      (pGVar15,1,(MethodInfo *)0x0);
            UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyle::GUIStyle_set_fontStyle
                      (pGVar15,FontStyle__Enum_Bold,(MethodInfo *)0x0);
            uVar42 = 0;
            UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyle::GUIStyle_set_fontSize
                      (pGVar15,0x14,(MethodInfo *)0x0);
            _Stack_24 = (_union_86)uVar42;
            pIStack_24 = (Il2CppClass *)fVar41;
            _Stack_1c = (_union_86)uVar40;
            pIStack_25 = (Il2CppClass *)fVar32;
            if ((((uint)(TypeInfo__GoogleMobileAdsDemoScript->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__GoogleMobileAdsDemoScript->_1).cctor_started == 0)) {
              func_?();
            }
            pSVar23 = TypeInfo__GoogleMobileAdsDemoScript->static_fields->outputMessage;
            if ((((uint)(TypeInfo__UnityEngine__GUI->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__GUI->_1).cctor_started == 0)) {
              func_?();
            }
            position_08.m_YMin = (float)pIStack_24;
            position_08.m_XMin = (float)_Stack_24;
            position_08.m_Width = (float)_Stack_1c;
            position_08.m_Height = (float)pIStack_25;
            UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_Label
                      (position_08,pSVar23,pGVar15,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar43 = (code *)swi(3);
  (*pcVar43)();
  return;
}


/* Void Print(String) */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::GoogleMobileAdsDemoScript_Print
               (GoogleMobileAdsDemoScript *this,String *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAdsDemoScript->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAdsDemoScript->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAdsDemoScript);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAdsDemoScript->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAdsDemoScript->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAdsDemoScript);
  }
  TypeInfo__GoogleMobileAdsDemoScript->static_fields->outputMessage = s;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print
            ((Object *)s,(MethodInfo *)0x0);
  return;
}


/* Void RequestBanner() */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::GoogleMobileAdsDemoScript_RequestBanner
               (GoogleMobileAdsDemoScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).bannerView;
  if (pBVar1 != (BannerView *)0x0) {
    GoogleMobileAds::Api::BannerView::BannerView_Destroy(pBVar1,(MethodInfo *)0x0);
  }
  pAVar2 = Assets::Scripts::AdIntegration::Mobile::MobileAdManagerCredentials::
           MobileAdManagerCredentials_GetAdMobCredentials((MethodInfo *)0x0);
  if (pAVar2 != (AdMobCredentials *)0x0) {
    adUnitId = (pAVar2->fields).BannerAdUnitId;
    if ((((uint)(TypeInfo__GoogleMobileAds__Api__AdSize->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__GoogleMobileAds__Api__AdSize->_1).cctor_started == 0)) {
      func_?(TypeInfo__GoogleMobileAds__Api__AdSize);
    }
    adSize = TypeInfo__GoogleMobileAds__Api__AdSize->static_fields->SmartBanner;
    pBVar1 = (BannerView *)func_?(TypeInfo__GoogleMobileAds__Api__BannerView);
    GoogleMobileAds::Api::BannerView::BannerView__ctor
              (pBVar1,adUnitId,adSize,AdPosition__Enum_Top,(MethodInfo *)0x0);
    (this->fields).bannerView = pBVar1;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__GoogleMobileAdsDemoScript__HandleAdLoaded_System__Object__System__EventArgs_
               ,
               MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
              );
    if (pBVar1 != (BannerView *)0x0) {
      GoogleMobileAds::Api::BannerView::BannerView_add_OnAdLoaded
                (pBVar1,(EventHandler_1_EventArgs_ *)pUVar3,(MethodInfo *)0x0);
      pBVar1 = (this->fields).bannerView;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__GoogleMobileAdsDemoScript__HandleAdFailedToLoad_System__Object__GoogleMobileAds__Api__AdFailedToLoadEventArgs_
                 ,
                 MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>__EventHandler_System__Object__void__
                );
      if (pBVar1 != (BannerView *)0x0) {
        GoogleMobileAds::Api::BannerView::BannerView_add_OnAdFailedToLoad
                  (pBVar1,(EventHandler_1_GoogleMobileAds_Api_AdFailedToLoadEventArgs_ *)pUVar3,
                   (MethodInfo *)0x0);
        pBVar1 = (this->fields).bannerView;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__GoogleMobileAdsDemoScript__HandleAdOpened_System__Object__System__EventArgs_
                   ,
                   MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                  );
        if (pBVar1 != (BannerView *)0x0) {
          GoogleMobileAds::Api::BannerView::BannerView_add_OnAdOpening
                    (pBVar1,(EventHandler_1_EventArgs_ *)pUVar3,(MethodInfo *)0x0);
          pBVar1 = (this->fields).bannerView;
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this,
                     MethodInfo__GoogleMobileAdsDemoScript__HandleAdClosed_System__Object__System__EventArgs_
                     ,
                     MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                    );
          if (pBVar1 != (BannerView *)0x0) {
            GoogleMobileAds::Api::BannerView::BannerView_add_OnAdClosed
                      (pBVar1,(EventHandler_1_EventArgs_ *)pUVar3,(MethodInfo *)0x0);
            pBVar1 = (this->fields).bannerView;
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)this,
                       MethodInfo__GoogleMobileAdsDemoScript__HandleAdLeftApplication_System__Object__System__EventArgs_
                       ,
                       MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                      );
            if (pBVar1 != (BannerView *)0x0) {
              GoogleMobileAds::Api::BannerView::BannerView_add_OnAdLeavingApplication
                        (pBVar1,(EventHandler_1_EventArgs_ *)pUVar3,(MethodInfo *)0x0);
              pBVar1 = (this->fields).bannerView;
              request = GoogleMobileAdsDemoScript_CreateAdRequest(this,(MethodInfo *)0x0);
              if (pBVar1 != (BannerView *)0x0) {
                GoogleMobileAds::Api::BannerView::BannerView_LoadAd
                          (pBVar1,request,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RequestInterstitial() */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::GoogleMobileAdsDemoScript_RequestInterstitial
               (GoogleMobileAdsDemoScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = Assets::Scripts::AdIntegration::Mobile::MobileAdManagerCredentials::
           MobileAdManagerCredentials_GetAdMobCredentials((MethodInfo *)0x0);
  if (pAVar1 != (AdMobCredentials *)0x0) {
    adUnitId = (pAVar1->fields).InterstitialAdUnitId;
    pIVar2 = (this->fields).interstitial;
    if (pIVar2 != (InterstitialAd *)0x0) {
      GoogleMobileAds::Api::InterstitialAd::InterstitialAd_Destroy(pIVar2,(MethodInfo *)0x0);
    }
    pIVar2 = (InterstitialAd *)func_?(TypeInfo__GoogleMobileAds__Api__InterstitialAd);
    GoogleMobileAds::Api::InterstitialAd::InterstitialAd__ctor(pIVar2,adUnitId,(MethodInfo *)0x0);
    (this->fields).interstitial = pIVar2;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__GoogleMobileAdsDemoScript__HandleInterstitialLoaded_System__Object__System__EventArgs_
               ,
               MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
              );
    if (pIVar2 != (InterstitialAd *)0x0) {
      GoogleMobileAds::Api::InterstitialAd::InterstitialAd_add_OnAdLoaded
                (pIVar2,(EventHandler_1_EventArgs_ *)pUVar3,(MethodInfo *)0x0);
      pIVar2 = (this->fields).interstitial;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__GoogleMobileAdsDemoScript__HandleInterstitialFailedToLoad_System__Object__GoogleMobileAds__Api__AdFailedToLoadEventArgs_
                 ,
                 MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>__EventHandler_System__Object__void__
                );
      if (pIVar2 != (InterstitialAd *)0x0) {
        GoogleMobileAds::Api::InterstitialAd::InterstitialAd_add_OnAdFailedToLoad
                  (pIVar2,(EventHandler_1_GoogleMobileAds_Api_AdFailedToLoadEventArgs_ *)pUVar3,
                   (MethodInfo *)0x0);
        pIVar2 = (this->fields).interstitial;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__GoogleMobileAdsDemoScript__HandleInterstitialOpened_System__Object__System__EventArgs_
                   ,
                   MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                  );
        if (pIVar2 != (InterstitialAd *)0x0) {
          GoogleMobileAds::Api::InterstitialAd::InterstitialAd_add_OnAdOpening
                    (pIVar2,(EventHandler_1_EventArgs_ *)pUVar3,(MethodInfo *)0x0);
          pIVar2 = (this->fields).interstitial;
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this,
                     MethodInfo__GoogleMobileAdsDemoScript__HandleInterstitialClosed_System__Object__System__EventArgs_
                     ,
                     MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                    );
          if (pIVar2 != (InterstitialAd *)0x0) {
            GoogleMobileAds::Api::InterstitialAd::InterstitialAd_add_OnAdClosed
                      (pIVar2,(EventHandler_1_EventArgs_ *)pUVar3,(MethodInfo *)0x0);
            pIVar2 = (this->fields).interstitial;
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)this,
                       MethodInfo__GoogleMobileAdsDemoScript__HandleInterstitialLeftApplication_System__Object__System__EventArgs_
                       ,
                       MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                      );
            if (pIVar2 != (InterstitialAd *)0x0) {
              GoogleMobileAds::Api::InterstitialAd::InterstitialAd_add_OnAdLeavingApplication
                        (pIVar2,(EventHandler_1_EventArgs_ *)pUVar3,(MethodInfo *)0x0);
              pIVar2 = (this->fields).interstitial;
              request = GoogleMobileAdsDemoScript_CreateAdRequest(this,(MethodInfo *)0x0);
              if (pIVar2 != (InterstitialAd *)0x0) {
                GoogleMobileAds::Api::InterstitialAd::InterstitialAd_LoadAd
                          (pIVar2,request,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowInterstitial() */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::GoogleMobileAdsDemoScript_ShowInterstitial
               (GoogleMobileAdsDemoScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).interstitial;
  if (this_00 != (InterstitialAd *)0x0) {
    bVar1 = GoogleMobileAds::Api::InterstitialAd::InterstitialAd_IsLoaded(this_00,(MethodInfo *)0x0)
    ;
    if (bVar1 == 0) {
      GoogleMobileAdsDemoScript_Print
                (this,StringLiteral_Interstitial_is_not_ready_yet,(MethodInfo *)0x0);
      return;
    }
    if ((this->fields).interstitial != (InterstitialAd *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (*(int *)(in_stack_2 + 8) != 0) {
        func_?(0xd,TypeInfo__GoogleMobileAds__Common__IInterstitialClient);
        return;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowRewardedAd() */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::GoogleMobileAdsDemoScript_ShowRewardedAd
               (GoogleMobileAdsDemoScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).rewardedAd;
  if (pRVar1 != (RewardedAd *)0x0) {
    bVar2 = GoogleMobileAds::Api::RewardedAd::RewardedAd_IsLoaded(pRVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      GoogleMobileAdsDemoScript_Print
                (this,StringLiteral_Rewarded_ad_is_not_ready_yet,(MethodInfo *)0x0);
      return;
    }
    pRVar1 = (this->fields).rewardedAd;
    if (pRVar1 != (RewardedAd *)0x0) {
      pSVar3 = GoogleMobileAds::Api::RewardedAd::RewardedAd_MediationAdapterClassName
                         (pRVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_2
                         (StringLiteral_this_rewardedAd_MediationAdapter,pSVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      if ((this->fields).rewardedAd != (RewardedAd *)0x0) {
        if (cRam_? == '\0') {
          iStack4 = _UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        iStack4 = *(int *)(in_stack_5 + 8);
        if (iStack4 != 0) {
          pIStack6 = TypeInfo__GoogleMobileAds__Common__IRewardedAdClient;
          puStack7 = (undefined *)0x11;
          func_?();
          return;
        }
        iStack4 = 0;
        func_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  pIStack6 = (IRewardedAdClient__Class *)0x0;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::GoogleMobileAdsDemoScript_Start
               (GoogleMobileAdsDemoScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__MobileAds->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__GoogleMobileAds__Api__MobileAds->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__MobileAds);
  }
  GoogleMobileAds::Api::MobileAds::MobileAds_SetiOSAppPauseOnBackground(1,(MethodInfo *)0x0);
  pAVar1 = Assets::Scripts::AdIntegration::Mobile::MobileAdManagerCredentials::
           MobileAdManagerCredentials_GetAdMobCredentials((MethodInfo *)0x0);
  if (pAVar1 != (AdMobCredentials *)0x0) {
    GoogleMobileAds::Api::MobileAds::MobileAds_Initialize((pAVar1->fields).AppId,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::GoogleMobileAdsDemoScript_Update
               (GoogleMobileAdsDemoScript *this,MethodInfo *method)

{
  fVar1 = (this->fields).deltaTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  (this->fields).deltaTime = (fVar2 - (this->fields).deltaTime) * _UNK_? + fVar1;
  return;
}


/* GoogleMobileAdsDemoScript() */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::GoogleMobileAdsDemoScript__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  TypeInfo__GoogleMobileAdsDemoScript->static_fields->outputMessage =
       TypeInfo__System__String->static_fields->Empty;
  return;
}


/* Void set_OutputMessage(String) */

void Assembly-CSharp.dll::GoogleMobileAdsDemoScript::GoogleMobileAdsDemoScript_set_OutputMessage
               (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAdsDemoScript->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAdsDemoScript->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAdsDemoScript);
    TypeInfo__GoogleMobileAdsDemoScript->static_fields->outputMessage = value;
    return;
  }
  TypeInfo__GoogleMobileAdsDemoScript->static_fields->outputMessage = value;
  return;
}

