
/* Void ClaimReward() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_ClaimReward
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TimedPlayReward__RewardTracker);
    cRam_? = '\x01';
  }
  if ((TypeInfo__TimedPlayReward__RewardTracker->static_fields->IsCollected == 0) &&
     (pAVar1 = TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged,
     pAVar1 != (Action *)0x0)) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_Initialize
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__TimedPlayReward__RewardTracker);
    func_?(&MethodInfo__TimedPlayReward__OnCollectedChanged__);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__TimedPlayReward__OnCollectedChanged__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = (Action *)0x0;
code_?:
    func_?();
    bVar2 = MVGameControllerBase::MVGameControllerBase_get_UsingDevSessionData((MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UpdateController::UpdateController_AddUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,
               1,(MethodInfo *)0x0);
    (this->fields)._RewardAvailable_k__BackingField = 0;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      (this->fields)._IsClaimable_k__BackingField = 0;
      TimedPlayReward_RequestRewardPermission(this,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 != (Action *)0x0) {
      TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = pAVar3;
      pAVar3 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar1;
      }
      if (pAVar3 == (Action *)0x0) goto code_?;
      goto code_?;
    }
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnCollectedChanged() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_OnCollectedChanged
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    IStack_1.m_value = (int32_t)&TypeInfo__TimedPlayReward__RewardTracker;
    func_?();
    cRam_? = '\x01';
  }
  TypeInfo__TimedPlayReward__RewardTracker->static_fields->IsCollected = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__NotificationController);
    func_?(&TypeInfo__PostRequest);
    func_?(&
                    MethodInfo__TimedPlayReward__OnFinishedRewardCollecting_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__UnityEngine__WWWForm);
    func_?(&StringLiteral_Thank_you_for_playing_this_NEW_g);
    func_?(&StringLiteral_token);
    func_?(&StringLiteral__XP_);
    func_?(&StringLiteral_profile_id);
    func_?(&StringLiteral_planet_id);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    IStack_1.m_value = (this->fields)._RewardXP_k__BackingField;
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Thank_you_for_playing_this_NEW_g,pSVar2,StringLiteral__XP_,
                        (MethodInfo *)0x0);
    pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    NotificationController::NotificationController_PushNotification
              (pSVar2,(Sprite *)0x0,5,(MethodInfo *)0x0);
    this_01 = (ContextualMenuManipulator *)
              MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (this_01 != (ContextualMenuManipulator *)0x0) {
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::ContextualMenuManipulator::
      ContextualMenuManipulator_OnContextualMenuEvent
                (this_01,(ContextualMenuPopulateEvent *)(this->fields)._RewardXP_k__BackingField,
                 (MethodInfo *)0x0);
      (this->fields)._IsClaimable_k__BackingField = 0;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      this_02 = (WWWForm *)func_?();
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
                (this_02,(MethodInfo *)0x0);
      if ((pGVar3 != (GameSessionData *)0x0) && (this_02 != (WWWForm *)0x0)) {
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                  (this_02,StringLiteral_token,(pGVar3->fields).token,(MethodInfo *)0x0);
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                  (this_02,StringLiteral_profile_id,(pGVar3->fields).profileID,(MethodInfo *)0x0);
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                  (this_02,StringLiteral_planet_id,(pGVar3->fields).planetID,(MethodInfo *)0x0);
        pSVar2 = (pGVar3->fields).gameRewardURL;
        this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                   *)func_?();
        DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata
        ::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  (this_03,(Object *)this,
                   MethodInfo__TimedPlayReward__OnFinishedRewardCollecting_UnityEngine__Networking__UnityWebRequest_
                   ,(MethodInfo *)0x0);
        pPStack4 = TypeInfo__PostRequest;
        this_04 = (PostRequest *)func_?();
        PostRequest::PostRequest__ctor
                  (this_04,pSVar2,this_02,
                   (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_03,
                   WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
        if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_04,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_OnDestroy
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__TimedPlayReward__RewardTracker);
    func_?(&MethodInfo__TimedPlayReward__OnCollectedChanged__);
    func_?(&
                    MethodInfo__TimedPlayReward__OnFinishedRewardCollecting_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&
                    MethodInfo__TimedPlayReward__OnRewardData_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  pDVar1 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
            *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (pDVar1,(Object *)this,
             MethodInfo__TimedPlayReward__OnRewardData_UnityEngine__Networking__UnityWebRequest_,
             (MethodInfo *)0x0);
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDVar1,(MethodInfo *)0x0);
  pDVar1 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
            *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (pDVar1,(Object *)this,
             MethodInfo__TimedPlayReward__OnFinishedRewardCollecting_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  pAVar2 = TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__TimedPlayReward__OnCollectedChanged__,
             (MethodInfo *)0x0);
  pAStack3 =
       (Action *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAStack3 == (Action *)0x0) {
    TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = (Action *)0x0;
code_?:
    func_?();
    return;
  }
  pAVar2 = (Action *)0x0;
  if (pAStack3->klass == TypeInfo__System__Action) {
    pAVar2 = pAStack3;
  }
  if (pAVar2 == (Action *)0x0) {
    pAStack4 = TypeInfo__System__Action;
    func_?();
    pAStack3 = extraout_ECX;
    pAStack4 = extraout_EDX;
  }
  else {
    TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAStack3->klass == TypeInfo__System__Action) {
      pAVar2 = pAStack3;
    }
    pAStack4 = TypeInfo__System__Action;
    if (pAVar2 != (Action *)0x0) goto code_?;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnFinishedRewardCollecting(UnityWebRequest) */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_OnFinishedRewardCollecting
               (TimedPlayReward *this,UnityWebRequest *www,MethodInfo *method)

{
  TimedPlayReward_RequestRewardPermission(this,(MethodInfo *)0x0);
  return;
}


/* Void OnFinishedViewingAd() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_OnFinishedViewingAd
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__NotificationController);
    func_?(&TypeInfo__PostRequest);
    func_?(&
                    MethodInfo__TimedPlayReward__OnFinishedRewardCollecting_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__UnityEngine__WWWForm);
    func_?(&StringLiteral_Thank_you_for_playing_this_NEW_g);
    func_?(&StringLiteral_token);
    func_?(&StringLiteral__XP_);
    func_?(&StringLiteral_profile_id);
    func_?(&StringLiteral_planet_id);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    IStack_1.m_value = (this->fields)._RewardXP_k__BackingField;
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Thank_you_for_playing_this_NEW_g,pSVar2,StringLiteral__XP_,
                        (MethodInfo *)0x0);
    pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    NotificationController::NotificationController_PushNotification
              (pSVar2,(Sprite *)0x0,5,(MethodInfo *)0x0);
    this_01 = (ContextualMenuManipulator *)
              MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (this_01 != (ContextualMenuManipulator *)0x0) {
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::ContextualMenuManipulator::
      ContextualMenuManipulator_OnContextualMenuEvent
                (this_01,(ContextualMenuPopulateEvent *)(this->fields)._RewardXP_k__BackingField,
                 (MethodInfo *)0x0);
      (this->fields)._IsClaimable_k__BackingField = 0;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      this_02 = (WWWForm *)func_?();
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
                (this_02,(MethodInfo *)0x0);
      if ((pGVar3 != (GameSessionData *)0x0) && (this_02 != (WWWForm *)0x0)) {
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                  (this_02,StringLiteral_token,(pGVar3->fields).token,(MethodInfo *)0x0);
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                  (this_02,StringLiteral_profile_id,(pGVar3->fields).profileID,(MethodInfo *)0x0);
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                  (this_02,StringLiteral_planet_id,(pGVar3->fields).planetID,(MethodInfo *)0x0);
        pSVar2 = (pGVar3->fields).gameRewardURL;
        this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                   *)func_?();
        DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata
        ::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  (this_03,(Object *)this,
                   MethodInfo__TimedPlayReward__OnFinishedRewardCollecting_UnityEngine__Networking__UnityWebRequest_
                   ,(MethodInfo *)0x0);
        pPStack4 = TypeInfo__PostRequest;
        this_04 = (PostRequest *)func_?();
        PostRequest::PostRequest__ctor
                  (this_04,pSVar2,this_02,
                   (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_03,
                   WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
        if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_04,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnRewardData(UnityWebRequest) */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_OnRewardData
               (TimedPlayReward *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TimedPlayReward__RewardData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<TimedPlayReward::RewardData>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__TimedPlayReward__RewardTracker);
    func_?(&TypeInfo__WaitForTicks);
    func_?(&StringLiteral_no_gold_reward_available);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(www,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
      return;
    }
    this_00 = System.dll::System::Net::WebCompletionSource`1[Unity::IL2CPP::Metadata::
              __Il2CppFullySharedGenericType]::
              WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_CurrentResult
                        ((WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                          *)www,(MethodInfo *)0x0);
    if (this_00 !=
        (WebCompletionSource_1_T_Result_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
               DownloadHandler_get_text((DownloadHandler *)this_00,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar3 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                         (pSVar1,
                          TimedPlayReward__RewardData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<TimedPlayReward::RewardData>_System__String_
                         );
      if (pOVar3 != (Object *)0x0) {
        _UNK_? = pOVar3[2].klass;
        UNK_? = *(bool *)&pOVar3[1].klass;
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)&UNK_?,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,UNK_?,(MethodInfo *)0x0);
          TypeInfo__TimedPlayReward__RewardTracker->static_fields->IsCollected = UNK_? == 0;
          iVar4 = _UNK_?;
          if (UNK_? != 0) {
            this_02 = (WaitForTicks *)func_?();
            WaitForTicks::WaitForTicks__ctor(this_02,iVar4 * 1000,(MethodInfo *)0x0);
            _UNK_? = this_02;
            func_?();
            return;
          }
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_no_gold_reward_available,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RequestRewardPermission() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_RequestRewardPermission
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__GetRequest);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__TimedPlayReward__OnRewardData_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&StringLiteral__profile_id__0__planet_id__1__to);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    iStack_2 = (pGVar1->fields).profileID;
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
    iStack_3 = (pGVar1->fields).planetID;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    pSVar4 = mscorlib.dll::System::String::String_Format_2
                       (StringLiteral__profile_id__0__planet_id__1__to,arg0,arg1,
                        (Object *)(pGVar1->fields).token,(MethodInfo *)0x0);
    pSVar4 = mscorlib.dll::System::String::String_Concat_3
                       ((pGVar1->fields).gameRewardDataURL,pSVar4,(MethodInfo *)0x0);
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>)
    ;
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)this,
               MethodInfo__TimedPlayReward__OnRewardData_UnityEngine__Networking__UnityWebRequest_,
               (MethodInfo *)0x0);
    pGStack5 = TypeInfo__GetRequest;
    this_01 = (AssetBundleRequest *)func_?();
    AssetBundleRequest::AssetBundleRequest__ctor
              (this_01,pSVar4,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
               WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_UpdateControllerUpdate
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  if ((this->fields)._RewardAvailable_k__BackingField == 0) {
    return;
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,1,(MethodInfo *)0x0);
    this_00 = (this->fields).waitForTicks;
    if (this_00 != (WaitForTicks *)0x0) {
      bVar1 = WaitForTicks::WaitForTicks_get_TimeIsUp(this_00,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((this_02 != (MVNetworkGame *)0x0) &&
           (MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_02,(MethodInfo *)0x0),
           (this->fields).waitForTicks != (WaitForTicks *)0x0)) {
          pTVar2 = this->klass;
          (this->fields)._IsClaimable_k__BackingField = 0;
          (*(code *)(pTVar2->vtable).DisableEffects.method)();
          (*(code *)(this->klass->vtable).UpdateOutline.method)();
          return;
        }
      }
      else {
        (this->fields)._IsClaimable_k__BackingField = 1;
        (this->fields)._RewardAvailable_k__BackingField = 0;
        this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (this_03,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        key = (Object *)func_?();
        value = (Object *)func_?(TypeInfo__System__Int32);
        if (this_03 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_03,key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          NotificationController::NotificationController_OnNotificationReceived
                    (NotificationType__Enum_GoldRewardReady,
                     (Dictionary_2_System_Object_System_Object_ *)this_03,(MethodInfo *)0x0);
          (*(code *)(this->klass->vtable).EnableEffects.method)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

