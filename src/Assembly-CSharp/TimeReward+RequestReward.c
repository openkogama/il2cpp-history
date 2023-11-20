
/* TimeReward+RewardStateBase Update() */

TimeReward_RewardStateBase *
Assembly-CSharp.dll::TimeReward+RequestReward::TimeReward_RequestReward_Update
          (TimeReward_RequestReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TimeReward__RewardDone);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TimeReward__RewardDone;
  value = (TimeReward_RewardStateBase *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  return value;
}


/* TimeReward+RequestReward() */

void Assembly-CSharp.dll::TimeReward+RequestReward::TimeReward_RequestReward__ctor
               (TimeReward_RequestReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__PostRequest);
    func_?(&TypeInfo__UnityEngine__WWWForm);
    func_?(&StringLiteral_token);
    func_?(&StringLiteral_profile_id);
    func_?(&StringLiteral_planet_id);
    func_?(&StringLiteral_s_gameRewardURL__);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,in_ECX);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  this_00 = (WWWForm *)func_?(TypeInfo__UnityEngine__WWWForm);
  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
            (this_00,(MethodInfo *)0x0);
  if ((pGVar1 != (GameSessionData *)0x0) && (this_00 != (WWWForm *)0x0)) {
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
              (this_00,StringLiteral_token,(pGVar1->fields).token,(MethodInfo *)0x0);
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
              (this_00,StringLiteral_profile_id,(pGVar1->fields).profileID,(MethodInfo *)0x0);
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
              (this_00,StringLiteral_planet_id,(pGVar1->fields).planetID,(MethodInfo *)0x0);
    pSVar2 = (pGVar1->fields).gameRewardURL;
    this_01 = (PostRequest *)func_?(TypeInfo__PostRequest);
    PostRequest::PostRequest__ctor
              (this_01,pSVar2,this_00,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0,
               WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_s_gameRewardURL__,(pGVar1->fields).gameRewardURL,
                        (MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

