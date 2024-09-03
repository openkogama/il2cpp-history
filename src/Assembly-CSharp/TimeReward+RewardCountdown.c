
/* TimeReward+RewardStateBase Update() */

TimeReward_RewardStateBase *
Assembly-CSharp.dll::TimeReward+RewardCountdown::TimeReward_RewardCountdown_Update
          (TimeReward_RewardCountdown *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__TimeReward__RequestReward);
    func_?(&StringLiteral_Time_is_up);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).waitForTicks;
  if (this_00 != (WaitForTicks *)0x0) {
    bVar1 = WaitForTicks::WaitForTicks_get_TimeIsUp(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return (TimeReward_RewardStateBase *)this;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Time_is_up,(MethodInfo *)0x0);
    pTVar2 = (TimeReward_RewardStateBase *)func_?(TypeInfo__TimeReward__RequestReward);
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pTVar2,ExceptionArgument__Enum_obj,unaff_retaddr);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    this_01 = (WWWForm *)func_?();
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
              (this_01,(MethodInfo *)0x0);
    if ((pGVar3 != (GameSessionData *)0x0) && (this_01 != (WWWForm *)0x0)) {
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                (this_01,StringLiteral_token,(pGVar3->fields).token,(MethodInfo *)0x0);
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                (this_01,StringLiteral_profile_id,(pGVar3->fields).profileID,(MethodInfo *)0x0);
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                (this_01,StringLiteral_planet_id,(pGVar3->fields).planetID,(MethodInfo *)0x0);
      pSVar4 = (pGVar3->fields).gameRewardURL;
      this_02 = (PostRequest *)func_?(TypeInfo__PostRequest);
      PostRequest::PostRequest__ctor
                (this_02,pSVar4,this_01,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0,
                 WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_02,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_s_gameRewardURL__,(pGVar3->fields).gameRewardURL,
                          (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar4,(MethodInfo *)0x0);
      return pTVar2;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pTVar2 = (TimeReward_RewardStateBase *)(*pcVar5)();
  return pTVar2;
}


/* TimeReward+RewardCountdown(Int32, Int32) */

void Assembly-CSharp.dll::TimeReward+RewardCountdown::TimeReward_RewardCountdown__ctor
               (TimeReward_RewardCountdown *this,int32_t timeInSeconds,int32_t amountGold,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__RewardStateDataEventArgs);
    func_?(&TypeInfo__WaitForTicks);
    func_?(&StringLiteral_Time_is_started);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Time_is_started,(MethodInfo *)0x0);
  this_00 = (WaitForTicks *)func_?(TypeInfo__WaitForTicks);
  WaitForTicks::WaitForTicks__ctor(this_00,timeInSeconds * 1000,(MethodInfo *)0x0);
  (this->fields).waitForTicks = this_00;
  func_?(&(this->fields).waitForTicks,this_00);
  this_01 = (RewardStateDataEventArgs *)func_?(TypeInfo__RewardStateDataEventArgs);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_01,(MethodInfo *)0x0);
  TVar1._ticks = 0;
  mscorlib.dll::System::TimeSpan::TimeSpan__ctor_2
            ((TimeSpan *)&stack0xfffffff4,0,0,0,timeInSeconds,(MethodInfo *)0x0);
  *(List_1_System_Object_ **)&(this_01->fields).timeSpan._ticks =
       (List_1_System_Object_ *)TVar1._ticks;
  (this_01->fields).amountGold = amountGold;
  *(int *)((int)&(this_01->fields).timeSpan._ticks + 4) = (int)((ulonglong)TVar1._ticks >> 0x20);
  (this->fields)._.rewardStateEventArgs = this_01;
  func_?();
  return;
}

