
/* Void Destroy() */

void Assembly-CSharp.dll::XPProgress::XPProgress_Destroy(XPProgress *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__XPProgress__XPLimitsCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__XPProgress__XPLimitsCallback_UnityEngine__Networking__UnityWebRequest_,
             (MethodInfo *)0x0);
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void OnXPLevelLimitsUpdated(XPLevelLimits) */

void Assembly-CSharp.dll::XPProgress::XPProgress_OnXPLevelLimitsUpdated
               (XPProgress *this,XPLevelLimits *xpLevelLimits,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)xpLevelLimits,(MethodInfo *)0x0);
  pXVar1 = (this->fields).xpProgressData;
  if (pXVar1 != (XPProgressData *)0x0) {
    (pXVar1->fields).xpLevelLimits = xpLevelLimits;
    func_?(&pXVar1->fields,xpLevelLimits);
    if ((this->fields).OnXPProgressData != (XPProgress_OnXPProgressDataDelegate *)0x0) {
      pXVar2 = (this->fields).OnXPProgressData;
      (*(pXVar2->fields)._._.invoke_impl)
                ((pXVar2->fields)._._.method_code,(this->fields).xpProgressData,
                 (pXVar2->fields)._._.method);
    }
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update(Int32, XPRewardType, Int32, Int32) */

void Assembly-CSharp.dll::XPProgress::XPProgress_Update
               (XPProgress *this,int32_t currentPlayerXP,XPRewardType__Enum xpId,int32_t XPdelta,
               int32_t memberCount,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pXVar2 = (this->fields).xpProgressData;
  if (pXVar2 != (XPProgressData *)0x0) {
    (pXVar2->fields).xpId = (undefined1)xpId;
    pXVar2 = (this->fields).xpProgressData;
    if (pXVar2 != (XPProgressData *)0x0) {
      (pXVar2->fields).playerCurrentXP = currentPlayerXP;
      pXVar2 = (this->fields).xpProgressData;
      if (pXVar2 != (XPProgressData *)0x0) {
        (pXVar2->fields).xpDelta = XPdelta;
        pXVar2 = (this->fields).xpProgressData;
        if (pXVar2 != (XPProgressData *)0x0) {
          (pXVar2->fields).memberCount = memberCount;
          if ((this->fields).OnXPProgressData != (XPProgress_OnXPProgressDataDelegate *)0x0) {
            pXVar3 = (this->fields).OnXPProgressData;
            puStack_1 = (pXVar3->fields)._._.method;
            pXStack_4 = (this->fields).xpProgressData;
            pvStack_5 = (pXVar3->fields)._._.method_code;
            (*(pXVar3->fields)._._.invoke_impl)();
          }
          return;
        }
      }
    }
  }
  uVar6 = func_?(&pvStack_5);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateLevel(Int32) */

void Assembly-CSharp.dll::XPProgress::XPProgress_UpdateLevel
               (XPProgress *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__GetRequest);
    func_?(&TypeInfo__MV__Common__Urls);
    func_?(&
                    MethodInfo__XPProgress__XPLimitsCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  pXVar1 = (this->fields).xpProgressData;
  if ((pXVar1 != (XPProgressData *)0x0) &&
     (pXVar2 = (pXVar1->fields).xpLevelLimits, pXVar2 != (XPLevelLimits *)0x0)) {
    if ((pXVar2->fields)._Level_k__BackingField != level) {
      if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__Common__Urls);
      }
      pSVar3 = MVCommon.dll::MV::Common::Urls::Urls_get_XPLimit((MethodInfo *)0x0);
      str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&level,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_3(pSVar3,str1,(MethodInfo *)0x0);
      this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
                func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__XPProgress__XPLimitsCallback_UnityEngine__Networking__UnityWebRequest_,
                 (MethodInfo *)0x0);
      this_01 = (AssetBundleRequest *)func_?(TypeInfo__GetRequest);
      AssetBundleRequest::AssetBundleRequest__ctor
                (this_01,pSVar3,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                 WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void XPLimitsCallback(UnityWebRequest) */

void Assembly-CSharp.dll::XPProgress::XPProgress_XPLimitsCallback
               (XPProgress *this,UnityWebRequest *result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    XPLevelLimits_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<XPLevelLimits>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if (result != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_GetUrl(result,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
    this_00 = System.dll::System::Net::WebCompletionSource`1[Unity::IL2CPP::Metadata::
              __Il2CppFullySharedGenericType]::
              WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_CurrentResult
                        ((WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                          *)result,(MethodInfo *)0x0);
    if (this_00 !=
        (WebCompletionSource_1_T_Result_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
               DownloadHandler_get_text((DownloadHandler *)this_00,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      message = (Exception *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar1,
                           XPLevelLimits_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<XPLevelLimits>_System__String_
                          );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      pEVar2 = (this_00->fields)._Error_k__BackingField;
      if (pEVar2 != (ExceptionDispatchInfo *)0x0) {
        (pEVar2->fields).m_Exception = message;
        pEStack3 = &pEVar2->fields;
        pEStack4 = message;
        func_?();
        if ((this_00->fields)._Status_k__BackingField.value__ != 0) {
          iVar5 = (this_00->fields)._Status_k__BackingField.value__;
          uStack6 = *(undefined4 *)(iVar5 + 0x14);
          pEStack4 = (Exception *)(this_00->fields)._Error_k__BackingField;
          pEStack3 = *(ExceptionDispatchInfo__Fields **)(iVar5 + 0x20);
          (**(code **)(iVar5 + 0xc))();
        }
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* XPProgress(MVLocalPlayer, InitialLevelData) */

void Assembly-CSharp.dll::XPProgress::XPProgress__ctor
               (XPProgress *this,MVLocalPlayer *player,InitialLevelData *initialLevelData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?(&TypeInfo__XPProgressData);
    func_?(&MethodInfo__XPProgress__UpdateLevel_int_);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (initialLevelData != (InitialLevelData *)0x0) {
    iVar1 = (initialLevelData->fields).XP;
    pXVar2 = (initialLevelData->fields).XPLevelLimits;
    method_00 = TypeInfo__XPProgressData;
    value = (XPProgressData *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (value->fields).playerCurrentXP = iVar1;
    (value->fields).xpLevelLimits = pXVar2;
    func_?(&value->fields,pXVar2);
    (this->fields).xpProgressData = value;
    func_?(&(this->fields).xpProgressData,value);
    if (player != (MVLocalPlayer *)0x0) {
      pUVar3 = (player->fields)._.OnLevelChanged;
      this_00 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_00,(Object *)this,MethodInfo__XPProgress__UpdateLevel_int_,(MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar4 == (Delegate *)0x0) {
        (player->fields)._.OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
        func_?();
        return;
      }
      pUVar3 = (UnityAction_1_System_Int32_ *)func_?();
      if (pUVar3 != (UnityAction_1_System_Int32_ *)0x0) {
        (player->fields)._.OnLevelChanged = pUVar3;
        iVar5 = func_?();
        if (iVar5 != 0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

