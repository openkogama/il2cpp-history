
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
      if (pMVar1 != (MobileAdManager_ConsentAndCompliance *)0x0) {
        bVar2 = MobileAdManager+ConsentAndCompliance::
                MobileAdManager_ConsentAndCompliance_get_DoTagForChildDirectedTreatment
                          (pMVar1,(MethodInfo *)0x0);
        if (bVar2 != 0) {
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
        if (pMVar1 != (MobileAdManager_ConsentAndCompliance *)0x0) {
          bVar2 = MobileAdManager+ConsentAndCompliance::
                  MobileAdManager_ConsentAndCompliance_get_TagForUnderAgeOfConsent
                            (pMVar1,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            uVar4 = 0;
            puVar5 = &UNK_?;
            mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                      ((Nullable_1_UInt32_ *)0x0,1,
                       MethodInfo__System__Nullable<GoogleMobileAds::Api::TagForUnderAgeOfConsent>__Nullable_GoogleMobileAds__Api__TagForUnderAgeOfConsent_
                      );
            *(undefined **)&(this_00->fields).TagForUnderAgeOfConsent = puVar5;
            (this_00->fields).TagForUnderAgeOfConsent.value = uVar4;
          }
          if ((TypeInfo__GoogleMobileAds__Api__MobileAds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::MobileAds_SetRequestConfiguration
                    (this_00,(MethodInfo *)0x0);
          pAVar6 = (AdRequest *)func_?();
          GoogleMobileAds.Core.dll::GoogleMobileAds::Api::AdRequest::AdRequest__ctor
                    (pAVar6,(MethodInfo *)0x0);
          return pAVar6;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pAVar6 = (AdRequest *)(*pcVar7)();
  return pAVar6;
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
  (this->fields).rewardedAdResultHandler = (MobileAdManager_RewardedAdResultHandler *)0x0;
  func_?(&(this->fields).rewardedAdResultHandler,0);
  (this->fields).interstitialAdResultHandler = (MobileAdManager_InterstitialAdResultHandler *)0x0;
  func_?(&(this->fields).interstitialAdResultHandler,0);
  if ((this->fields).internalAdManagerState != (MobileAdManager_InternalAdManagerState *)0x0) {
    MobileAdManager+InternalAdManagerState::MobileAdManager_InternalAdManagerState_Destroy
              ((this->fields).internalAdManagerState,(MethodInfo *)0x0);
    (this->fields).internalAdManagerState = (MobileAdManager_InternalAdManagerState *)0x0;
    func_?();
  }
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_AdConsent__,::StringLiteral__,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
    dictionary = (SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                  *)0x0;
    bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      dictionary = (SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                    *)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
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
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    if (dictionary ==
        (SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
         *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Consent_data_not_set__Using_defa,(MethodInfo *)0x0);
      pMVar4 = (MobileAdManager_ConsentAndCompliance *)func_?();
      MobileAdManager+ConsentAndCompliance::MobileAdManager_ConsentAndCompliance__ctor
                (pMVar4,(MethodInfo *)0x0);
      TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
      consentAndCompliance = pMVar4;
    }
    else {
      this_00 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?();
      System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
      Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_00,dictionary,(MethodInfo *)0x0);
      TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
      consentAndCompliance = (MobileAdManager_ConsentAndCompliance *)this_00;
    }
    func_?();
    pSVar1 = StringLiteral_consentAndCompliance__;
    pMVar4 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
             consentAndCompliance;
    if (pMVar4 == (MobileAdManager_ConsentAndCompliance *)0x0) {
      pSVar2 = (String *)0x0;
    }
    else {
      pSVar2 = (String *)(*(code *)(pMVar4->klass->vtable).ToString.method)();
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
    MobileAdManager_SetConsent
              (this,TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields
                    ->consentAndCompliance,(MethodInfo *)0x0);
    this_01 = (MobileAdManager_InternalAdManagerState *)func_?();
    MobileAdManager+InternalAdManagerState::MobileAdManager_InternalAdManagerState__ctor
              (this_01,(MethodInfo *)0x0);
    (this->fields).internalAdManagerState = this_01;
    func_?();
    if ((TypeInfo__GoogleMobileAds__Api__MobileAds->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::MobileAds_SetiOSAppPauseOnBackground
              (1,(MethodInfo *)0x0);
    this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_02,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InitCompleteAction_GoogleMobileAds__Api__InitializationStatus_
               ,(MethodInfo *)0x0);
    GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::MobileAds_Initialize
              ((Action_1_GoogleMobileAds_Api_InitializationStatus_ *)this_02,(MethodInfo *)0x0);
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UpdateController::UpdateController_AddUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,
               1,(MethodInfo *)0x0);
    (this->fields).isInitialized = 1;
    if ((this->fields).internalAdManagerState != (MobileAdManager_InternalAdManagerState *)0x0) {
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
      if (*(MobileAdManager_InternalStateRewardedAd **)(in_stack_5 + 0xc) !=
          (MobileAdManager_InternalStateRewardedAd *)0x0) {
        MobileAdManager+InternalStateRewardedAd::
        MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd
                  (*(MobileAdManager_InternalStateRewardedAd **)(in_stack_5 + 0xc),
                   (MethodInfo *)0x0);
        if (*(MobileAdManager_InternalStateInterstitial **)(in_stack_5 + 0x10) !=
            (MobileAdManager_InternalStateInterstitial *)0x0) {
          MobileAdManager+InternalStateInterstitial::
          MobileAdManager_InternalStateInterstitial_CreateAndLoadInterstitialAd
                    (*(MobileAdManager_InternalStateInterstitial **)(in_stack_5 + 0x10),
                     (MethodInfo *)0x0);
          *(undefined1 *)(in_stack_5 + 8) = 1;
          return;
        }
      }
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    uVar7 = func_?(&TypeInfo__System__Exception);
    this_03 = (Exception *)func_?(uVar7);
    method_00 = (MethodInfo *)0x0;
    pSVar1 = (String *)func_?(&StringLiteral_AdManager_already_initialized);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_03,pSVar1,method_00);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__Initialize__
                   );
    func_?();
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  pIStack_1 = TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult;
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pIStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_MobileAdManager_InterstitialCall,pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  this_00 = (this->fields).interstitialAdResultHandler;
  if (this_00 != (MobileAdManager_InterstitialAdResultHandler *)0x0) {
    MobileAdManager+InterstitialAdResultHandler::
    MobileAdManager_InterstitialAdResultHandler_SetResult(this_00,obj,(MethodInfo *)0x0);
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
  if ((this->fields).interstitialAdResultHandler ==
      (MobileAdManager_InterstitialAdResultHandler *)0x0) {
    if ((this->fields).adUIManager == (IAdUIManager *)0x0) goto code_?;
    cVar1 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    if (cVar1 == '\0') {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
        func_?(&StringLiteral_Ad_InterstitialRequest_);
        func_?(&StringLiteral_Ad_InterstitialRequest);
        cRam_? = '\x01';
      }
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0)
      ;
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Ad_InterstitialRequest_,pSVar2,(MethodInfo *)0x0);
      MobileAdManager_SendStat(pSVar2,(MethodInfo *)0x0);
      MobileAdManager_SendStat(StringLiteral_Ad_InterstitialRequest,(MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
                  (pMVar3,IncrementStatRequestType__Enum_InterstitialAdRequest,0,(MethodInfo *)0x0);
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                    (pMVar3,AdType__Enum_InterstitialAd,AdActionType__Enum_Start,context,
                     (MethodInfo *)0x0);
          pIVar4 = (this->fields).adUIManager;
          pUVar5 = (UnityAction_1_System_Int32Enum_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (pUVar5,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InterstitialCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                     ,(MethodInfo *)0x0);
          if (pIVar4 != (IAdUIManager *)0x0) {
            func_?(1,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar4);
            pIVar4 = (this->fields).adUIManager;
            this_01 = (MobileAdManager_InterstitialAdResultHandler *)
                      func_?(
                                     TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InterstitialAdResultHandler
                                     );
            MobileAdManager+InterstitialAdResultHandler::
            MobileAdManager_InterstitialAdResultHandler__ctor
                      (this_01,(Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)
                               &UNK_?,pIVar4,(AdContext__Enum)pMVar3,(MethodInfo *)0x0);
            (this->fields).interstitialAdResultHandler = this_01;
            func_?(&(this->fields).interstitialAdResultHandler,this_01);
            this_00 = (this->fields).internalAdManagerState;
            pUVar5 = (UnityAction_1_System_Int32Enum_ *)
                     func_?(
                                    TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                                    );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (pUVar5,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InterstitialCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                       ,(MethodInfo *)0x0);
            if (this_00 != (MobileAdManager_InternalAdManagerState *)0x0) {
              MobileAdManager+InternalAdManagerState::
              MobileAdManager_InternalAdManagerState_RequestInterstitial
                        (this_00,(Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)
                                 pUVar5,(MethodInfo *)0x0);
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
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Unhandled_interstitial_ad_handle,(MethodInfo *)0x0);
  }
  if (interstitialCallback != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
    (*(interstitialCallback->fields)._._.invoke_impl)
              ((interstitialCallback->fields)._._.method_code,0);
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  if ((this->fields).rewardedAdResultHandler == (MobileAdManager_RewardedAdResultHandler *)0x0) {
    if ((this->fields).adUIManager == (IAdUIManager *)0x0) goto code_?;
    cVar1 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    if (cVar1 == '\0') {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      bVar3 = cRam_? == '\0';
      (this->fields).timeOfRewardedAdStart = fVar2;
      if (bVar3) {
        func_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
        func_?(&StringLiteral_Ad_RewardRequest_);
        func_?(&StringLiteral_Ad_RewardRequest);
        cRam_? = '\x01';
      }
      MobileAdManager_SendStat(StringLiteral_Ad_RewardRequest,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0)
      ;
      pSVar4 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Ad_RewardRequest_,pSVar4,(MethodInfo *)0x0);
      MobileAdManager_SendStat(pSVar4,(MethodInfo *)0x0);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
                  (pMVar5,IncrementStatRequestType__Enum_RewardedAdRequest,0,(MethodInfo *)0x0);
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                    (pMVar5,AdType__Enum_RewardedAd,AdActionType__Enum_Start,context,
                     (MethodInfo *)0x0);
          pIVar6 = (this->fields).adUIManager;
          pUVar7 = (UnityAction_1_System_Int32Enum_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (pUVar7,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                     ,(MethodInfo *)0x0);
          if (pIVar6 != (IAdUIManager *)0x0) {
            func_?(2,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar6);
            pIVar6 = (this->fields).adUIManager;
            this_01 = (MobileAdManager_RewardedAdResultHandler *)
                      func_?(
                                     TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__RewardedAdResultHandler
                                     );
            MobileAdManager+RewardedAdResultHandler::MobileAdManager_RewardedAdResultHandler__ctor
                      (this_01,(Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)
                               &UNK_?,pIVar6,0xADDR,(MethodInfo *)0x0);
            (this->fields).rewardedAdResultHandler = this_01;
            func_?(&(this->fields).rewardedAdResultHandler,this_01);
            this_00 = (this->fields).internalAdManagerState;
            pUVar7 = (UnityAction_1_System_Int32Enum_ *)
                     func_?(
                                    TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                                    );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (pUVar7,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                       ,(MethodInfo *)0x0);
            if (this_00 != (MobileAdManager_InternalAdManagerState *)0x0) {
              MobileAdManager+InternalAdManagerState::
              MobileAdManager_InternalAdManagerState_RequestRewardedAd
                        (this_00,(Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)pUVar7,
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
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Unhandled_reward_handler_detecte,(MethodInfo *)0x0);
  }
  if (rewardedAdCallback != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
    (*(rewardedAdCallback->fields)._._.invoke_impl)((rewardedAdCallback->fields)._._.method_code,0);
    return;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  pRStack_1 = TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult;
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pRStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_MobileAdManager_RewardedAdCallba,pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  if ((this->fields).timeoutAdAfterDelayAsUnlocked == 0) {
code_?:
    if (obj != RewardedAdResult__Enum_RewardUnlocked) goto code_?;
  }
  else {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar3 - (this->fields).timeOfRewardedAdStart < (float)(this->fields).timeoutSuccessDelay)
    goto code_?;
    obj = RewardedAdResult__Enum_RewardUnlocked;
  }
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).lastSeenRewardedAd = fVar3;
code_?:
  this_00 = (this->fields).rewardedAdResultHandler;
  if (this_00 != (MobileAdManager_RewardedAdResultHandler *)0x0) {
    MobileAdManager+RewardedAdResultHandler::MobileAdManager_RewardedAdResultHandler_SetResult
              (this_00,obj,(MethodInfo *)0x0);
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
  if (cac != (MobileAdManager_ConsentAndCompliance *)0x0) {
    bVar1 = MobileAdManager+ConsentAndCompliance::
            MobileAdManager_ConsentAndCompliance_get_HasConsented(cac,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    GoogleMobileAds::Mediation::UnityAds::Api::UnityAds::UnityAds_1_SetConsentMetaData
              (StringLiteral_gdpr_consent,bVar1,(MethodInfo *)0x0);
    bVar1 = MobileAdManager+ConsentAndCompliance::
            MobileAdManager_ConsentAndCompliance_get_HasConsented(cac,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    GoogleMobileAds::Mediation::IronSource::Api::IronSource::IronSource_1_SetConsent
              (bVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    bVar1 = MobileAdManager+ConsentAndCompliance::
            MobileAdManager_ConsentAndCompliance_get_HasConsented(cac,(MethodInfo *)0x0);
    if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::AppLovin_1_SetHasUserConsent
              (bVar1,(MethodInfo *)0x0);
    bVar1 = MobileAdManager+ConsentAndCompliance::
            MobileAdManager_ConsentAndCompliance_get_IsGDPRConsentRequired(cac,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      bVar1 = MobileAdManager+ConsentAndCompliance::
              MobileAdManager_ConsentAndCompliance_get_TagForUnderAgeOfConsent
                        (cac,(MethodInfo *)0x0);
      if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::AppLovin_1_SetIsAgeRestrictedUser
                (bVar1,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    bVar1 = MobileAdManager+ConsentAndCompliance::
            MobileAdManager_ConsentAndCompliance_get_IsGDPRConsentRequired(cac,(MethodInfo *)0x0);
    if ((TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
    AdColonyAppOptions_1_SetPrivacyFrameworkRequired
              (AdColonyPrivacyFramework__Enum_GDPR,bVar1,(MethodInfo *)0x0);
    bVar1 = MobileAdManager+ConsentAndCompliance::
            MobileAdManager_ConsentAndCompliance_get_HasConsented(cac,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
      AdColonyAppOptions_1_SetPrivacyConsentString
                (AdColonyPrivacyFramework__Enum_GDPR,StringLiteral__1,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    bVar1 = MobileAdManager+ConsentAndCompliance::
            MobileAdManager_ConsentAndCompliance_get_IsGDPRConsentRequired(cac,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      bVar1 = MobileAdManager+ConsentAndCompliance::
              MobileAdManager_ConsentAndCompliance_get_HasConsented(cac,(MethodInfo *)0x0);
      if ((TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      GoogleMobileAds::Mediation::LiftoffMonetize::Api::LiftoffMonetize::
      LiftoffMonetize_1_UpdateConsentStatus
                (bVar1 ^ VungleConsentStatus__Enum_1_OPTED_OUT,StringLiteral__1,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  if (cac != (MobileAdManager_ConsentAndCompliance *)0x0) {
    bVar1 = MobileAdManager+ConsentAndCompliance::
            MobileAdManager_ConsentAndCompliance_get_IsGDPRConsentRequired(cac,(MethodInfo *)0x0);
    if ((TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
    }
    GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
    AdColonyAppOptions_1_SetPrivacyFrameworkRequired
              (AdColonyPrivacyFramework__Enum_GDPR,bVar1,(MethodInfo *)0x0);
    bVar1 = MobileAdManager+ConsentAndCompliance::
            MobileAdManager_ConsentAndCompliance_get_HasConsented(cac,(MethodInfo *)0x0);
    if (bVar1 != 0) {
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
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetConsentAppLovin(MobileAdManager+ConsentAndCompliance) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetConsentAppLovin
               (MobileAdManager *this,MobileAdManager_ConsentAndCompliance *cac,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
    cRam_? = '\x01';
  }
  if (cac != (MobileAdManager_ConsentAndCompliance *)0x0) {
    bVar1 = MobileAdManager+ConsentAndCompliance::
            MobileAdManager_ConsentAndCompliance_get_HasConsented(cac,(MethodInfo *)0x0);
    if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
    }
    GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::AppLovin_1_SetHasUserConsent
              (bVar1,(MethodInfo *)0x0);
    bVar1 = MobileAdManager+ConsentAndCompliance::
            MobileAdManager_ConsentAndCompliance_get_IsGDPRConsentRequired(cac,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      bVar1 = MobileAdManager+ConsentAndCompliance::
              MobileAdManager_ConsentAndCompliance_get_TagForUnderAgeOfConsent
                        (cac,(MethodInfo *)0x0);
      if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::AppLovin_1_SetIsAgeRestrictedUser
                (bVar1,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  if (cac != (MobileAdManager_ConsentAndCompliance *)0x0) {
    bVar1 = MobileAdManager+ConsentAndCompliance::
            MobileAdManager_ConsentAndCompliance_get_IsGDPRConsentRequired(cac,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      bVar1 = MobileAdManager+ConsentAndCompliance::
              MobileAdManager_ConsentAndCompliance_get_HasConsented(cac,(MethodInfo *)0x0);
      if ((TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      GoogleMobileAds::Mediation::LiftoffMonetize::Api::LiftoffMonetize::
      LiftoffMonetize_1_UpdateConsentStatus
                (bVar1 ^ VungleConsentStatus__Enum_1_OPTED_OUT,StringLiteral__1,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    MobileAdManager+ConsentAndCompliance::MobileAdManager_ConsentAndCompliance__ctor
              (pMVar1,(MethodInfo *)0x0);
    TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
    consentAndCompliance = pMVar1;
    pMVar2 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields;
  }
  else {
    this_00 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(
                                TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__ConsentAndCompliance
                                );
    System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
    Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                        *)consentData,(MethodInfo *)0x0);
    TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
    consentAndCompliance = (MobileAdManager_ConsentAndCompliance *)this_00;
    pMVar2 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields;
  }
  func_?(pMVar2);
  pSVar3 = StringLiteral_consentAndCompliance__;
  pMVar1 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
           consentAndCompliance;
  if (pMVar1 == (MobileAdManager_ConsentAndCompliance *)0x0) {
    str1 = (String *)0x0;
  }
  else {
    str1 = (String *)(*(code *)(pMVar1->klass->vtable).ToString.method)(pMVar1);
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat_3(pSVar3,str1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  MobileAdManager_SetConsent
            ((MobileAdManager *)&UNK_?,
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
  if ((this->fields).internalAdManagerState != (MobileAdManager_InternalAdManagerState *)0x0) {
    pSVar1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__0_u000A_1_,
                        (Object *)
                        TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->
                        static_fields->consentAndCompliance,
                        (Object *)(this->fields).internalAdManagerState,(MethodInfo *)0x0);
    return pSVar1;
  }
  return StringLiteral_internalAdManagerState_not_initi;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_UpdateControllerUpdate(MobileAdManager *this,MethodInfo *method)

{
  if (((this->fields).rewardedAdResultHandler != (MobileAdManager_RewardedAdResultHandler *)0x0) &&
     (this_00 = (this->fields).rewardedAdResultHandler, (this_00->fields).IsDone != 0)) {
    MobileAdManager+RewardedAdResultHandler::MobileAdManager_RewardedAdResultHandler_DoCallBack
              (this_00,(MethodInfo *)0x0);
    (this->fields).rewardedAdResultHandler = (MobileAdManager_RewardedAdResultHandler *)0x0;
    func_?(&(this->fields).rewardedAdResultHandler,0);
  }
  if (((this->fields).interstitialAdResultHandler !=
       (MobileAdManager_InterstitialAdResultHandler *)0x0) &&
     (this_01 = (this->fields).interstitialAdResultHandler, (this_01->fields).IsDone != 0)) {
    MobileAdManager+InterstitialAdResultHandler::
    MobileAdManager_InterstitialAdResultHandler_DoCallBack(this_01,(MethodInfo *)0x0);
    (this->fields).interstitialAdResultHandler = (MobileAdManager_InterstitialAdResultHandler *)0x0;
    func_?(&(this->fields).interstitialAdResultHandler,0);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
  this_00 = (this->fields).internalAdManagerState;
  if (this_00 == (MobileAdManager_InternalAdManagerState *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  bVar2 = MobileAdManager+InternalAdManagerState::
          MobileAdManager_InternalAdManagerState_get_ReadyForRewardedAdRequest
                    (this_00,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  return (this->fields).interstitialTimeoutAfterRewardedAd <=
         fVar3 - (this->fields).lastSeenRewardedAd;
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
        pMVar4 = (((pMVar1->fields).internalStateRewardedAds)->fields).adLoadState;
        if (pMVar4 != (MobileAdManager_AdLoadState *)0x0) {
          return (byte)((uint)(pMVar4->fields).loadAttempts >> 0x1f) ^ 1;
        }
      }
    }
  }
  puStack_5 = &stack0xfffffffc;
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

/* decompilation failed: Exception while decompiling 104ec7b0: Decompiler process died */

/* decompilation failed: Exception while decompiling 104ec7e0: Decompiler process died */

/* decompilation failed: Exception while decompiling 104ec810: Decompiler process died */

