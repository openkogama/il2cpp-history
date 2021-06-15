
/* TimeReward+RewardStateBase Update() */

TimeReward_RewardStateBase *
Assembly-CSharp.dll::TimeReward+RequestReward::TimeReward_RequestReward_Update
          (TimeReward_RequestReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TimeReward__RewardDone;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  return (TimeReward_RewardStateBase *)this_00;
}


/* TimeReward+RequestReward() */

void Assembly-CSharp.dll::TimeReward+RequestReward::TimeReward_RequestReward__ctor
               (TimeReward_RequestReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,in_ECX);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
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
               WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)this_01);
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
    pSVar2 = (pGVar1->fields).gameRewardURL;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_s_gameRewardURL__,pSVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

