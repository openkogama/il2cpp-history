
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
  this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
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


/* Void OnRewardData(UnityWebRequest) */

void Assembly-CSharp.dll::TimeReward+RequestRewardData::TimeReward_RequestRewardData_OnRewardData
               (TimeReward_RequestRewardData *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
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
                          TimeReward_RequestRewardData__RewardData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<TimeReward_RequestRewardData::RewardData>_System__String_
                         );
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_www_text__,pSVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar1,(MethodInfo *)0x0);
      if (pOVar3 != (Object *)0x0) {
        if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString
                           ((Boolean *)&stack0xfffffffb,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral__rewardData_rewardEnabled__,pSVar1,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar1,(MethodInfo *)0x0);
        if (*(char *)&pOVar3[1].klass != '\0') {
          pSVar1 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)&pOVar3[1].monitor,(MethodInfo *)0x0);
          pSVar1 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral__rewardData_timeInSeconds__,pSVar1,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar1,(MethodInfo *)0x0);
          pOVar4 = pOVar3[2].klass;
          seconds = pOVar3[1].monitor;
          value = (TimeReward_RewardCountdown *)func_?();
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)value,ExceptionArgument__Enum_obj,in_stack_5);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Time_is_started,(MethodInfo *)0x0);
          this_01 = (WaitForTicks *)func_?();
          WaitForTicks::WaitForTicks__ctor(this_01,(int)seconds * 1000,(MethodInfo *)0x0);
          (value->fields).waitForTicks = this_01;
          func_?();
          this_02 = (RewardStateDataEventArgs *)func_?();
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
                    ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_02,
                     (MethodInfo *)0x0);
          _pLStack_10 = 0;
          mscorlib.dll::System::TimeSpan::TimeSpan__ctor_2
                    ((TimeSpan *)&pLStack_6,0,0,0,(int32_t)seconds,(MethodInfo *)0x0);
          TVar7._ticks = _pLStack_10;
          stack0xfffffff4 = (UnityWebRequest *)((ulonglong)_pLStack_10 >> 0x20);
          *(List_1_System_Object_ **)&(this_02->fields).timeSpan._ticks = pLStack_6;
          (this_02->fields).amountGold = (int32_t)pOVar4;
          *(UnityWebRequest **)((int)&(this_02->fields).timeSpan._ticks + 4) = stack0xfffffff4;
          (value->fields)._.rewardStateEventArgs = this_02;
          _pLStack_10 = TVar7._ticks;
          func_?();
          (this->fields).rewardCountdown = value;
          func_?();
          (this->fields).requestedRewardDataStatus = 1;
          return;
        }
        (this->fields).requestedRewardDataStatus = 2;
        return;
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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
            );
  pOVar1 = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffffb);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_rewardEnabled,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    if ((this->fields).testRewardEnabled != 0) {
      pOVar1 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,
                 (Object *)StringLiteral_timeInSeconds,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      pOVar1 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_gold,
                 pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
    }
    if (action != (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                  0x0) {
      (*(action->fields)._._.invoke_impl)();
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
    func_?(&TypeInfo__TimeReward__RewardDone);
    cRam_? = '\x01';
  }
  if ((this->fields).requestedRewardDataStatus == 2) {
    method_00 = TypeInfo__TimeReward__RewardDone;
    this = (TimeReward_RequestRewardData *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  }
  else if ((this->fields).requestedRewardDataStatus == 1) {
    return (TimeReward_RewardStateBase *)(this->fields).rewardCountdown;
  }
  return (TimeReward_RewardStateBase *)this;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
    puStack_2 = (undefined *)(pGVar1->fields).planetID;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&puStack_2);
    pSVar3 = mscorlib.dll::System::String::String_Format_2
                       (StringLiteral__profile_id__0__planet_id__1__to,arg0,arg1,
                        (Object *)(pGVar1->fields).token,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 != (GameSessionData *)0x0) {
      path = mscorlib.dll::System::String::String_Concat_3
                       ((pGVar1->fields).gameRewardDataURL,pSVar3,(MethodInfo *)0x0);
      this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
                func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__TimeReward__RequestRewardData__OnRewardData_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      this_01 = (AssetBundleRequest *)func_?(TypeInfo__GetRequest);
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
        pSVar3 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_MVGameControllerBase_GameSession,
                            (pGVar1->fields).gameRewardDataURL,pSVar3,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

