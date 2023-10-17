
/* Void Destroy() */

void Assembly-CSharp.dll::TimeReward+RequestRewardData::TimeReward_RequestRewardData_Destroy
               (TimeReward_RequestRewardData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__TimeReward__RequestRewardData__OnRewardData_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Action_1_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  if (this_00 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__TimeReward__RequestRewardData__OnRewardData_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnRewardData(UnityWebRequest) */

void Assembly-CSharp.dll::TimeReward+RequestRewardData::TimeReward_RequestRewardData_OnRewardData
               (TimeReward_RequestRewardData *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TimeReward_RequestRewardData__RewardData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<TimeReward_RequestRewardData::RewardData>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__TimeReward__RewardCountdown);
    func_?(&StringLiteral__rewardData_rewardEnabled__);
    func_?(&StringLiteral_www_error__);
    func_?(&StringLiteral_www_text__);
    func_?(&StringLiteral__rewardData_timeInSeconds__);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_www_error__,pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      stack0xfffffff4 = (UnityWebRequest *)&UNK_?;
      func_?();
    }
    stack0xfffffff4 = (UnityWebRequest *)pSVar1;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
    stack0xfffffff4 = www;
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    stack0xfffffff4 = (UnityWebRequest *)pSVar1;
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(www,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
      return;
    }
    this_00 = (DownloadHandler *)
              mscorlib.dll::System::Collections::Generic::ValueListBuilder`1[System::Object]::
              ValueListBuilder_1_System_Object__1_get_Length
                        ((ValueListBuilder_1_System_Object__1 *)www,(MethodInfo *)0x0);
    if (this_00 != (DownloadHandler *)0x0) {
      pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
               DownloadHandler_get_text(this_00,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar3 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                         (pSVar1,
                          TimeReward_RequestRewardData__RewardData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<TimeReward_RequestRewardData::RewardData>_System__String_
                         );
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_www_text__,pSVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar1,(MethodInfo *)0x0);
      if (pOVar3 != (Object *)0x0) {
        pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                           ((Boolean *)&stack0xfffffffb,(IFormatProvider *)0x0,in_stack_4);
        pSVar1 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral__rewardData_rewardEnabled__,pSVar1,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar1,(MethodInfo *)0x0);
        if (*(char *)&pOVar3[1].klass == '\0') {
          (this->fields).requestedRewardDataStatus = 2;
          return;
        }
        pSVar1 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&pOVar3[1].monitor,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral__rewardData_timeInSeconds__,pSVar1,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar1,(MethodInfo *)0x0);
        pOVar5 = pOVar3[2].klass;
        seconds = pOVar3[1].monitor;
        value = (TimeReward_RewardCountdown *)func_?();
        if (value != (TimeReward_RewardCountdown *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)value,ExceptionArgument__Enum_obj,in_stack_4);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_Time_is_started,(MethodInfo *)0x0);
          this_01 = (WaitForTicks *)func_?();
          if (this_01 != (WaitForTicks *)0x0) {
            WaitForTicks::WaitForTicks__ctor(this_01,(int)seconds * 1000,(MethodInfo *)0x0);
            (value->fields).waitForTicks = this_01;
            func_?();
            this_02 = (RewardStateDataEventArgs *)func_?();
            if (this_02 != (RewardStateDataEventArgs *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
              TweenRunner_1_FloatTween___ctor
                        ((TweenRunner_1_FloatTween_ *)this_02,(MethodInfo *)0x0);
              _pMStack_10 = 0;
              mscorlib.dll::System::TimeSpan::TimeSpan__ctor_2
                        ((TimeSpan *)&pMStack_6,0,0,0,(int32_t)seconds,(MethodInfo *)0x0);
              TVar7._ticks = _pMStack_10;
              stack0xfffffff4 = (UnityWebRequest *)((ulonglong)_pMStack_10 >> 0x20);
              *(MonoBehaviour **)&(this_02->fields).timeSpan._ticks = pMStack_6;
              (this_02->fields).amountGold = (int32_t)pOVar5;
              *(UnityWebRequest **)((int)&(this_02->fields).timeSpan._ticks + 4) = stack0xfffffff4;
              (value->fields)._.rewardStateEventArgs = this_02;
              _pMStack_10 = TVar7._ticks;
              func_?();
              (this->fields).rewardCountdown = value;
              func_?();
              (this->fields).requestedRewardDataStatus = 1;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_rewardEnabled);
    func_?(&StringLiteral_timeInSeconds);
    func_?(&StringLiteral_gold);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
              );
    bStack_1 = (this->fields).testRewardEnabled;
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)StringLiteral_rewardEnabled,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    if ((this->fields).testRewardEnabled != 0) {
      uStack_3 = 0xb4;
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&uStack_3);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)StringLiteral_timeInSeconds,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      uStack_4 = 1;
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&uStack_4);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)StringLiteral_gold,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
    }
    if (action != (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                  0x0) {
      (*(action->fields)._._.invoke_impl)
                ((action->fields)._._.method_code,this_00,(action->fields)._._.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* TimeReward+RewardStateBase Update() */

TimeReward_RewardStateBase *
Assembly-CSharp.dll::TimeReward+RequestRewardData::TimeReward_RequestRewardData_Update
          (TimeReward_RequestRewardData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TimeReward__RewardDone);
    cRam_? = '\x01';
  }
  if ((this->fields).requestedRewardDataStatus != 2) {
    if ((this->fields).requestedRewardDataStatus == 1) {
      this = (TimeReward_RequestRewardData *)(this->fields).rewardCountdown;
    }
    return (TimeReward_RewardStateBase *)this;
  }
  pTVar1 = (TimeReward_RewardStateBase *)func_?(TypeInfo__TimeReward__RewardDone);
  if (pTVar1 != (TimeReward_RewardStateBase *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pTVar1,ExceptionArgument__Enum_obj,unaff_ESI);
    return pTVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pTVar1 = (TimeReward_RewardStateBase *)(*pcVar2)();
  return pTVar1;
}


/* TimeReward+RequestRewardData() */

void Assembly-CSharp.dll::TimeReward+RequestRewardData::TimeReward_RequestRewardData__ctor
               (TimeReward_RequestRewardData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__GetRequest);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__TimeReward__RequestRewardData__OnRewardData_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&StringLiteral_MVGameControllerBase_GameSession);
    func_?(&StringLiteral__profile_id__0__planet_id__1__to);
    cRam_? = '\x01';
  }
  (this->fields).testRewardEnabled = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    pSVar2 = mscorlib.dll::System::String::String_Format_2
                       (StringLiteral__profile_id__0__planet_id__1__to,arg0,arg1,
                        (Object *)(pGVar1->fields).token,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 != (GameSessionData *)0x0) {
      path = mscorlib.dll::System::String::String_Concat_3
                       ((pGVar1->fields).gameRewardDataURL,pSVar2,(MethodInfo *)0x0);
      this_00 = (Action_1_Object_ *)
                func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      if (this_00 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__TimeReward__RequestRewardData__OnRewardData_UnityEngine__Networking__UnityWebRequest_
                   ,(MethodInfo *)0x0);
        this_01 = (AssetBundleRequest *)func_?(TypeInfo__GetRequest);
        if (this_01 != (AssetBundleRequest *)0x0) {
          AssetBundleRequest::AssetBundleRequest__ctor
                    (this_01,path,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                     WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
          if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__AsyncWWWManager);
          }
          AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if (pGVar1 != (GameSessionData *)0x0) {
            pSVar2 = mscorlib.dll::System::String::String_Concat_4
                               (StringLiteral_MVGameControllerBase_GameSession,
                                (pGVar1->fields).gameRewardDataURL,pSVar2,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)pSVar2,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

