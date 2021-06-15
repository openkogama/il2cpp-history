
/* String BoolToString(Boolean) */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
         MobileAdManager_BoolToString(bool b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral__1;
  if (b == 0) {
    pSVar1 = StringLiteral__0;
  }
  return pSVar1;
}


/* AdRequest CreateAdRequest() */

AdRequest *
Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
MobileAdManager_CreateAdRequest(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
  }
  pMVar1 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
           consentAndCompliance;
  if ((pMVar1 == (MobileAdManager_ConsentAndCompliance *)0x0) ||
     (pCVar2 = (pMVar1->fields).consentData, pCVar2 == (ConsentData *)0x0)) goto code_?;
  if ((pCVar2->fields).isChild == 0) {
code_?:
    if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0))
    {
      func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
    }
    pMVar1 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
             consentAndCompliance;
    if ((pMVar1 == (MobileAdManager_ConsentAndCompliance *)0x0) ||
       (pCVar2 = (pMVar1->fields).consentData, pCVar2 == (ConsentData *)0x0)) goto code_?;
    if ((pCVar2->fields).isChild == 0) {
code_?:
      if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals
                  .methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0
         )) {
        func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
      }
      pMVar1 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
               consentAndCompliance;
      if ((pMVar1 == (MobileAdManager_ConsentAndCompliance *)0x0) ||
         (pCVar2 = (pMVar1->fields).consentData, pCVar2 == (ConsentData *)0x0))
      goto code_?;
      if ((pCVar2->fields).isChild != 0) {
        if (pCVar2 == (ConsentData *)0x0) goto code_?;
        if ((pCVar2->fields).isEuropean != 0) {
          pAVar3 = (AdRequest_Builder *)
                   func_?(TypeInfo__GoogleMobileAds__Api__AdRequest__Builder);
          GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder__ctor(pAVar3,(MethodInfo *)0x0)
          ;
          if (pAVar3 == (AdRequest_Builder *)0x0) goto code_?;
          pAVar3 = GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_AddTestDevice
                             (pAVar3,StringLiteral__2F722B7F88436E816B98A0245E195219,
                              (MethodInfo *)0x0);
          goto code_?;
        }
      }
      pAVar3 = (AdRequest_Builder *)
               func_?(TypeInfo__GoogleMobileAds__Api__AdRequest__Builder);
      GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder__ctor(pAVar3,(MethodInfo *)0x0);
      if (pAVar3 == (AdRequest_Builder *)0x0) goto code_?;
      pAVar3 = GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_AddTestDevice
                         (pAVar3,StringLiteral__2F722B7F88436E816B98A0245E195219,(MethodInfo *)0x0);
    }
    else {
      if (pCVar2 == (ConsentData *)0x0) goto code_?;
      if ((pCVar2->fields).isAmerican == 0) goto code_?;
      pAVar3 = (AdRequest_Builder *)
               func_?(TypeInfo__GoogleMobileAds__Api__AdRequest__Builder);
      GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder__ctor(pAVar3,(MethodInfo *)0x0);
      if (pAVar3 == (AdRequest_Builder *)0x0) goto code_?;
      pAVar3 = GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_AddTestDevice
                         (pAVar3,StringLiteral__2F722B7F88436E816B98A0245E195219,(MethodInfo *)0x0);
      if (pAVar3 == (AdRequest_Builder *)0x0) goto code_?;
      pAVar3 = GoogleMobileAds::Api::AdRequest+Builder::
               AdRequest_Builder_TagForChildDirectedTreatment(pAVar3,1,(MethodInfo *)0x0);
    }
  }
  else {
    if (pCVar2 == (ConsentData *)0x0) goto code_?;
    if ((pCVar2->fields).isAmerican == 0) goto code_?;
    if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0))
    {
      func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
    }
    pMVar1 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
             consentAndCompliance;
    if ((pMVar1 == (MobileAdManager_ConsentAndCompliance *)0x0) ||
       (pCVar2 = (pMVar1->fields).consentData, pCVar2 == (ConsentData *)0x0)) goto code_?;
    if ((pCVar2->fields).isChild == 0) goto code_?;
    if (pCVar2 == (ConsentData *)0x0) goto code_?;
    if ((pCVar2->fields).isEuropean == 0) goto code_?;
    pAVar3 = (AdRequest_Builder *)
             func_?(TypeInfo__GoogleMobileAds__Api__AdRequest__Builder);
    GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder__ctor(pAVar3,(MethodInfo *)0x0);
    if (pAVar3 == (AdRequest_Builder *)0x0) goto code_?;
    pAVar3 = GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_AddTestDevice
                       (pAVar3,StringLiteral__2F722B7F88436E816B98A0245E195219,(MethodInfo *)0x0);
    if (pAVar3 == (AdRequest_Builder *)0x0) goto code_?;
    pAVar3 = GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_TagForChildDirectedTreatment
                       (pAVar3,1,(MethodInfo *)0x0);
code_?:
    if (pAVar3 == (AdRequest_Builder *)0x0) goto code_?;
    pAVar3 = GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_AddExtra
                       (pAVar3,StringLiteral_tag_for_under_age_of_consent,StringLiteral_true,
                        (MethodInfo *)0x0);
  }
  if (pAVar3 != (AdRequest_Builder *)0x0) {
    pAVar4 = GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_Build
                       (pAVar3,(MethodInfo *)0x0);
    return pAVar4;
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  pAVar4 = (AdRequest *)(*pcVar5)();
  return pAVar4;
}


/* Void Destroy() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_Destroy(MobileAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).internalAdManagerState;
  (this->fields).rewardedAdResultHandler = (MobileAdManager_RewardedAdResultHandler *)0x0;
  (this->fields).interstitialAdResultHandler = (MobileAdManager_InterstitialAdResultHandler *)0x0;
  if (pMVar1 != (MobileAdManager_InternalAdManagerState *)0x0) {
    this_00 = (pMVar1->fields).internalStateRewardedAds;
    if (this_00 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
      (this_00->fields).rewardedAdCallback =
           (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0;
      MobileAdManager+InternalStateRewardedAd::
      MobileAdManager_InternalStateRewardedAd_RemoveCallbacks(this_00,(MethodInfo *)0x0);
      (this_00->fields).rewardedAd = (RewardedAd *)0x0;
      this_01 = (pMVar1->fields).internalStateInterstitial;
      if (this_01 != (MobileAdManager_InternalStateInterstitial *)0x0) {
        MobileAdManager+InternalStateInterstitial::
        MobileAdManager_InternalStateInterstitial_DestroyInterstitial(this_01,(MethodInfo *)0x0);
        (this_01->fields).interstitialAdCallback =
             (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0;
        (this->fields).internalAdManagerState = (MobileAdManager_InternalAdManagerState *)0x0;
        goto code_?;
      }
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
code_?:
  (this->fields).isInitialized = 0;
  return;
}


/* Void InitCompleteAction(InitializationStatus) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_InitCompleteAction
               (MobileAdManager *this,InitializationStatus *initializationStatus,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  puStack_8 = (undefined4 *)&stack0xffffffa4;
  puStack_4 = &stack0xffffffa4;
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_8 = (undefined4 *)&stack0xffffffa4, puStack_4 = &stack0xffffffa4,
     (TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    puStack_8 = (undefined4 *)&stack0xffffffa4;
    puStack_4 = &stack0xffffffa4;
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_InitCompleteAction______________,(MethodInfo *)0x0);
  if ((initializationStatus != (InitializationStatus *)0x0) &&
     (this_00 = GoogleMobileAds::Api::InitializationStatus::InitializationStatus_getAdapterStatusMap
                          (initializationStatus,(MethodInfo *)0x0),
     this_00 != (Dictionary_2_System_String_GoogleMobileAds_Api_AdapterStatus_ *)0x0)) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffb0,(Dictionary_2_WinningConditionType_System_Object_ *)this_00
                        ,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_GoogleMobileAds::Api::AdapterStatus>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar9->dictionary;
    auStack_6._4_4_ = pDVar9->next;
    auStack_6._8_4_ = pDVar9->stamp;
    auStack_6._12_4_ = (pDVar9->current).key;
    auStack_6._16_4_ = (pDVar9->current).value;
    uStack_1 = 0;
    while( true ) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        *puStack_8 = 0xbf;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_GoogleMobileAds::Api::AdapterStatus>__get_Current__
                            );
      auStack_6._0_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_GoogleMobileAds::Api::AdapterStatus>__get_Value__
      ;
      pCVar11 = (Collection_1_VoxelHit_ *)func_?();
      if (pCVar11 == (Collection_1_VoxelHit_ *)0x0) break;
      pIVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(pCVar11,(MethodInfo *)0x0);
      if (pIVar12 == (IList_1_VoxelHit_ *)0x1) {
        pOVar13 = (Object__Array *)func_?();
        pCVar14 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)func_?();
        if ((pCVar14 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) ||
           (mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      (pCVar14,(MethodInfo *)0x0), pOVar13 == (Object__Array *)0x0)) break;
        func_?();
        func_?();
        pCVar11 = (Collection_1_VoxelHit_ *)func_?();
        if (pCVar11 == (Collection_1_VoxelHit_ *)0x0) break;
        pIStack_15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items(pCVar11,(MethodInfo *)0x0);
        func_?();
        func_?();
        func_?();
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogFormat
                  (StringLiteral__0____1__,pOVar13,(MethodInfo *)0x0);
      }
      else {
        pOVar13 = (Object__Array *)func_?();
        pCVar14 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)func_?();
        if ((pCVar14 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) ||
           (mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      (pCVar14,(MethodInfo *)0x0), pOVar13 == (Object__Array *)0x0)) break;
        func_?();
        func_?();
        pCVar11 = (Collection_1_VoxelHit_ *)func_?();
        if (pCVar11 == (Collection_1_VoxelHit_ *)0x0) break;
        mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
        Collection_1_VoxelHit__get_Items(pCVar11,(MethodInfo *)0x0);
        func_?();
        func_?();
        func_?();
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogErrorFormat
                  (StringLiteral__0____1__,pOVar13,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_Initialize(MobileAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isInitialized == 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    str1 = TypeInfo__System__String->static_fields->Empty;
    message = mscorlib.dll::System::String::String_Concat_2
                        (StringLiteral_AdConsent__,str1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0)
    ;
    consentData = (XPLevelLimits *)0x0;
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(str1,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      consentData = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                              (str1,
                               Assets__Scripts__AdIntegration__ConsentData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::ConsentData>_System__String_
                              );
    }
    else {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_consent_data_string_is_null_or_e,(MethodInfo *)0x0);
    }
    MobileAdManager_SetupConsentAndCompliance(this,(ConsentData *)consentData,(MethodInfo *)0x0);
    this_02 = (ScaleAnimationBase *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,in_stack_2);
    pSVar3 = (ScaleAnimationBase *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar4 = TypeInfo__System__DateTime->static_fields;
    iVar5 = *(int32_t *)((int)&(pDVar4->MinValue).ticks._ticks + 4);
    fVar6 = (float)(pDVar4->MinValue).kind;
    fVar7 = *(float *)&(pDVar4->MinValue).field_0xc;
    (pSVar3->fields)._._._._.m_CachedPtr = *(void **)&(pDVar4->MinValue).ticks._ticks;
    (pSVar3->fields).state = iVar5;
    (pSVar3->fields).originalScale.x = fVar6;
    (pSVar3->fields).originalScale.y = fVar7;
    pMVar8 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__AdLoadState;
    pSVar9 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar9,0.0,(MethodInfo *)pMVar8);
    (pSVar3->fields).originalScale.z = (float)pSVar9;
    (pSVar3->fields).target = (Transform *)0x4;
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar3,0.0,(MethodInfo *)pMVar8);
    (this_02->fields).state = (int32_t)pSVar3;
    pSVar3 = (ScaleAnimationBase *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar4 = TypeInfo__System__DateTime->static_fields;
    iVar5 = *(int32_t *)((int)&(pDVar4->MinValue).ticks._ticks + 4);
    fVar6 = (float)(pDVar4->MinValue).kind;
    fVar7 = *(float *)&(pDVar4->MinValue).field_0xc;
    (pSVar3->fields)._._._._.m_CachedPtr = *(void **)&(pDVar4->MinValue).ticks._ticks;
    (pSVar3->fields).state = iVar5;
    (pSVar3->fields).originalScale.x = fVar6;
    (pSVar3->fields).originalScale.y = fVar7;
    pMVar8 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__AdLoadState;
    pSVar9 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar9,0.0,(MethodInfo *)pMVar8);
    (pSVar3->fields).originalScale.z = (float)pSVar9;
    (pSVar3->fields).target = (Transform *)0x3;
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar3,0.0,(MethodInfo *)pMVar8);
    (this_02->fields).originalScale.x = (float)pSVar3;
    (this->fields).internalAdManagerState = (MobileAdManager_InternalAdManagerState *)this_02;
    if ((((uint)(TypeInfo__GoogleMobileAds__Api__MobileAds->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__GoogleMobileAds__Api__MobileAds->_1).cctor_started == 0)) {
      func_?();
    }
    GoogleMobileAds::Api::MobileAds::MobileAds_SetiOSAppPauseOnBackground(1,(MethodInfo *)0x0);
    this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_03,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InitCompleteAction_GoogleMobileAds__Api__InitializationStatus_
               ,
               MethodInfo__System__Action<GoogleMobileAds::Api::InitializationStatus>__Action_System__Object__void__
              );
    GoogleMobileAds::Api::MobileAds::MobileAds_Initialize_1
              ((Action_1_GoogleMobileAds_Api_InitializationStatus_ *)this_03,(MethodInfo *)0x0);
    pAVar10 = MobileAdManagerCredentials::MobileAdManagerCredentials_GetAdMobCredentials
                        ((MethodInfo *)0x0);
    if (pAVar10 != (AdMobCredentials *)0x0) {
      GoogleMobileAds::Api::MobileAds::MobileAds_Initialize
                ((pAVar10->fields).AppId,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?();
      }
      UpdateController::UpdateController_AddUpdateObject
                ((IUpdatecontrollerSubscriberUpdate *)this,
                 UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
      pMVar11 = (this->fields).internalAdManagerState;
      (this->fields).isInitialized = 1;
      if ((pMVar11 != (MobileAdManager_InternalAdManagerState *)0x0) &&
         (this_00 = (pMVar11->fields).internalStateRewardedAds,
         this_00 != (MobileAdManager_InternalStateRewardedAd *)0x0)) {
        MobileAdManager+InternalStateRewardedAd::
        MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd(this_00,(MethodInfo *)0x0);
        this_01 = (pMVar11->fields).internalStateInterstitial;
        if (this_01 != (MobileAdManager_InternalStateInterstitial *)0x0) {
          MobileAdManager+InternalStateInterstitial::
          MobileAdManager_InternalStateInterstitial_CreateAndLoadInterstitialAd
                    (this_01,(MethodInfo *)0x0);
          (pMVar11->fields).isReady = 1;
          return;
        }
      }
    }
  }
  else {
    this_04 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              (this_04,StringLiteral_AdManager_already_initialized,(MethodInfo *)0x0);
    func_?(this_04,0,
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__Initialize__
                   );
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void InitializeAdConfigSettings(AdConfigSettings) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_InitializeAdConfigSettings
               (MobileAdManager *this,AdConfigSettings *config,MethodInfo *method)

{
  if (config != (AdConfigSettings *)0x0) {
    bVar1 = SubscribableVariableBase`1[System::Boolean]::
            SubscribableVariableBase_1_System_Boolean__get_Value
                      ((SubscribableVariableBase_1_System_Boolean_ *)config,(MethodInfo *)0x0);
    (this->fields).timeoutAdAfterDelayAsUnlocked = bVar1;
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)config,
                        (MethodInfo *)0x0);
    (this->fields).timeoutSuccessDelay = (int32_t)pOVar2;
    pOVar2 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)config,(MethodInfo *)0x0);
    (this->fields).interstitialTimeoutAfterRewardedAd = (float)(int)pOVar2;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InterstitialCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_InterstitialCallback
               (MobileAdManager *this,InterstitialAdResult__Enum obj,MethodInfo *method)

{
  pMVar1 = (this->fields).interstitialAdResultHandler;
  if (pMVar1 != (MobileAdManager_InterstitialAdResultHandler *)0x0) {
    (pMVar1->fields).IsDone = 1;
    (pMVar1->fields).interstitialAdResult = obj;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RequestInterstitial(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult], AdContext)
    */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_RequestInterstitial
               (MobileAdManager *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *interstitialCallback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  object = this;
  if ((this->fields).interstitialAdResultHandler ==
      (MobileAdManager_InterstitialAdResultHandler *)0x0) {
    pIVar1 = (this->fields).adUIManager;
    if (pIVar1 != (IAdUIManager *)0x0) {
      cVar2 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1);
      if (cVar2 == '\0') {
        this = (MobileAdManager *)context;
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        piVar3 = (int *)func_?(TypeInfo__Assets__Scripts__AdIntegration__AdContext,&this);
        if (piVar3 != (int *)0x0) {
          pSVar4 = (String *)(**(code **)(*piVar3 + 0xd8))(piVar3,*(undefined4 *)(*piVar3 + 0xdc));
          puVar5 = (undefined4 *)func_?(piVar3);
          this = (MobileAdManager *)*puVar5;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar4 = mscorlib.dll::System::String::String_Concat_2
                              (StringLiteral_Ad_InterstitialRequest_,pSVar4,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).
                      Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started
              == 0)) {
            func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
          }
          MobileAdManager_SendStat(pSVar4,(MethodInfo *)0x0);
          MobileAdManager_SendStat(StringLiteral_Ad_InterstitialRequest,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
                      (this_01,IncrementStatRequestType__Enum_InterstitialAdRequest,0,
                       (MethodInfo *)0x0);
            pIVar1 = (object->fields).adUIManager;
            pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?(
                                        TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                                        );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar6,(Object *)object,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InterstitialCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                       ,
                       MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Action_System__Object__void__
                      );
            if (pIVar1 != (IAdUIManager *)0x0) {
              func_?(1,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1,
                              pUVar6);
              pIVar1 = (object->fields).adUIManager;
              method_00 = 
              TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InterstitialAdResultHandler
              ;
              this_02 = (ScaleAnimationBase *)func_?();
              ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
              (this_02->fields).originalScale.z = (float)context;
              (this_02->fields).originalScale.y = (float)pIVar1;
              (this_02->fields).state = (int32_t)interstitialCallback;
              (object->fields).interstitialAdResultHandler =
                   (MobileAdManager_InterstitialAdResultHandler *)this_02;
              pMVar7 = (object->fields).internalAdManagerState;
              pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?(
                                          TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                                          );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar6,(Object *)object,
                         MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InterstitialCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                         ,
                         MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Action_System__Object__void__
                        );
              if (pMVar7 != (MobileAdManager_InternalAdManagerState *)0x0) {
                if (cRam_? == '\0') {
                  func_?(_UNK_?);
                  cRam_? = '\x01';
                }
                if ((pMVar7->fields).isReady != 0) {
                  pMVar8 = (pMVar7->fields).internalStateRewardedAds;
                  if (pMVar8 == (MobileAdManager_InternalStateRewardedAd *)0x0)
                  goto code_?;
                  if ((pMVar8->fields).isHandlingRequest == 0) {
                    this_00 = (pMVar7->fields).internalStateInterstitial;
                    if (this_00 == (MobileAdManager_InternalStateInterstitial *)0x0)
                    goto code_?;
                    if ((this_00->fields).isHandlingRequest == 0) {
                      if ((this_00 == (MobileAdManager_InternalStateInterstitial *)0x0) ||
                         (pMVar9 = (this_00->fields).adLoadState,
                         pMVar9 == (MobileAdManager_AdLoadState *)0x0)) goto code_?;
                      if (-1 < (pMVar9->fields).loadAttempts) {
                        if (this_00 != (MobileAdManager_InternalStateInterstitial *)0x0) {
                          pIVar10 = (this_00->fields).interstitial;
                          (this_00->fields).interstitialAdCallback =
                               (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)
                               pUVar6;
                          (this_00->fields).isHandlingRequest = 1;
                          if (pIVar10 != (InterstitialAd *)0x0) {
                            bVar11 = GoogleMobileAds::Api::InterstitialAd::InterstitialAd_IsLoaded
                                              (pIVar10,(MethodInfo *)0x0);
                            if (bVar11 == 0) {
                              pMVar9 = (this_00->fields).adLoadState;
                              if (pMVar9 != (MobileAdManager_AdLoadState *)0x0) {
                                if ((pMVar9->fields).loadingAd == 0) {
                                  MobileAdManager+InternalStateInterstitial::
                                  MobileAdManager_InternalStateInterstitial_CreateAndLoadInterstitialAd
                                            (this_00,(MethodInfo *)0x0);
                                }
                                return;
                              }
                            }
                            else {
                              pIVar10 = (this_00->fields).interstitial;
                              if (pIVar10 != (InterstitialAd *)0x0) {
                                GoogleMobileAds::Api::InterstitialAd::InterstitialAd_Show
                                          (pIVar10,(MethodInfo *)0x0);
                                return;
                              }
                            }
                          }
                        }
                        goto code_?;
                      }
                    }
                  }
                }
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                          ((Object *)StringLiteral_Interstitial_ad_request_is_not_r,
                           (MethodInfo *)0x0);
                if (pUVar6 !=
                    (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)0x0) {
                  mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                            ((Action_1_UIPushOption_ *)pUVar6,UIPushOption__Enum_None,
                             MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Invoke_Assets__Scripts__AdIntegration__InterstitialAdResult_
                            );
                  return;
                }
              }
            }
          }
        }
      }
      else {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Ad_already_showing__aborting,(MethodInfo *)0x0);
        if (interstitialCallback !=
            (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
          mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                    ((Action_1_UIPushOption_ *)interstitialCallback,UIPushOption__Enum_None,
                     MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Invoke_Assets__Scripts__AdIntegration__InterstitialAdResult_
                    );
          return;
        }
      }
    }
  }
  else {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Unhandled_interstitial_ad_handle,(MethodInfo *)0x0);
    if (interstitialCallback != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0)
    {
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                ((Action_1_UIPushOption_ *)interstitialCallback,UIPushOption__Enum_None,
                 MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Invoke_Assets__Scripts__AdIntegration__InterstitialAdResult_
                );
      return;
    }
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void RequestRewardedAd(Action`1[Assets.Scripts.AdIntegration.RewardedAdResult], AdContext) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_RequestRewardedAd
               (MobileAdManager *this,
               Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *rewardedAdCallback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  object = this;
  if ((this->fields).rewardedAdResultHandler == (MobileAdManager_RewardedAdResultHandler *)0x0) {
    pIVar1 = (this->fields).adUIManager;
    if (pIVar1 != (IAdUIManager *)0x0) {
      cVar2 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1);
      if (cVar2 == '\0') {
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        bVar4 = cRam_? == '\0';
        (object->fields).timeOfRewardedAdStart = fVar3;
        this = (MobileAdManager *)context;
        if (bVar4) {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).
                    Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started ==
            0)) {
          func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
        }
        MobileAdManager_SendStat(StringLiteral_Ad_RewardRequest,(MethodInfo *)0x0);
        piVar5 = (int *)func_?(TypeInfo__Assets__Scripts__AdIntegration__AdContext,&this);
        if (piVar5 != (int *)0x0) {
          pSVar6 = (String *)(**(code **)(*piVar5 + 0xd8))(piVar5,*(undefined4 *)(*piVar5 + 0xdc));
          puVar7 = (undefined4 *)func_?(piVar5);
          this = (MobileAdManager *)*puVar7;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar6 = mscorlib.dll::System::String::String_Concat_2
                              (StringLiteral_Ad_RewardRequest_,pSVar6,(MethodInfo *)0x0);
          MobileAdManager_SendStat(pSVar6,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
                      (this_01,IncrementStatRequestType__Enum_RewardedAdRequest,0,(MethodInfo *)0x0)
            ;
            pIVar1 = (object->fields).adUIManager;
            pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?(
                                        TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                                        );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar8,(Object *)object,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                       ,
                       MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Action_System__Object__void__
                      );
            if (pIVar1 != (IAdUIManager *)0x0) {
              func_?(2,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1,
                              pUVar8);
              pIVar1 = (object->fields).adUIManager;
              method_00 = 
              TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__RewardedAdResultHandler
              ;
              this_02 = (ScaleAnimationBase *)func_?();
              ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
              (this_02->fields).originalScale.z = (float)context;
              (this_02->fields).originalScale.y = (float)pIVar1;
              (this_02->fields).state = (int32_t)rewardedAdCallback;
              pMVar9 = (object->fields).internalAdManagerState;
              (object->fields).rewardedAdResultHandler =
                   (MobileAdManager_RewardedAdResultHandler *)this_02;
              pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?(
                                          TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                                          );
              this = (MobileAdManager *)pUVar8;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar8,(Object *)object,
                         MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                         ,
                         MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Action_System__Object__void__
                        );
              if (pMVar9 != (MobileAdManager_InternalAdManagerState *)0x0) {
                if (cRam_? == '\0') {
                  func_?(_UNK_?);
                  cRam_? = '\x01';
                }
                if ((pMVar9->fields).isReady != 0) {
                  this_00 = (pMVar9->fields).internalStateRewardedAds;
                  if (this_00 == (MobileAdManager_InternalStateRewardedAd *)0x0)
                  goto code_?;
                  pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)this;
                  if ((this_00->fields).isHandlingRequest == 0) {
                    pMVar10 = (pMVar9->fields).internalStateInterstitial;
                    if (pMVar10 == (MobileAdManager_InternalStateInterstitial *)0x0)
                    goto code_?;
                    if ((pMVar10->fields).isHandlingRequest == 0) {
                      if ((this_00 == (MobileAdManager_InternalStateRewardedAd *)0x0) ||
                         (pMVar11 = (this_00->fields).adLoadState,
                         pMVar11 == (MobileAdManager_AdLoadState *)0x0)) goto code_?;
                      if (-1 < (pMVar11->fields).loadAttempts) {
                        if (this_00 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
                          (this_00->fields).rewardedAdCallback =
                               (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)this;
                          pRVar12 = (this_00->fields).rewardedAd;
                          (this_00->fields).isHandlingRequest = 1;
                          if (pRVar12 != (RewardedAd *)0x0) {
                            bVar13 = GoogleMobileAds::Api::RewardedAd::RewardedAd_IsLoaded
                                              (pRVar12,(MethodInfo *)0x0);
                            if (bVar13 == 0) {
                              pMVar11 = (this_00->fields).adLoadState;
                              if (pMVar11 != (MobileAdManager_AdLoadState *)0x0) {
                                if ((pMVar11->fields).loadingAd == 0) {
                                  MobileAdManager+InternalStateRewardedAd::
                                  MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd
                                            (this_00,(MethodInfo *)0x0);
                                }
                                return;
                              }
                            }
                            else {
                              pRVar12 = (this_00->fields).rewardedAd;
                              if (pRVar12 != (RewardedAd *)0x0) {
                                GoogleMobileAds::Api::RewardedAd::RewardedAd_Show
                                          (pRVar12,(MethodInfo *)0x0);
                                return;
                              }
                            }
                          }
                        }
                        goto code_?;
                      }
                    }
                  }
                }
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                          ((Object *)StringLiteral_Rewarded_ad_request_is_not_ready,
                           (MethodInfo *)0x0);
                if (pUVar8 !=
                    (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)0x0) {
                  mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                            ((Action_1_UIPushOption_ *)pUVar8,UIPushOption__Enum_None,
                             MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Invoke_Assets__Scripts__AdIntegration__RewardedAdResult_
                            );
                  return;
                }
              }
            }
          }
        }
      }
      else {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Ad_already_showing__aborting,(MethodInfo *)0x0);
        if (rewardedAdCallback != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
          mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                    ((Action_1_UIPushOption_ *)rewardedAdCallback,UIPushOption__Enum_None,
                     MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Invoke_Assets__Scripts__AdIntegration__RewardedAdResult_
                    );
          return;
        }
      }
    }
  }
  else {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Unhandled_reward_handler_detecte,(MethodInfo *)0x0);
    if (rewardedAdCallback != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                ((Action_1_UIPushOption_ *)rewardedAdCallback,UIPushOption__Enum_None,
                 MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Invoke_Assets__Scripts__AdIntegration__RewardedAdResult_
                );
      return;
    }
  }
code_?:
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_RewardedAdCallback
               (MobileAdManager *this,RewardedAdResult__Enum obj,MethodInfo *method)

{
  if ((this->fields).timeoutAdAfterDelayAsUnlocked == 0) {
code_?:
    if (obj != RewardedAdResult__Enum_RewardUnlocked) goto code_?;
  }
  else {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar1 - (this->fields).timeOfRewardedAdStart < (float)(this->fields).timeoutSuccessDelay)
    goto code_?;
    obj = RewardedAdResult__Enum_RewardUnlocked;
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).lastSeenRewardedAd = fVar1;
code_?:
  pMVar2 = (this->fields).rewardedAdResultHandler;
  if (pMVar2 != (MobileAdManager_RewardedAdResultHandler *)0x0) {
    (pMVar2->fields).rewardedAdResult = obj;
    (pMVar2->fields).IsDone = 1;
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SendInterstitialAdRequestStats(AdContext) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SendInterstitialAdRequestStats
               (MobileAdManager *this,AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar1 = (int *)func_?(TypeInfo__Assets__Scripts__AdIntegration__AdContext,&context);
  if (piVar1 != (int *)0x0) {
    pSVar2 = (String *)(**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
    pAVar3 = (AdContext__Enum *)func_?(piVar1);
    context = *pAVar3;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Ad_InterstitialRequest_,pSVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0))
    {
      func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
    }
    MobileAdManager_SendStat(pSVar2,(MethodInfo *)0x0);
    MobileAdManager_SendStat(StringLiteral_Ad_InterstitialRequest,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
                (this_00,IncrementStatRequestType__Enum_InterstitialAdRequest,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SendRewardRequestStats(AdContext) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SendRewardRequestStats
               (MobileAdManager *this,AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
  }
  MobileAdManager_SendStat(StringLiteral_Ad_RewardRequest,(MethodInfo *)0x0);
  piVar1 = (int *)func_?(TypeInfo__Assets__Scripts__AdIntegration__AdContext,&context);
  if (piVar1 != (int *)0x0) {
    pSVar2 = (String *)(**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
    pAVar3 = (AdContext__Enum *)func_?(piVar1);
    context = *pAVar3;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Ad_RewardRequest_,pSVar2,(MethodInfo *)0x0);
    MobileAdManager_SendStat(pSVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
                (this_00,IncrementStatRequestType__Enum_RewardedAdRequest,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SendStat(String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SendStat(String *stat,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
  }
  if (TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->testing == 0
     ) {
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count(stat,1,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetConsent(Boolean, Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetConsent
               (MobileAdManager *this,bool hasConsented,bool isGDPRConsentRequired,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__UnityAds__UnityAds->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Api__Mediation__UnityAds__UnityAds->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__UnityAds__UnityAds);
  }
  GoogleMobileAds::Api::Mediation::UnityAds::UnityAds::UnityAds_SetGDPRConsentMetaData
            (hasConsented,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource->_1).cctor_started == 0)) {
    func_?();
  }
  GoogleMobileAds::Api::Mediation::IronSource::IronSource::IronSource_SetConsent
            (hasConsented,(MethodInfo *)0x0);
  return;
}


/* Void SetConsentIronSource(Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetConsentIronSource
               (MobileAdManager *this,bool hasConsented,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource);
  }
  GoogleMobileAds::Api::Mediation::IronSource::IronSource::IronSource_SetConsent
            (hasConsented,(MethodInfo *)0x0);
  return;
}


/* Void SetConsentUnityAds(Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetConsentUnityAds(MobileAdManager *this,bool hasConsented,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__UnityAds__UnityAds->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Api__Mediation__UnityAds__UnityAds->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__UnityAds__UnityAds);
  }
  GoogleMobileAds::Api::Mediation::UnityAds::UnityAds::UnityAds_SetGDPRConsentMetaData
            (hasConsented,(MethodInfo *)0x0);
  return;
}


/* Void SetupConsentAndCompliance(ConsentData) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetupConsentAndCompliance
               (MobileAdManager *this,ConsentData *consentData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (consentData == (ConsentData *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    method_00 = (MethodInfo *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Consent_data_not_set__Using_defa,(MethodInfo *)0x0);
    pSVar1 = (ScaleAnimationBase *)
             func_?(
                            TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__ConsentAndCompliance
                            );
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,unaff_EBP);
    this_00 = (ScaleAnimationBase *)
              func_?(TypeInfo__Assets__Scripts__AdIntegration__ConsentData);
    *(undefined2 *)&(this_00->fields)._._ = 0x101;
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
    (pSVar1->fields)._._._._.m_CachedPtr = this_00;
    if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0))
    {
      func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
    }
    TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
    consentAndCompliance = (MobileAdManager_ConsentAndCompliance *)pSVar1;
  }
  else {
    method_01 = 
    TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__ConsentAndCompliance;
    pSVar1 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_01);
    (pSVar1->fields)._._._._.m_CachedPtr = consentData;
    if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0))
    {
      func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
    }
    TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
    consentAndCompliance = (MobileAdManager_ConsentAndCompliance *)pSVar1;
  }
  if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
  }
  pMVar2 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
           consentAndCompliance;
  if (pMVar2 != (MobileAdManager_ConsentAndCompliance *)0x0) {
    pSVar3 = (String *)
             (*(code *)(pMVar2->klass->vtable).ToString.method)(pMVar2,pMVar2->klass[1]._0.image);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_consentAndCompliance__,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    pMVar2 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
             consentAndCompliance;
    if ((pMVar2 != (MobileAdManager_ConsentAndCompliance *)0x0) &&
       (pCVar4 = (pMVar2->fields).consentData, pCVar4 != (ConsentData *)0x0)) {
      bVar5 = (pCVar4->fields).isEuropean;
      if (bVar5 == 0) {
        bVar6 = 0;
      }
      else {
        if (pCVar4 == (ConsentData *)0x0) goto code_?;
        bVar6 = (pCVar4->fields).isChild;
      }
      if (pCVar4 != (ConsentData *)0x0) {
        bVar7 = 1;
        if (bVar5 == 0) {
          bVar7 = (pCVar4->fields).isAmerican;
        }
        if (((pCVar4->fields).hasConsented == 0) || (bVar6 != 0)) {
          consent = bVar7 == 0;
        }
        else {
          consent = true;
        }
        if (pMVar2 != (MobileAdManager_ConsentAndCompliance *)0x0) {
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__UnityAds__UnityAds->vtable).Equals
                      .methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__GoogleMobileAds__Api__Mediation__UnityAds__UnityAds->_1).cctor_started == 0
             )) {
            func_?(TypeInfo__GoogleMobileAds__Api__Mediation__UnityAds__UnityAds);
          }
          GoogleMobileAds::Api::Mediation::UnityAds::UnityAds::UnityAds_SetGDPRConsentMetaData
                    (consent,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource->vtable).
                      Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource->_1).cctor_started
              == 0)) {
            func_?();
          }
          GoogleMobileAds::Api::Mediation::IronSource::IronSource::IronSource_SetConsent
                    (consent,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
         MobileAdManager_ToString(MobileAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  arg1 = (this->fields).internalAdManagerState;
  if (arg1 != (MobileAdManager_InternalAdManagerState *)0x0) {
    if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0))
    {
      func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
      arg1 = (this->fields).internalAdManagerState;
    }
    arg0 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
           consentAndCompliance;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__0_u000A_1_,(Object *)arg0,(Object *)arg1,(MethodInfo *)0x0);
    return pSVar1;
  }
  return StringLiteral_internalAdManagerState_not_initi;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_UpdateControllerUpdate(MobileAdManager *this,MethodInfo *method)

{
  this_00 = (this->fields).rewardedAdResultHandler;
  if ((this_00 != (MobileAdManager_RewardedAdResultHandler *)0x0) && ((this_00->fields).IsDone != 0)
     ) {
    MobileAdManager+RewardedAdResultHandler::MobileAdManager_RewardedAdResultHandler_DoCallBack
              (this_00,(MethodInfo *)0x0);
    (this->fields).rewardedAdResultHandler = (MobileAdManager_RewardedAdResultHandler *)0x0;
  }
  this_01 = (this->fields).interstitialAdResultHandler;
  if ((this_01 != (MobileAdManager_InterstitialAdResultHandler *)0x0) &&
     ((this_01->fields).IsDone != 0)) {
    MobileAdManager+InterstitialAdResultHandler::
    MobileAdManager_InterstitialAdResultHandler_DoCallBack(this_01,(MethodInfo *)0x0);
    (this->fields).interstitialAdResultHandler = (MobileAdManager_InterstitialAdResultHandler *)0x0;
  }
  return;
}


/* MobileAdManager(Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager__ctor(MobileAdManager *this,bool testing,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).timeoutSuccessDelay = 0x1e;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBP);
  if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0)) {
    func_?();
    TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->testing =
         testing;
    return;
  }
  TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->testing =
       testing;
  return;
}


/* Boolean get_ReadyForInterstitialAdRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_get_ReadyForInterstitialAdRequest(MobileAdManager *this,MethodInfo *method)

{
  pMVar1 = (this->fields).internalAdManagerState;
  if (pMVar1 != (MobileAdManager_InternalAdManagerState *)0x0) {
    if ((pMVar1->fields).isReady != 0) {
      pMVar2 = (pMVar1->fields).internalStateRewardedAds;
      if (pMVar2 == (MobileAdManager_InternalStateRewardedAd *)0x0) goto code_?;
      if ((pMVar2->fields).isHandlingRequest == 0) {
        pMVar3 = (pMVar1->fields).internalStateInterstitial;
        if (pMVar3 == (MobileAdManager_InternalStateInterstitial *)0x0) goto code_?;
        if ((pMVar3->fields).isHandlingRequest == 0) {
          if ((pMVar2 == (MobileAdManager_InternalStateRewardedAd *)0x0) ||
             (pMVar4 = (pMVar2->fields).adLoadState, pMVar4 == (MobileAdManager_AdLoadState *)0x0))
          goto code_?;
          if (-1 < (pMVar4->fields).loadAttempts) {
            fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
            return (this->fields).interstitialTimeoutAfterRewardedAd <=
                   fVar5 - (this->fields).lastSeenRewardedAd;
          }
        }
      }
    }
    return 0;
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Boolean get_ReadyForRewardedAdRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_get_ReadyForRewardedAdRequest(MobileAdManager *this,MethodInfo *method)

{
  pMVar1 = (this->fields).internalAdManagerState;
  if (pMVar1 != (MobileAdManager_InternalAdManagerState *)0x0) {
    if ((pMVar1->fields).isReady == 0) {
      return 0;
    }
    pMVar2 = (pMVar1->fields).internalStateRewardedAds;
    if (pMVar2 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
      if ((pMVar2->fields).isHandlingRequest != 0) {
        return 0;
      }
      pMVar3 = (pMVar1->fields).internalStateInterstitial;
      if (pMVar3 != (MobileAdManager_InternalStateInterstitial *)0x0) {
        if ((pMVar3->fields).isHandlingRequest != 0) {
          return 0;
        }
        if ((pMVar2 != (MobileAdManager_InternalStateRewardedAd *)0x0) &&
           (pMVar4 = (pMVar2->fields).adLoadState, pMVar4 != (MobileAdManager_AdLoadState *)0x0)) {
          return (byte)~(byte)((uint)(pMVar4->fields).loadAttempts >> 0x18) >> 7;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* String get_RewardedAdNotAvailableText() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
         MobileAdManager_get_RewardedAdNotAvailableText(MobileAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Please_watch_the_ad_from_start_t,(MethodInfo *)0x0);
  return pSVar1;
}


/* TimeSpan get_TimeSinceLastAd() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
         MobileAdManager_get_TimeSinceLastAd(MobileAdManager *this,MethodInfo *method)

{
  this_00 = (this->fields).internalAdManagerState;
  if (this_00 != (MobileAdManager_InternalAdManagerState *)0x0) {
    iStack_1 = 0;
    iStack_2 = 0;
    iStack_1 = (int64_t)MobileAdManager+InternalAdManagerState::
                        MobileAdManager_InternalAdManagerState_get_TimeSinceLastInterstitial
                                  (this_00,(MethodInfo *)0x0);
    iVar3 = func_?(&iStack_1,0);
    iStack_2 = (int64_t)MobileAdManager+InternalAdManagerState::
                         MobileAdManager_InternalAdManagerState_get_TimeSinceLastRewarded
                                   (this_00,(MethodInfo *)0x0);
    val2 = func_?(&iStack_2,0);
    iVar3 = mscorlib.dll::System::Math::Math_Min_3(iVar3,val2,(MethodInfo *)0x0);
    iStack_4 = 0;
    func_?(&iStack_4,iVar3,0);
    return (TimeSpan)iStack_4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  TVar6._ticks = (*pcVar5)();
  return (TimeSpan)TVar6._ticks;
}


/* TimeSpan get_TimeSinceLastInterstitial() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
         MobileAdManager_get_TimeSinceLastInterstitial(MobileAdManager *this,MethodInfo *method)

{
  pMVar1 = (this->fields).internalAdManagerState;
  if (pMVar1 == (MobileAdManager_InternalAdManagerState *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    TVar3._ticks = (*pcVar2)();
    return (TimeSpan)TVar3._ticks;
  }
  pMVar4 = (pMVar1->fields).internalStateInterstitial;
  if (pMVar4 != (MobileAdManager_InternalStateInterstitial *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__DateTime);
    }
    pDVar5 = mscorlib.dll::System::DateTime::DateTime_get_Now
                       ((DateTime *)&stack0xffffffec,(MethodInfo *)0x0);
    TVar3 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction
                      (*pDVar5,(pMVar4->fields).prevInterstitialTime,(MethodInfo *)0x0);
    return (TimeSpan)TVar3._ticks;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  TVar3._ticks = (*pcVar2)();
  return (TimeSpan)TVar3._ticks;
}


/* TimeSpan get_TimeSinceLastRewarded() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
         MobileAdManager_get_TimeSinceLastRewarded(MobileAdManager *this,MethodInfo *method)

{
  pMVar1 = (this->fields).internalAdManagerState;
  if (pMVar1 == (MobileAdManager_InternalAdManagerState *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    TVar3._ticks = (*pcVar2)();
    return (TimeSpan)TVar3._ticks;
  }
  pMVar4 = (pMVar1->fields).internalStateRewardedAds;
  if (pMVar4 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__DateTime);
    }
    pDVar5 = mscorlib.dll::System::DateTime::DateTime_get_Now
                       ((DateTime *)&stack0xffffffec,(MethodInfo *)0x0);
    TVar3 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction
                      (*pDVar5,(pMVar4->fields).prevInterstitialTime,(MethodInfo *)0x0);
    return (TimeSpan)TVar3._ticks;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  TVar3._ticks = (*pcVar2)();
  return (TimeSpan)TVar3._ticks;
}

