
/* Void Destroy() */

void Assembly-CSharp.dll::TimeReward+RequestRewardData::TimeReward_RequestRewardData_Destroy
               (TimeReward_RequestRewardData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__TimeReward__RequestRewardData__OnRewardData_UnityEngine__Networking__UnityWebRequest_
             ,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void OnRewardData(UnityWebRequest) */

void Assembly-CSharp.dll::TimeReward+RequestRewardData::TimeReward_RequestRewardData_OnRewardData
               (TimeReward_RequestRewardData *this,UnityWebRequest *www,MethodInfo *method)

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
    pSVar1 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_www_error__,pSVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
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
                          TimeReward_RequestRewardData__RewardData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<TimeReward_RequestRewardData::RewardData>_System__String_
                         );
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_2
                         (StringLiteral_www_text__,value,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar1,(MethodInfo *)0x0);
      if (pXVar3 != (XPLevelLimits *)0x0) {
        pBStack4 = TypeInfo__System__Boolean;
        pOVar5 = (Object *)func_?();
        pSVar1 = mscorlib.dll::System::String::String_Concat
                           ((Object *)StringLiteral__rewardData_rewardEnabled__,pOVar5,
                            (MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar1,(MethodInfo *)0x0);
        if ((char)(pXVar3->fields)._PrevXP_k__BackingField == '\0') {
          (this->fields).requestedRewardDataStatus = 2;
          return;
        }
        pOVar5 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar1 = mscorlib.dll::System::String::String_Concat
                           ((Object *)StringLiteral__rewardData_timeInSeconds__,pOVar5,
                            (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar1,(MethodInfo *)0x0);
        timeInSeconds = (pXVar3->fields)._NextXP_k__BackingField;
        amountGold = (pXVar3->fields)._Level_k__BackingField;
        this_01 = (ScaleAnimationBase *)func_?();
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,in_stack_6);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Time_is_started,(MethodInfo *)0x0);
        this_02 = (WaitForTicks *)func_?();
        WaitForTicks::WaitForTicks__ctor(this_02,timeInSeconds * 1000,(MethodInfo *)0x0);
        (this_01->fields).state = (int32_t)this_02;
        this_03 = (RewardStateDataEventArgs *)func_?();
        RewardStateDataEventArgs::RewardStateDataEventArgs__ctor
                  (this_03,timeInSeconds,amountGold,(MethodInfo *)0x0);
        (this_01->fields)._._._._.m_CachedPtr = this_03;
        (this->fields).rewardCountdown = (TimeReward_RewardCountdown *)this_01;
        (this->fields).requestedRewardDataStatus = 1;
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void TestExternalCallBack(String,
   Action`1[System.Collections.Generic.Dictionary`2[System.String,System.Object]]) */

void Assembly-CSharp.dll::TimeReward+RequestRewardData::
     TimeReward_RequestRewardData_TestExternalCallBack
               (TimeReward_RequestRewardData *this,String *function,
               Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *action
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (Dictionary_2_System_String_System_Object_ *)
        func_?(
                       TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                       );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)obj,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
            );
  pCVar1 = (CrossPlatformInputManager_VirtualButton *)
           func_?(TypeInfo__System__Boolean,&stack0xfffffffb);
  if (obj != (Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)obj,StringLiteral_rewardEnabled,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    if ((this->fields).testRewardEnabled != 0) {
      pCVar1 = (CrossPlatformInputManager_VirtualButton *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)obj,StringLiteral_timeInSeconds,pCVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      pCVar1 = (CrossPlatformInputManager_VirtualButton *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)obj,StringLiteral_gold,pCVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
    }
    if (action != (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                  0x0) {
      mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
      String,System::Object]]::
      Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                (action,obj,
                 MethodInfo__System__Action<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Invoke_System__Collections__Generic__Dictionary<System::String,_System::Object>_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* TimeReward+RewardStateBase Update() */

TimeReward_RewardStateBase *
Assembly-CSharp.dll::TimeReward+RequestRewardData::TimeReward_RequestRewardData_Update
          (TimeReward_RequestRewardData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).requestedRewardDataStatus;
  if (iVar1 == 2) {
    method_00 = TypeInfo__TimeReward__RewardDone;
    this = (TimeReward_RequestRewardData *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play
              ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  }
  else if (iVar1 == 1) {
    return (TimeReward_RewardStateBase *)(this->fields).rewardCountdown;
  }
  return (TimeReward_RewardStateBase *)this;
}


/* TimeReward+RequestRewardData() */

void Assembly-CSharp.dll::TimeReward+RequestRewardData::TimeReward_RequestRewardData__ctor
               (TimeReward_RequestRewardData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  object = this;
  (this->fields).testRewardEnabled = 1;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    this = (TimeReward_RequestRewardData *)(pGVar1->fields).profileID;
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
    iStack_2 = (pGVar1->fields).planetID;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
    pSVar3 = (pGVar1->fields).token;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Format_2
                       (StringLiteral__profile_id__0__planet_id__1__to,arg0,arg1,(Object *)pSVar3,
                        (MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if (pGVar1 != (GameSessionData *)0x0) {
      pSVar3 = mscorlib.dll::System::String::String_Concat_2
                         ((pGVar1->fields).gameRewardDataURL,pSVar3,(MethodInfo *)0x0);
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)object,
                 MethodInfo__TimeReward__RequestRewardData__OnRewardData_UnityEngine__Networking__UnityWebRequest_
                 ,
                 MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                );
      this_01 = (GetRequest *)func_?(TypeInfo__GetRequest);
      GetRequest::GetRequest__ctor
                (this_01,pSVar3,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                 WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__AsyncWWWManager);
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
      if (pGVar1 != (GameSessionData *)0x0) {
        pSVar3 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_MVGameControllerBase_GameSession,
                            (pGVar1->fields).gameRewardDataURL,(String *)0x0,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          this = (TimeReward_RequestRewardData *)TypeInfo__UnityEngine__Debug;
          func_?();
        }
        this = (TimeReward_RequestRewardData *)0x0;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

