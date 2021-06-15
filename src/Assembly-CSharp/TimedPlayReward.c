
/* Void ClaimReward() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_ClaimReward
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__TimedPlayReward__RewardTracker->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__TimedPlayReward__RewardTracker->_1).cctor_started == 0)) {
    func_?(TypeInfo__TimedPlayReward__RewardTracker);
  }
  if (TypeInfo__TimedPlayReward__RewardTracker->static_fields->IsCollected == 0) {
    if ((((uint)(TypeInfo__TimedPlayReward__RewardTracker->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__TimedPlayReward__RewardTracker->_1).cctor_started == 0)) {
      func_?(TypeInfo__TimedPlayReward__RewardTracker);
    }
    if (TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged != (Action *)0x0)
    {
      if ((((uint)(TypeInfo__TimedPlayReward__RewardTracker->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__TimedPlayReward__RewardTracker->_1).cctor_started == 0)) {
        func_?(TypeInfo__TimedPlayReward__RewardTracker);
      }
      this_00 = (JumpState_OnWallJumpDelegate *)
                TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged;
      if (this_00 == (JumpState_OnWallJumpDelegate *)0x0) {
        func_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_Initialize
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__TimedPlayReward__RewardTracker->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__TimedPlayReward__RewardTracker->_1).cctor_started == 0)) {
    func_?(TypeInfo__TimedPlayReward__RewardTracker);
  }
  pAVar1 = TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__TimedPlayReward__OnCollectedChanged__,
             (MethodInfo *)0x0);
  pAVar2 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAVar2 != (Action *)0x0) {
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar1 = pAVar2;
    }
    if (pAVar1 == (Action *)0x0) {
      func_?();
      goto code_?;
    }
  }
  TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = pAVar1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  bVar3 = MVGameControllerBase::MVGameControllerBase_get_UsingDevSessionData((MethodInfo *)0x0);
  if (bVar3 == 0) {
    if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
      func_?();
    }
    UpdateController::UpdateController_AddUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,
               1,(MethodInfo *)0x0);
    (this->fields)._RewardAvailable_k__BackingField = 0;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_01 == (GameObject *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,0,(MethodInfo *)0x0);
    (this->fields)._IsClaimable_k__BackingField = 0;
    TimedPlayReward_RequestRewardPermission(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnCollectedChanged() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_OnCollectedChanged
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pTStack_1 = _UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__TimedPlayReward__RewardTracker->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__TimedPlayReward__RewardTracker->_1).cctor_started == 0)) {
    pTStack_1 = TypeInfo__TimedPlayReward__RewardTracker;
    func_?();
  }
  TypeInfo__TimedPlayReward__RewardTracker->static_fields->IsCollected = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    pTStack_1 = (TimedPlayReward_RewardTracker__Class *)(this->fields)._RewardXP_k__BackingField;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&pTStack_1);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_1
                       ((Object *)StringLiteral_Thank_you_for_playing_this_NEW_g,arg1,
                        (Object *)StringLiteral__XP_,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?(TypeInfo__NotificationController);
    }
    NotificationController::NotificationController_PushNotification
              (pSVar2,(Sprite *)0x0,5,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (this_01 != (GameEventManager *)0x0) {
      GameEventManager::GameEventManager_NotifyXPDeltaAmount
                (this_01,(this->fields)._RewardXP_k__BackingField,(MethodInfo *)0x0);
      (this->fields)._IsClaimable_k__BackingField = 0;
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
      this_02 = (WWWForm *)func_?(TypeInfo__UnityEngine__WWWForm);
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
        form = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_03,(Object *)this,
                   MethodInfo__TimedPlayReward__OnFinishedRewardCollecting_UnityEngine__Networking__UnityWebRequest_
                   ,
                   MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                  );
        pPStack4 = TypeInfo__PostRequest;
        this_04 = (PostRequest *)func_?();
        PostRequest::PostRequest__ctor
                  (this_04,pSVar2,(WWWForm *)form,
                   (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_03,
                   WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
          func_?();
        }
        AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_04,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_OnDestroy
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)this,
             MethodInfo__TimedPlayReward__OnRewardData_UnityEngine__Networking__UnityWebRequest_,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar1,(MethodInfo *)0x0);
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)this,
             MethodInfo__TimedPlayReward__OnFinishedRewardCollecting_UnityEngine__Networking__UnityWebRequest_
             ,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UpdateController___RemoveUpdateObject_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  pSVar2 = this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this;
    iVar3 = 0;
    while( true ) {
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?();
      }
      pLVar4 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar4 == (List_1_PriorityDataUpdate___Array *)0x0) break;
      if ((int)pLVar4->max_length <= iVar3) {
        if ((((uint)(TypeInfo__TimedPlayReward__RewardTracker->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__TimedPlayReward__RewardTracker->_1).cctor_started == 0)) {
          func_?();
        }
        pAVar5 = TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged;
        pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar1,(Object *)this,MethodInfo__TimedPlayReward__OnCollectedChanged__,
                   (MethodInfo *)0x0);
        pAVar6 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pAVar5,(Delegate *)pUVar1,(MethodInfo *)0x0);
        _uStack00000044 = CONCAT44(TypeInfo__System__Action,pAVar6);
        pAVar5 = (Action *)0x0;
        if (pAVar6 != (Action *)0x0) {
          if (pAVar6->klass == TypeInfo__System__Action) {
            pAVar5 = pAVar6;
          }
          if (pAVar5 == (Action *)0x0) goto code_?;
        }
        TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = pAVar5;
        return;
      }
      this = (TimedPlayReward *)pSVar2;
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?();
        this = (TimedPlayReward *)pSVar2;
      }
      if (TypeInfo__UpdateController->static_fields->updateBuckets ==
          (List_1_PriorityDataUpdate___Array *)0x0) break;
      this_01 = (List_1_UnityEngine_Vector3_ *)func_?();
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      pSVar2 = (ScaleAnimationBase *)this;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)this,
                 MethodInfo__UpdateController___RemoveUpdateObject_c__AnonStorey0____m__0_PriorityDataUpdate_
                 ,
                 MethodInfo__System__Predicate<PriorityDataUpdate>__Predicate_System__Object__void__
                );
      if (this_01 == (List_1_UnityEngine_Vector3_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__RemoveAll
                (this_01,(Predicate_1_UnityEngine_Vector3_ *)pUVar1,
                 MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                );
      iVar3 = iVar3 + 1;
    }
  }
  _uStack00000044 = func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    iStack_1 = (this->fields)._RewardXP_k__BackingField;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_1
                       ((Object *)StringLiteral_Thank_you_for_playing_this_NEW_g,arg1,
                        (Object *)StringLiteral__XP_,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?(TypeInfo__NotificationController);
    }
    NotificationController::NotificationController_PushNotification
              (pSVar2,(Sprite *)0x0,5,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (this_01 != (GameEventManager *)0x0) {
      GameEventManager::GameEventManager_NotifyXPDeltaAmount
                (this_01,(this->fields)._RewardXP_k__BackingField,(MethodInfo *)0x0);
      (this->fields)._IsClaimable_k__BackingField = 0;
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
      this_02 = (WWWForm *)func_?(TypeInfo__UnityEngine__WWWForm);
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
        form = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_03,(Object *)this,
                   MethodInfo__TimedPlayReward__OnFinishedRewardCollecting_UnityEngine__Networking__UnityWebRequest_
                   ,
                   MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                  );
        pPStack4 = TypeInfo__PostRequest;
        this_04 = (PostRequest *)func_?();
        PostRequest::PostRequest__ctor
                  (this_04,pSVar2,(WWWForm *)form,
                   (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_03,
                   WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
          func_?();
        }
        AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_04,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnRewardData(UnityWebRequest) */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_OnRewardData
               (TimedPlayReward *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(www,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
      return;
    }
    this_00 = (ActDetectorBase *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)www,
                         (MethodInfo *)0x0);
    if (this_00 != (ActDetectorBase *)0x0) {
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
      ActDetectorBase_OnApplicationQuit(this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pXVar3 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                         (value,
                          TimedPlayReward__RewardData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<TimedPlayReward::RewardData>_System__String_
                         );
      if (pXVar3 != (XPLevelLimits *)0x0) {
        this_00[1].klass = (ActDetectorBase__Class *)(pXVar3->fields)._Level_k__BackingField;
        (this_00->fields).detectionEventHasListener = (bool)(pXVar3->fields)._PrevXP_k__BackingField
        ;
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this_00,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,(this_00->fields).detectionEventHasListener,(MethodInfo *)0x0);
          bVar2 = (this_00->fields).detectionEventHasListener;
          if ((((uint)(TypeInfo__TimedPlayReward__RewardTracker->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__TimedPlayReward__RewardTracker->_1).cctor_started == 0)) {
            func_?();
          }
          TypeInfo__TimedPlayReward__RewardTracker->static_fields->IsCollected = bVar2 == 0;
          if ((this_00->fields).detectionEventHasListener != 0) {
            pUVar4 = (this_00->fields).detectionAction;
            this_02 = (UnityEvent *)func_?();
            WaitForTicks::WaitForTicks__ctor
                      ((WaitForTicks *)this_02,(int)pUVar4 * 1000,(MethodInfo *)0x0);
            (this_00->fields).detectionEvent = this_02;
            return;
          }
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    iStack_2 = (pGVar1->fields).profileID;
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
    iStack_3 = (pGVar1->fields).planetID;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    pSVar4 = (pGVar1->fields).token;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar4 = mscorlib.dll::System::String::String_Format_2
                       (StringLiteral__profile_id__0__planet_id__1__to,arg0,arg1,(Object *)pSVar4,
                        (MethodInfo *)0x0);
    pSVar4 = mscorlib.dll::System::String::String_Concat_2
                       ((pGVar1->fields).gameRewardDataURL,pSVar4,(MethodInfo *)0x0);
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__TimedPlayReward__OnRewardData_UnityEngine__Networking__UnityWebRequest_,
               MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
              );
    this_01 = (GetRequest *)func_?(TypeInfo__GetRequest);
    GetRequest::GetRequest__ctor
              (this_01,pSVar4,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
               WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_UpdateControllerUpdate
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._RewardAvailable_k__BackingField == 0) {
    return;
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,1,(MethodInfo *)0x0);
    this_00 = (this->fields).waitForTicks;
    if (this_00 != (WaitForTicks *)0x0) {
      bVar1 = WaitForTicks::WaitForTicks_get_TimeIsUp(this_00,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
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
        data = (Dictionary_2_System_Object_System_Object_ *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        key = (String *)func_?();
        value = (CrossPlatformInputManager_VirtualButton *)func_?(TypeInfo__System__Int32);
        if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)data,key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
            func_?();
          }
          NotificationController::NotificationController_OnNotificationReceived
                    (NotificationType__Enum_GoldRewardReady,data,(MethodInfo *)0x0);
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


/* Boolean get_IsClaimable() */

bool Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_get_IsClaimable
               (TimedPlayReward *this,MethodInfo *method)

{
  return (this->fields)._IsClaimable_k__BackingField;
}


/* Void set_IsClaimable(Boolean) */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_set_IsClaimable
               (TimedPlayReward *this,bool value,MethodInfo *method)

{
  (this->fields)._IsClaimable_k__BackingField = value;
  return;
}


/* Void set_RewardXP(Int32) */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_set_RewardXP
               (TimedPlayReward *this,int32_t value,MethodInfo *method)

{
  (this->fields)._RewardXP_k__BackingField = value;
  return;
}

