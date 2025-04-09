
/* AdRequest CreateAdRequest() */

AdRequest *
Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
MobileAdManager_CreateAdRequest(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Api__AdRequest);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
    func_?(&TypeInfo__GoogleMobileAds__Api__MobileAds);
    func_?(&
                    MethodInfo__System__Nullable<GoogleMobileAds::Api::TagForChildDirectedTreatment>__Nullable_GoogleMobileAds__Api__TagForChildDirectedTreatment_
                   );
    func_?(&
                    MethodInfo__System__Nullable<GoogleMobileAds::Api::TagForUnderAgeOfConsent>__Nullable_GoogleMobileAds__Api__TagForUnderAgeOfConsent_
                   );
    func_?(&TypeInfo__GoogleMobileAds__Api__RequestConfiguration);
    func_?(&StringLiteral__2F722B7F88436E816B98A0245E195219);
    func_?(&StringLiteral_MobileAdManager_CreateAdRequest);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_CreateAdRequest,(MethodInfo *)0x0);
  this = (List_1_System_String_ *)
         func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  if (this != (List_1_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this,
               (Object *)StringLiteral__2F722B7F88436E816B98A0245E195219,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    this_00 = (RequestConfiguration *)func_?();
    GoogleMobileAds.Core.dll::GoogleMobileAds::Api::RequestConfiguration::RequestConfiguration__ctor
              (this_00,(MethodInfo *)0x0);
    if (this_00 != (RequestConfiguration *)0x0) {
      (this_00->fields).TestDeviceIds = this;
      func_?();
      pMVar1 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
               consentAndCompliance;
      if ((pMVar1 != (MobileAdManager_ConsentAndCompliance *)0x0) &&
         (pCVar2 = (pMVar1->fields).consentData, pCVar2 != (ConsentData *)0x0)) {
        if (((pCVar2->fields).isChild != 0) && ((pCVar2->fields).isAmerican != 0)) {
          NVar3.hasValue = 0;
          NVar3._1_3_ = 0;
          NVar3.value = 0;
          mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                    ((Nullable_1_UInt32_ *)&stack0xfffffff4,1,
                     MethodInfo__System__Nullable<GoogleMobileAds::Api::TagForChildDirectedTreatment>__Nullable_GoogleMobileAds__Api__TagForChildDirectedTreatment_
                    );
          (this_00->fields).TagForChildDirectedTreatment.hasValue = (bool)NVar3._0_4_;
          *(int3 *)&(this_00->fields).TagForChildDirectedTreatment.field_0x1 = SUB43(NVar3._0_4_,1);
          (this_00->fields).TagForChildDirectedTreatment.value = NVar3.value;
        }
        pMVar1 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
                 consentAndCompliance;
        if ((pMVar1 != (MobileAdManager_ConsentAndCompliance *)0x0) &&
           (pCVar2 = (pMVar1->fields).consentData, pCVar2 != (ConsentData *)0x0)) {
          if (((pCVar2->fields).isChild != 0) && ((pCVar2->fields).isEuropean != 0)) {
            NVar4.hasValue = 0;
            NVar4._1_3_ = 0;
            NVar4.value = 0;
            mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                      ((Nullable_1_UInt32_ *)&stack0xfffffff4,0,(MethodInfo *)0x0);
            (this_00->fields).TagForUnderAgeOfConsent.hasValue = (bool)NVar4._0_4_;
            *(int3 *)&(this_00->fields).TagForUnderAgeOfConsent.field_0x1 = SUB43(NVar4._0_4_,1);
            (this_00->fields).TagForUnderAgeOfConsent.value = NVar4.value;
          }
          if ((TypeInfo__GoogleMobileAds__Api__MobileAds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::MobileAds_SetRequestConfiguration
                    (this_00,(MethodInfo *)0x0);
          pAVar5 = (AdRequest *)func_?();
          GoogleMobileAds.Core.dll::GoogleMobileAds::Api::AdRequest::AdRequest__ctor
                    (pAVar5,(MethodInfo *)0x0);
          return pAVar5;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pAVar5 = (AdRequest *)(*pcVar6)();
  return pAVar5;
}


/* Void Destroy() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_Destroy(MobileAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UpdateController);
    func_?(&StringLiteral_MobileAdManager_Destroy);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_Destroy,(MethodInfo *)0x0);
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  ppMVar1 = &(this->fields).rewardedAdResultHandler;
  *ppMVar1 = (MobileAdManager_RewardedAdResultHandler *)0x0;
  func_?(ppMVar1,0);
  ppMVar2 = &(this->fields).interstitialAdResultHandler;
  *ppMVar2 = (MobileAdManager_InterstitialAdResultHandler *)0x0;
  func_?(ppMVar2,0);
  pMVar3 = (this->fields).internalAdManagerState;
  if (pMVar3 == (MobileAdManager_InternalAdManagerState *)0x0) {
code_?:
    (this->fields).isInitialized = 0;
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?(&StringLiteral_InternalAdManagerState_Destroy);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InternalAdManagerState_Destroy,(MethodInfo *)0x0);
  this_00 = (pMVar3->fields).internalStateRewardedAds;
  if (this_00 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalStateRewardedAd_Destroy,(MethodInfo *)0x0);
    (this_00->fields).rewardedAdCallback =
         (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0;
    func_?();
    MobileAdManager+InternalStateRewardedAd::
    MobileAdManager_InternalStateRewardedAd_DestroyRewardedAd(this_00,(MethodInfo *)0x0);
    this_01 = (pMVar3->fields).internalStateInterstitial;
    if (this_01 != (MobileAdManager_InternalStateInterstitial *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_InternalStateInterstitial_Destro,(MethodInfo *)0x0);
      MobileAdManager+InternalStateInterstitial::
      MobileAdManager_InternalStateInterstitial_DestroyInterstitial(this_01,(MethodInfo *)0x0);
      (this_01->fields).interstitialAdCallback =
           (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0;
      func_?();
      ppMVar4 = &(this->fields).internalAdManagerState;
      *ppMVar4 = (MobileAdManager_InternalAdManagerState *)0x0;
      func_?(ppMVar4,0);
      goto code_?;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Api__AdapterState);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_GoogleMobileAds::Api::AdapterStatus>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_GoogleMobileAds::Api::AdapterStatus>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_GoogleMobileAds::Api::AdapterStatus>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_GoogleMobileAds::Api::AdapterStatus>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_GoogleMobileAds::Api::AdapterStatus>__get_Value__
                   );
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral__0____1__);
    func_?(&StringLiteral_MobileAdManager_InitCompleteActi);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_InitCompleteActi,(MethodInfo *)0x0);
  if ((initializationStatus != (InitializationStatus *)0x0) &&
     (this_00 = GoogleMobileAds.dll::GoogleMobileAds::Api::InitializationStatus::
                InitializationStatus_getAdapterStatusMap(initializationStatus,(MethodInfo *)0x0),
     this_00 != (Dictionary_2_System_String_GoogleMobileAds_Api_AdapterStatus_ *)0x0)) {
    pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa0,(Dictionary_2_System_UInt32_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_GoogleMobileAds::Api::AdapterStatus>__GetEnumerator__
                       );
    method_00 = (Object__Class *)pDVar4->_dictionary;
    uVar5 = *(undefined8 *)&(pDVar4->_current).value;
    uStack_1 = 1;
    while( true ) {
      while( true ) {
        bVar6 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                           &stack0xffffffb8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_GoogleMobileAds::Api::AdapterStatus>__MoveNext__
                          );
        if (bVar6 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffb8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_GoogleMobileAds::Api::AdapterStatus>__Dispose__
                     ,(MethodInfo *)method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pOStack_7 = (Object *)uVar5;
        if (pOStack_7 == (Object *)0x0) goto code_?;
        if (pOStack_7[1].klass != (Object__Class *)0x1) break;
        pOVar8 = (Object__Array *)func_?();
        if ((pOStack_7 == (Object *)0x0) || (pOVar8 == (Object__Array *)0x0))
        goto code_?;
        if ((pOStack_7[1].monitor != (MonitorData *)0x0) && (iVar9 = func_?(), iVar9 == 0)
           ) goto code_?;
        func_?();
        iVar9 = func_?();
        if ((iVar9 != 0) && (iVar9 = func_?(), iVar9 == 0)) goto code_?;
        func_?();
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
                  (StringLiteral__0____1__,pOVar8,(MethodInfo *)0x0);
      }
      pOVar8 = (Object__Array *)func_?();
      if ((pOStack_7 == (Object *)0x0) || (pOVar8 == (Object__Array *)0x0)) goto code_?;
      if ((pOStack_7[1].monitor != (MonitorData *)0x0) && (iVar9 = func_?(), iVar9 == 0))
      break;
      func_?();
      iVar9 = func_?();
      if ((iVar9 != 0) && (iVar9 = func_?(), iVar9 == 0)) goto code_?;
      func_?();
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogErrorFormat
                (StringLiteral__0____1__,pOVar8,(MethodInfo *)0x0);
    }
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_Initialize(MobileAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<GoogleMobileAds::Api::InitializationStatus>);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalAdManagerState
                   );
    func_?(&
                    Assets__Scripts__AdIntegration__ConsentData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::ConsentData>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InitCompleteAction_GoogleMobileAds__Api__InitializationStatus_
                   );
    func_?(&TypeInfo__GoogleMobileAds__Api__MobileAds);
    func_?(&TypeInfo__UpdateController);
    func_?(&StringLiteral_consent_data_string_is_null_or_e);
    func_?(&StringLiteral_MobileAdManager_Initialize);
    func_?(&StringLiteral_AdConsent__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_Initialize,(MethodInfo *)0x0);
  pSVar1 = ::StringLiteral__;
  if ((this->fields).isInitialized == 0) {
    message = mscorlib.dll::System::String::String_Concat_3
                        (StringLiteral_AdConsent__,::StringLiteral__,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0)
    ;
    consentData = (ConsentData *)0x0;
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      consentData = (ConsentData *)
                    Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                    JsonConvert_DeserializeObject_2
                              (pSVar1,
                               Assets__Scripts__AdIntegration__ConsentData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::ConsentData>_System__String_
                              );
    }
    else {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_consent_data_string_is_null_or_e,(MethodInfo *)0x0);
    }
    MobileAdManager_SetupConsentAndCompliance(this,consentData,(MethodInfo *)0x0);
    pMVar3 = (MobileAdManager_InternalAdManagerState *)func_?();
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pMVar3,ExceptionArgument__Enum_obj,in_stack_4);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InternalAdManagerState_construct,(MethodInfo *)0x0);
    pMVar5 = (MobileAdManager_InternalStateRewardedAd *)func_?();
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    uVar6 = *(undefined4 *)
             ((int)&(TypeInfo__System__DateTime->static_fields->MinValue)._dateData + 4);
    *(int *)&(pMVar5->fields).prevInterstitialTime._dateData =
         (int)(TypeInfo__System__DateTime->static_fields->MinValue)._dateData;
    *(undefined4 *)((int)&(pMVar5->fields).prevInterstitialTime._dateData + 4) = uVar6;
    pMVar7 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__AdLoadState;
    pMVar8 = (MobileAdManager_AdLoadState *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pMVar8,ExceptionArgument__Enum_obj,(MethodInfo *)pMVar7);
    ppMVar9 = &(pMVar5->fields).adLoadState;
    *ppMVar9 = pMVar8;
    func_?();
    (pMVar5->fields).rewardAdResult = 4;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pMVar5,ExceptionArgument__Enum_obj,(MethodInfo *)ppMVar9);
    (pMVar3->fields).internalStateRewardedAds = pMVar5;
    func_?();
    pMVar10 = (MobileAdManager_InternalStateInterstitial *)func_?();
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    uVar6 = *(undefined4 *)
             ((int)&(TypeInfo__System__DateTime->static_fields->MinValue)._dateData + 4);
    *(int *)&(pMVar10->fields).prevInterstitialTime._dateData =
         (int)(TypeInfo__System__DateTime->static_fields->MinValue)._dateData;
    *(undefined4 *)((int)&(pMVar10->fields).prevInterstitialTime._dateData + 4) = uVar6;
    pMVar7 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__AdLoadState;
    pMVar8 = (MobileAdManager_AdLoadState *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pMVar8,ExceptionArgument__Enum_obj,(MethodInfo *)pMVar7);
    ppMVar9 = &(pMVar10->fields).adLoadState;
    *ppMVar9 = pMVar8;
    func_?();
    (pMVar10->fields).interstitialAdResult = 3;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pMVar10,ExceptionArgument__Enum_obj,(MethodInfo *)ppMVar9);
    (pMVar3->fields).internalStateInterstitial = pMVar10;
    func_?();
    (this->fields).internalAdManagerState = pMVar3;
    func_?();
    if ((TypeInfo__GoogleMobileAds__Api__MobileAds->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::MobileAds_SetiOSAppPauseOnBackground
              (1,(MethodInfo *)0x0);
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InitCompleteAction_GoogleMobileAds__Api__InitializationStatus_
               ,(MethodInfo *)0x0);
    GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::MobileAds_Initialize
              ((Action_1_GoogleMobileAds_Api_InitializationStatus_ *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UpdateController::UpdateController_AddUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,
               1,(MethodInfo *)0x0);
    pMVar3 = (this->fields).internalAdManagerState;
    (this->fields).isInitialized = 1;
    if (pMVar3 != (MobileAdManager_InternalAdManagerState *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_InternalAdManagerState_Initializ,(MethodInfo *)0x0);
      pMVar5 = (pMVar3->fields).internalStateRewardedAds;
      if (pMVar5 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
        MobileAdManager+InternalStateRewardedAd::
        MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd(pMVar5,(MethodInfo *)0x0);
        pMVar10 = (pMVar3->fields).internalStateInterstitial;
        if (pMVar10 != (MobileAdManager_InternalStateInterstitial *)0x0) {
          MobileAdManager+InternalStateInterstitial::
          MobileAdManager_InternalStateInterstitial_CreateAndLoadInterstitialAd
                    (pMVar10,(MethodInfo *)0x0);
          (pMVar3->fields).isReady = 1;
          return;
        }
      }
    }
  }
  else {
    uVar6 = func_?(&TypeInfo__System__Exception);
    this_01 = (Exception *)func_?(uVar6);
    method_00 = (MethodInfo *)0x0;
    pSVar1 = (String *)func_?(&StringLiteral_AdManager_already_initialized);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar1,method_00);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__Initialize__
                   );
    func_?();
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void InitializeAdConfigSettings(AdConfigSettings) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_InitializeAdConfigSettings
               (MobileAdManager *this,AdConfigSettings *config,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (config != (AdConfigSettings *)0x0) {
    (this->fields).timeoutAdAfterDelayAsUnlocked =
         (config->fields)._AdTimeoutAsSuccess_k__BackingField;
    (this->fields).timeoutSuccessDelay = (config->fields)._AdTimeoutAsSuccessDelay_k__BackingField;
    (this->fields).interstitialTimeoutAfterRewardedAd =
         (float)(config->fields)._InterstitialTimeoutAfterRewardedAd_k__BackingField;
    return;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InterstitialCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_InterstitialCallback
               (MobileAdManager *this,InterstitialAdResult__Enum obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult);
    func_?(&StringLiteral_MobileAdManager_InterstitialCall);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_MobileAdManager_InterstitialCall,pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pMVar2 = (this->fields).interstitialAdResultHandler;
  if (pMVar2 != (MobileAdManager_InterstitialAdResultHandler *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)obj,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_MobileAdManager_InterstitialAdRe,pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
    (pMVar2->fields).interstitialAdResult = obj;
    (pMVar2->fields).IsDone = 1;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>)
    ;
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    func_?(&
                    TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InterstitialAdResultHandler
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InterstitialCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   );
    func_?(&StringLiteral_MobileAdManager_RequestInterstit);
    func_?(&StringLiteral_Ad_already_showing__aborting);
    func_?(&StringLiteral_Unhandled_interstitial_ad_handle);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_RequestInterstit,(MethodInfo *)0x0);
  ppMVar1 = &(this->fields).interstitialAdResultHandler;
  if ((this->fields).interstitialAdResultHandler ==
      (MobileAdManager_InterstitialAdResultHandler *)0x0) {
    pIVar2 = (this->fields).adUIManager;
    if (pIVar2 == (IAdUIManager *)0x0) goto code_?;
    cVar3 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar2);
    if (cVar3 == '\0') {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
        func_?(&StringLiteral_Ad_InterstitialRequest_);
        func_?(&StringLiteral_Ad_InterstitialRequest);
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__Assets__Scripts__AdIntegration__AdContext;
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0)
      ;
      pSVar4 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Ad_InterstitialRequest_,pSVar4,(MethodInfo *)0x0);
      MobileAdManager_SendStat(pSVar4,(MethodInfo *)0x0);
      MobileAdManager_SendStat(StringLiteral_Ad_InterstitialRequest,(MethodInfo *)0x0);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
                  (pMVar5,IncrementStatRequestType__Enum_InterstitialAdRequest,0,(MethodInfo *)0x0);
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                    (pMVar5,AdType__Enum_InterstitialAd,AdActionType__Enum_Start,context,
                     (MethodInfo *)0x0);
          pIVar2 = (this->fields).adUIManager;
          pUVar6 = (UnityAction_1_System_Int32Enum_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (pUVar6,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InterstitialCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                     ,(MethodInfo *)0x0);
          if (pIVar2 != (IAdUIManager *)0x0) {
            func_?(1,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar2,pUVar6);
            pIVar2 = (this->fields).adUIManager;
            value = (MobileAdManager_InterstitialAdResultHandler *)
                    func_?(
                                   TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InterstitialAdResultHandler
                                   );
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Debug);
              func_?(&StringLiteral_MobileAdManager_InterstitialAdRe);
              cRam_? = '\x01';
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MobileAdManager_InterstitialAdRe,(MethodInfo *)0x0);
            (value->fields).context = (int32_t)pMVar5;
            (value->fields).adUIManager = pIVar2;
            func_?();
            ppAVar7 = &(value->fields).interstitialCallback;
            *ppAVar7 = (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)&UNK_?;
            func_?(ppAVar7,&UNK_?);
            *ppMVar1 = value;
            func_?(ppMVar1,value);
            this_00 = (this->fields).internalAdManagerState;
            pUVar6 = (UnityAction_1_System_Int32Enum_ *)
                     func_?(
                                    TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                                    );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (pUVar6,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InterstitialCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                       ,(MethodInfo *)0x0);
            if (this_00 != (MobileAdManager_InternalAdManagerState *)0x0) {
              MobileAdManager+InternalAdManagerState::
              MobileAdManager_InternalAdManagerState_RequestInterstitial
                        (this_00,(Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)
                                 pUVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Ad_already_showing__aborting,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Unhandled_interstitial_ad_handle,(MethodInfo *)0x0);
  }
  if (interstitialCallback != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
    (*(interstitialCallback->fields)._._.invoke_impl)
              ((interstitialCallback->fields)._._.method_code,0,
               (interstitialCallback->fields)._._.method);
    return;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__RewardedAdResultHandler
                   );
    func_?(&StringLiteral_Unhandled_reward_handler_detecte);
    func_?(&StringLiteral_MobileAdManager_RequestRewardedA);
    func_?(&StringLiteral_Ad_already_showing__aborting);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_RequestRewardedA,(MethodInfo *)0x0);
  ppMVar1 = &(this->fields).rewardedAdResultHandler;
  if ((this->fields).rewardedAdResultHandler == (MobileAdManager_RewardedAdResultHandler *)0x0) {
    pIVar2 = (this->fields).adUIManager;
    if (pIVar2 == (IAdUIManager *)0x0) goto code_?;
    cVar3 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar2);
    if (cVar3 == '\0') {
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      bVar5 = cRam_? == '\0';
      (this->fields).timeOfRewardedAdStart = fVar4;
      if (bVar5) {
        func_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
        func_?(&StringLiteral_Ad_RewardRequest_);
        func_?(&StringLiteral_Ad_RewardRequest);
        cRam_? = '\x01';
      }
      MobileAdManager_SendStat(StringLiteral_Ad_RewardRequest,(MethodInfo *)0x0);
      method_00 = TypeInfo__Assets__Scripts__AdIntegration__AdContext;
      pSVar6 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0)
      ;
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Ad_RewardRequest_,pSVar6,(MethodInfo *)0x0);
      MobileAdManager_SendStat(pSVar6,(MethodInfo *)0x0);
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar7 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
                  (pMVar7,IncrementStatRequestType__Enum_RewardedAdRequest,0,(MethodInfo *)0x0);
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar7 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                    (pMVar7,AdType__Enum_RewardedAd,AdActionType__Enum_Start,context,
                     (MethodInfo *)0x0);
          pIVar2 = (this->fields).adUIManager;
          pUVar8 = (UnityAction_1_System_Int32Enum_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (pUVar8,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                     ,(MethodInfo *)0x0);
          if (pIVar2 != (IAdUIManager *)0x0) {
            func_?(2,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar2,pUVar8);
            pIVar2 = (this->fields).adUIManager;
            value = (MobileAdManager_RewardedAdResultHandler *)
                    func_?(
                                   TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__RewardedAdResultHandler
                                   );
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Debug);
              func_?(&StringLiteral_MobileAdManager_RewardedAdResult);
              cRam_? = '\x01';
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MobileAdManager_RewardedAdResult,(MethodInfo *)0x0);
            (value->fields).context = (int32_t)&UNK_?;
            (value->fields).adUIManager = pIVar2;
            func_?();
            ppAVar9 = &(value->fields).rewardedAdCallback;
            *ppAVar9 = (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)&UNK_?;
            func_?(ppAVar9,&UNK_?);
            *ppMVar1 = value;
            func_?(ppMVar1,value);
            this_00 = (this->fields).internalAdManagerState;
            pUVar8 = (UnityAction_1_System_Int32Enum_ *)
                     func_?(
                                    TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                                    );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (pUVar8,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                       ,(MethodInfo *)0x0);
            if (this_00 != (MobileAdManager_InternalAdManagerState *)0x0) {
              MobileAdManager+InternalAdManagerState::
              MobileAdManager_InternalAdManagerState_RequestRewardedAd
                        (this_00,(Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)pUVar8,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Ad_already_showing__aborting,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Unhandled_reward_handler_detecte,(MethodInfo *)0x0);
  }
  if (rewardedAdCallback != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
    (*(rewardedAdCallback->fields)._._.invoke_impl)
              ((rewardedAdCallback->fields)._._.method_code,0,
               (rewardedAdCallback->fields)._._.method);
    return;
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_RewardedAdCallback
               (MobileAdManager *this,RewardedAdResult__Enum obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult);
    func_?(&StringLiteral_MobileAdManager_RewardedAdCallba);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_MobileAdManager_RewardedAdCallba,pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  if ((this->fields).timeoutAdAfterDelayAsUnlocked == 0) {
code_?:
    if (obj != RewardedAdResult__Enum_RewardUnlocked) goto code_?;
  }
  else {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar2 - (this->fields).timeOfRewardedAdStart < (float)(this->fields).timeoutSuccessDelay)
    goto code_?;
    obj = RewardedAdResult__Enum_RewardUnlocked;
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).lastSeenRewardedAd = fVar2;
code_?:
  pMVar3 = (this->fields).rewardedAdResultHandler;
  if (pMVar3 != (MobileAdManager_RewardedAdResultHandler *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_MobileAdManager_RewardedAdResult,pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
    (pMVar3->fields).rewardedAdResult = obj;
    (pMVar3->fields).IsDone = 1;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SendInterstitialAdRequestStats(AdContext) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SendInterstitialAdRequestStats
               (MobileAdManager *this,AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
    func_?(&StringLiteral_Ad_InterstitialRequest_);
    func_?(&StringLiteral_Ad_InterstitialRequest);
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
  AStack_2 = context;
  EStack_1.monitor = (MonitorData *)0xffffffff;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Ad_InterstitialRequest_,pSVar3,(MethodInfo *)0x0);
  MobileAdManager_SendStat(pSVar3,(MethodInfo *)0x0);
  MobileAdManager_SendStat(StringLiteral_Ad_InterstitialRequest,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
              (this_00,IncrementStatRequestType__Enum_InterstitialAdRequest,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
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
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
    func_?(&StringLiteral_Ad_RewardRequest_);
    func_?(&StringLiteral_Ad_RewardRequest);
    cRam_? = '\x01';
  }
  MobileAdManager_SendStat(StringLiteral_Ad_RewardRequest,(MethodInfo *)0x0);
  EStack_1.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
  AStack_2 = context;
  EStack_1.monitor = (MonitorData *)0xffffffff;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Ad_RewardRequest_,pSVar3,(MethodInfo *)0x0);
  MobileAdManager_SendStat(pSVar3,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
              (this_00,IncrementStatRequestType__Enum_RewardedAdRequest,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SendStat(String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SendStat(String *stat,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
    func_?(&TypeInfo__StatHatWrapper);
    cRam_? = '\x01';
  }
  if (TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->testing == 0
     ) {
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count(stat,1,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetConsent(MobileAdManager+ConsentAndCompliance) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetConsent
               (MobileAdManager *this,MobileAdManager_ConsentAndCompliance *cac,MethodInfo *method)

{
  pMVar1 = cac;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_MobileAdManager_SetConsent);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_SetConsent,(MethodInfo *)0x0);
  if ((cac != (MobileAdManager_ConsentAndCompliance *)0x0) &&
     (pCVar2 = (cac->fields).consentData, pCVar2 != (ConsentData *)0x0)) {
    if ((pCVar2->fields).isEuropean == 0) {
      bVar3 = (pCVar2->fields).isAmerican;
      bVar4 = true;
    }
    else {
      bVar4 = (pCVar2->fields).isChild == 0;
      bVar3 = 1;
    }
    cac._0_1_ = ((pCVar2->fields).hasConsented & bVar4) != 0 || bVar3 == 0;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds);
      func_?(&StringLiteral_gdpr_consent);
      cRam_? = '\x01';
    }
    if ((TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds);
    }
    GoogleMobileAds::Mediation::UnityAds::Api::UnityAds::UnityAds_1_SetConsentMetaData
              (StringLiteral_gdpr_consent,(bool)cac,(MethodInfo *)0x0);
    pCVar2 = (pMVar1->fields).consentData;
    if (pCVar2 != (ConsentData *)0x0) {
      if ((pCVar2->fields).isEuropean == 0) {
        bVar3 = (pCVar2->fields).isAmerican;
        bVar4 = true;
      }
      else {
        bVar4 = (pCVar2->fields).isChild == 0;
        bVar3 = 1;
      }
      cac._0_1_ = ((pCVar2->fields).hasConsented & bVar4) != 0 || bVar3 == 0;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource);
        cRam_? = '\x01';
      }
      if ((TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource);
      }
      GoogleMobileAds::Mediation::IronSource::Api::IronSource::IronSource_1_SetConsent
                ((bool)cac,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
        cRam_? = '\x01';
      }
      pCVar2 = (pMVar1->fields).consentData;
      if (pCVar2 != (ConsentData *)0x0) {
        if ((pCVar2->fields).isEuropean == 0) {
          bVar3 = (pCVar2->fields).isAmerican;
          bVar4 = true;
        }
        else {
          bVar4 = (pCVar2->fields).isChild == 0;
          bVar3 = 1;
        }
        cac._0_1_ = ((pCVar2->fields).hasConsented & bVar4) != 0 || bVar3 == 0;
        if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
        }
        GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::AppLovin_1_SetHasUserConsent
                  ((bool)cac,(MethodInfo *)0x0);
        pCVar2 = (pMVar1->fields).consentData;
        if (pCVar2 != (ConsentData *)0x0) {
          if ((pCVar2->fields).isEuropean != 0) {
            if ((pCVar2->fields).isChild == 0) {
              cac._0_1_ = 0;
            }
            else {
              cac._0_1_ = (pCVar2->fields).isEuropean;
            }
            if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
            }
            GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::AppLovin_1_SetIsAgeRestrictedUser
                      ((bool)cac,(MethodInfo *)0x0);
          }
          if (cRam_? == '\0') {
            func_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions
                           );
            func_?(&StringLiteral__1);
            cRam_? = '\x01';
          }
          pCVar2 = (pMVar1->fields).consentData;
          if (pCVar2 != (ConsentData *)0x0) {
            bVar3 = (pCVar2->fields).isEuropean;
            if ((TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(
                             TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions
                             );
            }
            GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
            AdColonyAppOptions_1_SetPrivacyFrameworkRequired
                      (AdColonyPrivacyFramework__Enum_GDPR,bVar3,(MethodInfo *)0x0);
            pCVar2 = (pMVar1->fields).consentData;
            if (pCVar2 != (ConsentData *)0x0) {
              if ((pCVar2->fields).isEuropean == 0) {
                bVar3 = (pCVar2->fields).isAmerican;
                bVar4 = true;
              }
              else {
                bVar4 = (pCVar2->fields).isChild == 0;
                bVar3 = 1;
              }
              if ((((pCVar2->fields).hasConsented & bVar4) != 0) || (bVar3 == 0)) {
                if ((TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?(
                                 TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions
                                 );
                }
                GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
                AdColonyAppOptions_1_SetPrivacyConsentString
                          (AdColonyPrivacyFramework__Enum_GDPR,StringLiteral__1,(MethodInfo *)0x0);
              }
              if (cRam_? == '\0') {
                func_?(&
                                TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize
                               );
                func_?(&StringLiteral__1);
                cRam_? = '\x01';
              }
              pCVar2 = (pMVar1->fields).consentData;
              if (pCVar2 != (ConsentData *)0x0) {
                if ((pCVar2->fields).isEuropean != 0) {
                  bVar3 = (pCVar2->fields).isChild;
                  bVar5 = (pCVar2->fields).hasConsented;
                  if ((TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->
                      _1).cctor_finished_or_no_cctor == 0) {
                    func_?(
                                   TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize
                                   );
                  }
                  GoogleMobileAds::Mediation::LiftoffMonetize::Api::LiftoffMonetize::
                  LiftoffMonetize_1_UpdateConsentStatus
                            ((uint)((bVar5 & bVar3 == 0) == 0),StringLiteral__1,(MethodInfo *)0x0);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetConsentAdColony(MobileAdManager+ConsentAndCompliance) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetConsentAdColony
               (MobileAdManager *this,MobileAdManager_ConsentAndCompliance *cac,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
    func_?(&StringLiteral__1);
    cRam_? = '\x01';
  }
  if ((cac != (MobileAdManager_ConsentAndCompliance *)0x0) &&
     (pCVar1 = (cac->fields).consentData, pCVar1 != (ConsentData *)0x0)) {
    bVar2 = (pCVar1->fields).isEuropean;
    if ((TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
    }
    GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
    AdColonyAppOptions_1_SetPrivacyFrameworkRequired
              (AdColonyPrivacyFramework__Enum_GDPR,bVar2,(MethodInfo *)0x0);
    pCVar1 = (cac->fields).consentData;
    if (pCVar1 != (ConsentData *)0x0) {
      if ((pCVar1->fields).isEuropean == 0) {
        bVar2 = (pCVar1->fields).isAmerican;
        bVar3 = true;
      }
      else {
        bVar3 = (pCVar1->fields).isChild == 0;
        bVar2 = 1;
      }
      if ((((pCVar1->fields).hasConsented & bVar3) != 0) || (bVar2 == 0)) {
        if ((TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
        AdColonyAppOptions_1_SetPrivacyConsentString
                  (AdColonyPrivacyFramework__Enum_GDPR,StringLiteral__1,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetConsentAppLovin(MobileAdManager+ConsentAndCompliance) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetConsentAppLovin
               (MobileAdManager *this,MobileAdManager_ConsentAndCompliance *cac,MethodInfo *method)

{
  pMVar1 = cac;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
    cRam_? = '\x01';
  }
  if ((cac != (MobileAdManager_ConsentAndCompliance *)0x0) &&
     (pCVar2 = (cac->fields).consentData, pCVar2 != (ConsentData *)0x0)) {
    if ((pCVar2->fields).isEuropean == 0) {
      bVar3 = (pCVar2->fields).isAmerican;
      bVar4 = true;
    }
    else {
      bVar4 = (pCVar2->fields).isChild == 0;
      bVar3 = 1;
    }
    cac._0_1_ = ((pCVar2->fields).hasConsented & bVar4) != 0 || bVar3 == 0;
    if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
    }
    GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::AppLovin_1_SetHasUserConsent
              ((bool)cac,(MethodInfo *)0x0);
    pCVar2 = (pMVar1->fields).consentData;
    if (pCVar2 != (ConsentData *)0x0) {
      if ((pCVar2->fields).isEuropean != 0) {
        if ((pCVar2->fields).isChild == 0) {
          cac._0_1_ = 0;
        }
        else {
          cac._0_1_ = (pCVar2->fields).isEuropean;
        }
        if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::AppLovin_1_SetIsAgeRestrictedUser
                  ((bool)cac,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetConsentIronSource(Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetConsentIronSource
               (MobileAdManager *this,bool hasConsented,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource);
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource);
  }
  GoogleMobileAds::Mediation::IronSource::Api::IronSource::IronSource_1_SetConsent
            (hasConsented,(MethodInfo *)0x0);
  return;
}


/* Void SetConsentUnityAds(Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetConsentUnityAds(MobileAdManager *this,bool hasConsented,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds);
    func_?(&StringLiteral_gdpr_consent);
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds);
  }
  GoogleMobileAds::Mediation::UnityAds::Api::UnityAds::UnityAds_1_SetConsentMetaData
            (StringLiteral_gdpr_consent,hasConsented,(MethodInfo *)0x0);
  return;
}


/* Void SetConsentVungle(MobileAdManager+ConsentAndCompliance) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetConsentVungle
               (MobileAdManager *this,MobileAdManager_ConsentAndCompliance *cac,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
    func_?(&StringLiteral__1);
    cRam_? = '\x01';
  }
  if ((cac != (MobileAdManager_ConsentAndCompliance *)0x0) &&
     (pCVar1 = (cac->fields).consentData, pCVar1 != (ConsentData *)0x0)) {
    if ((pCVar1->fields).isEuropean != 0) {
      bVar2 = (pCVar1->fields).isChild;
      bVar3 = (pCVar1->fields).hasConsented;
      if ((TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize)
        ;
      }
      GoogleMobileAds::Mediation::LiftoffMonetize::Api::LiftoffMonetize::
      LiftoffMonetize_1_UpdateConsentStatus
                ((uint)((bVar3 & bVar2 == 0) == 0),StringLiteral__1,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupConsentAndCompliance(ConsentData) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetupConsentAndCompliance
               (MobileAdManager *this,ConsentData *consentData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__ConsentAndCompliance
                   );
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
    func_?(&StringLiteral_Consent_data_not_set__Using_defa);
    func_?(&StringLiteral_consentAndCompliance__);
    cRam_? = '\x01';
  }
  if (consentData == (ConsentData *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Consent_data_not_set__Using_defa,(MethodInfo *)0x0);
    pMVar1 = (MobileAdManager_ConsentAndCompliance *)
             func_?(
                            TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__ConsentAndCompliance
                            );
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Assets__Scripts__AdIntegration__ConsentData);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pMVar1,ExceptionArgument__Enum_obj,unaff_EBP);
    method_01 = TypeInfo__Assets__Scripts__AdIntegration__ConsentData;
    value = (ConsentData *)func_?();
    (value->fields).isAmerican = 1;
    (value->fields).isEuropean = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    (pMVar1->fields).consentData = value;
    func_?(&pMVar1->fields,value);
  }
  else {
    method_00 = 
    TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__ConsentAndCompliance;
    pMVar1 = (MobileAdManager_ConsentAndCompliance *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pMVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (pMVar1->fields).consentData = consentData;
    func_?(&pMVar1->fields,consentData);
  }
  TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
  consentAndCompliance = pMVar1;
  func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields,
                  pMVar1);
  pSVar2 = StringLiteral_consentAndCompliance__;
  pMVar1 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
           consentAndCompliance;
  if (pMVar1 == (MobileAdManager_ConsentAndCompliance *)0x0) {
    str1 = (String *)0x0;
  }
  else {
    str1 = (String *)
           (*(code *)(pMVar1->klass->vtable).ToString.method)(pMVar1,pMVar1->klass[1]._0.image);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar2,str1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  MobileAdManager_SetConsent
            ((MobileAdManager *)0x0,
             TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
             consentAndCompliance,(MethodInfo *)0x0);
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
         MobileAdManager_ToString(MobileAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
    func_?(&StringLiteral_internalAdManagerState_not_initi);
    func_?(&StringLiteral__0_u000A_1_);
    cRam_? = '\x01';
  }
  arg1 = (this->fields).internalAdManagerState;
  if (arg1 != (MobileAdManager_InternalAdManagerState *)0x0) {
    pSVar1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__0_u000A_1_,
                        (Object *)
                        TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->
                        static_fields->consentAndCompliance,(Object *)arg1,(MethodInfo *)0x0);
    return pSVar1;
  }
  return StringLiteral_internalAdManagerState_not_initi;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_UpdateControllerUpdate(MobileAdManager *this,MethodInfo *method)

{
  this_00 = (this->fields).rewardedAdResultHandler;
  ppMVar1 = &(this->fields).rewardedAdResultHandler;
  if ((this_00 != (MobileAdManager_RewardedAdResultHandler *)0x0) && ((this_00->fields).IsDone != 0)
     ) {
    MobileAdManager+RewardedAdResultHandler::MobileAdManager_RewardedAdResultHandler_DoCallBack
              (this_00,(MethodInfo *)0x0);
    *ppMVar1 = (MobileAdManager_RewardedAdResultHandler *)0x0;
    func_?(ppMVar1,0);
  }
  this_01 = (this->fields).interstitialAdResultHandler;
  ppMVar2 = &(this->fields).interstitialAdResultHandler;
  if ((this_01 != (MobileAdManager_InterstitialAdResultHandler *)0x0) &&
     ((this_01->fields).IsDone != 0)) {
    MobileAdManager+InterstitialAdResultHandler::
    MobileAdManager_InterstitialAdResultHandler_DoCallBack(this_01,(MethodInfo *)0x0);
    *ppMVar2 = (MobileAdManager_InterstitialAdResultHandler *)0x0;
    func_?(ppMVar2,0);
  }
  return;
}


/* MobileAdManager(Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager__ctor(MobileAdManager *this,bool testing,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
    cRam_? = '\x01';
  }
  (this->fields).timeoutSuccessDelay = 0x1e;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
  TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->testing =
       testing;
  return;
}


/* Boolean get_IsAdRunning() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_get_IsAdRunning(MobileAdManager *this,MethodInfo *method)

{
  if ((this->fields).rewardedAdResultHandler != (MobileAdManager_RewardedAdResultHandler *)0x0) {
    return 1;
  }
  return (this->fields).interstitialAdResultHandler !=
         (MobileAdManager_InterstitialAdResultHandler *)0x0;
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
          pMVar4 = (pMVar2->fields).adLoadState;
          if (pMVar4 == (MobileAdManager_AdLoadState *)0x0) goto code_?;
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
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Boolean get_ReadyForRewardedAdRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_get_ReadyForRewardedAdRequest(MobileAdManager *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).internalAdManagerState;
  if (pMVar2 != (MobileAdManager_InternalAdManagerState *)0x0) {
    if ((pMVar2->fields).isReady == 0) {
      return 0;
    }
    pMVar3 = (pMVar2->fields).internalStateRewardedAds;
    if (pMVar3 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
      if ((pMVar3->fields).isHandlingRequest != 0) {
        return 0;
      }
      pMVar4 = (pMVar2->fields).internalStateInterstitial;
      if (pMVar4 != (MobileAdManager_InternalStateInterstitial *)0x0) {
        if ((pMVar4->fields).isHandlingRequest != 0) {
          return 0;
        }
        pMVar5 = (pMVar3->fields).adLoadState;
        if (pMVar5 != (MobileAdManager_AdLoadState *)0x0) {
          return (byte)((uint)(pMVar5->fields).loadAttempts >> 0x1f) ^ 1;
        }
      }
    }
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* String get_RewardedAdNotAvailableText() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
         MobileAdManager_get_RewardedAdNotAvailableText(MobileAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Please_watch_the_ad_from_start_t);
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
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      func_?(&TypeInfo__System__TimeSpan);
      cRam_? = '\x01';
    }
    TVar1 = MobileAdManager+InternalAdManagerState::
            MobileAdManager_InternalAdManagerState_get_TimeSinceLastInterstitial
                      (this_00,(MethodInfo *)0x0);
    if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__TimeSpan);
    }
    val2 = MobileAdManager+InternalAdManagerState::
           MobileAdManager_InternalAdManagerState_get_TimeSinceLastRewarded
                     (this_00,(MethodInfo *)0x0);
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    iVar2 = mscorlib.dll::System::Math::Math_Min_5(TVar1._ticks,val2._ticks,(MethodInfo *)0x0);
    return (TimeSpan)iVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  TVar1._ticks = (*pcVar3)();
  return (TimeSpan)TVar1._ticks;
}

/* decompilation failed: Exception while decompiling 10517760: Decompiler process died */

/* decompilation failed: Exception while decompiling 10517790: Decompiler process died */

