
/* TimeReward+RewardStateBase Update() */

TimeReward_RewardStateBase *
Assembly-CSharp.dll::TimeReward+RewardCountdown::TimeReward_RewardCountdown_Update
          (TimeReward_RewardCountdown *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).waitForTicks;
  if (this_00 != (WaitForTicks *)0x0) {
    bVar1 = WaitForTicks::WaitForTicks_get_TimeIsUp(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return (TimeReward_RewardStateBase *)this;
    }
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Time_is_up,(MethodInfo *)0x0);
    this_01 = (ScaleAnimationBase *)func_?(TypeInfo__TimeReward__RequestReward);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,unaff_retaddr);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    this_02 = (WWWForm *)func_?();
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
              (this_02,(MethodInfo *)0x0);
    if ((pGVar2 != (GameSessionData *)0x0) && (this_02 != (WWWForm *)0x0)) {
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                (this_02,StringLiteral_token,(pGVar2->fields).token,(MethodInfo *)0x0);
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                (this_02,StringLiteral_profile_id,(pGVar2->fields).profileID,(MethodInfo *)0x0);
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                (this_02,StringLiteral_planet_id,(pGVar2->fields).planetID,(MethodInfo *)0x0);
      pSVar3 = (pGVar2->fields).gameRewardURL;
      this_03 = (PostRequest *)func_?(TypeInfo__PostRequest);
      PostRequest::PostRequest__ctor
                (this_03,pSVar3,this_02,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0,
                 WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_03,(MethodInfo *)0x0);
      pSVar3 = (pGVar2->fields).gameRewardURL;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_2
                         (StringLiteral_s_gameRewardURL__,pSVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return (TimeReward_RewardStateBase *)this_01;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pTVar5 = (TimeReward_RewardStateBase *)(*pcVar4)();
  return pTVar5;
}


/* TimeReward+RewardCountdown(Int32, Int32) */

void Assembly-CSharp.dll::TimeReward+RewardCountdown::TimeReward_RewardCountdown__ctor
               (TimeReward_RewardCountdown *this,int32_t timeInSeconds,int32_t amountGold,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Time_is_started,(MethodInfo *)0x0);
  this_00 = (WaitForTicks *)func_?(TypeInfo__WaitForTicks);
  WaitForTicks::WaitForTicks__ctor(this_00,timeInSeconds * 1000,(MethodInfo *)0x0);
  (this->fields).waitForTicks = this_00;
  this_01 = (RewardStateDataEventArgs *)func_?(TypeInfo__RewardStateDataEventArgs);
  RewardStateDataEventArgs::RewardStateDataEventArgs__ctor
            (this_01,timeInSeconds,amountGold,(MethodInfo *)0x0);
  (this->fields)._.rewardStateEventArgs = this_01;
  return;
}

