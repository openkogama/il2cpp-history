
/* Void Destroy() */

void Assembly-CSharp.dll::MVLocalPlayerRegistered::MVLocalPlayerRegistered_Destroy
               (MVLocalPlayerRegistered *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__MVLocalPlayerRegistered__LevelCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.xpProgress;
  if (this_00 != (XPProgress *)0x0) {
    XPProgress::XPProgress_Destroy(this_00,(MethodInfo *)0x0);
    this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
              func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__MVLocalPlayerRegistered__LevelCallback_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void InitializeLeveling(InitialLevelData) */

void Assembly-CSharp.dll::MVLocalPlayerRegistered::MVLocalPlayerRegistered_InitializeLeveling
               (MVLocalPlayerRegistered *this,InitialLevelData *initialLevelData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MVLocalPlayerRegistered__OnXPProgressDataChangeRegistered_XPProgressData_
                   );
    func_?(&TypeInfo__XPProgress__OnXPProgressDataDelegate);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__XPProgress);
    cRam_? = '\x01';
  }
  initialLevelData_00 = initialLevelData;
  if (initialLevelData != (InitialLevelData *)0x0) {
    (this->fields)._._.level = (initialLevelData->fields).Level;
    this_00 = (XPProgress *)func_?(TypeInfo__XPProgress);
    XPProgress::XPProgress__ctor
              (this_00,(MVLocalPlayer *)this,initialLevelData_00,(MethodInfo *)0x0);
    (this->fields)._.xpProgress = this_00;
    func_?(&(this->fields)._.xpProgress,this_00);
    if ((this->fields)._.OnInitializeLeveling != (Action *)0x0) {
      pAVar1 = (this->fields)._.OnInitializeLeveling;
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
    }
    initialLevelData = (InitialLevelData *)(this->fields)._.xpProgress;
    if (initialLevelData != (InitialLevelData *)0x0) {
      a = (XPProgress_OnXPProgressDataDelegate *)(initialLevelData->fields).BadgeUrlData;
      this_01 = (UnityAction_1_System_Object_ *)
                func_?(TypeInfo__XPProgress__OnXPProgressDataDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVLocalPlayerRegistered__OnXPProgressDataChangeRegistered_XPProgressData_
                 ,(MethodInfo *)0x0);
      pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar2 == (Delegate *)0x0) {
        (initialLevelData->fields).BadgeUrlData = (List_1_BadgeUrlData_ *)0x0;
      }
      else {
        pDVar3 = (Delegate *)0x0;
        if ((XPProgress_OnXPProgressDataDelegate__Class *)pDVar2->klass ==
            TypeInfo__XPProgress__OnXPProgressDataDelegate) {
          pDVar3 = pDVar2;
        }
        if (pDVar3 == (Delegate *)0x0) {
          func_?();
          goto code_?;
        }
        (initialLevelData->fields).BadgeUrlData = (List_1_BadgeUrlData_ *)pDVar3;
        pDVar3 = (Delegate *)0x0;
        if ((XPProgress_OnXPProgressDataDelegate__Class *)pDVar2->klass ==
            TypeInfo__XPProgress__OnXPProgressDataDelegate) {
          pDVar3 = pDVar2;
        }
        if (pDVar3 == (Delegate *)0x0) goto code_?;
      }
      func_?();
      level = (undefined *)(this->fields)._._.level;
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
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar4 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LocalPlayerLevelChanged
                  (pMVar4,(int32_t)level,(MethodInfo *)0x0);
        if ((this->fields)._.oldLevel != 0) {
          this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)func_?(
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                      );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                    (this_02,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          initialLevelData = (InitialLevelData *)CONCAT13(4,initialLevelData._0_3_);
          key = (Object *)func_?(TypeInfo__System__Byte,(int)&initialLevelData + 3);
          puStack_5 = level;
          value = (Object *)func_?(TypeInfo__System__Int32,&puStack_5);
          if (this_02 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_02,key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__NotificationController);
          }
          NotificationController::NotificationController_OnNotificationReceived
                    (NotificationType__Enum_LevelUp,
                     (Dictionary_2_System_Object_System_Object_ *)this_02,(MethodInfo *)0x0);
        }
        (this->fields)._.oldLevel = (int32_t)level;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar4 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinNotification
                    (pMVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void LevelCallback(UnityWebRequest) */

void Assembly-CSharp.dll::MVLocalPlayerRegistered::MVLocalPlayerRegistered_LevelCallback
               (MVLocalPlayerRegistered *this,UnityWebRequest *result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<int>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if (result != (UnityWebRequest *)0x0) {
    this_00 = System.dll::System::Net::WebCompletionSource`1[Unity::IL2CPP::Metadata::
              __Il2CppFullySharedGenericType]::
              WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_CurrentResult
                        ((WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                          *)result,(MethodInfo *)0x0);
    if (this_00 !=
        (WebCompletionSource_1_T_Result_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
              DownloadHandler_get_text((DownloadHandler *)this_00,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar1 = int_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<int>_System__String_
      ;
      pIVar2 = (Il2CppClass *)
               Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_1
                         (value,
                          int_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<int>_System__String_
                         );
      pIVar3 = pMVar1->klass;
      pMVar1->klass = pIVar2;
      if ((pIVar3 != pIVar2) && (pMVar1->parameters != (Il2CppType **)0x0)) {
        pIStack4 = pMVar1->parameters[5];
        (*(code *)pMVar1->parameters[3])();
      }
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnLevelChangedLocalReceivedLevelData(Int32) */

void Assembly-CSharp.dll::MVLocalPlayerRegistered::
     MVLocalPlayerRegistered_OnLevelChangedLocalReceivedLevelData
               (MVLocalPlayerRegistered *this,int32_t level,MethodInfo *method)

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
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  iVar2 = level;
  if (pMVar1 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LocalPlayerLevelChanged
              (pMVar1,level,(MethodInfo *)0x0);
    if ((this->fields)._.oldLevel != 0) {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      level = CONCAT13(4,(undefined3)level);
      key = (Object *)func_?(TypeInfo__System__Byte,(int)&level + 3);
      value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
      if (this_00 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,key,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      method = (MethodInfo *)0x8;
      level = (int32_t)&UNK_?;
      NotificationController::NotificationController_OnNotificationReceived
                (NotificationType__Enum_LevelUp,(Dictionary_2_System_Object_System_Object_ *)this_00
                 ,(MethodInfo *)0x0);
    }
    (this->fields)._.oldLevel = iVar2;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinNotification
                (pMVar1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnXPProgressDataChangeRegistered(XPProgressData) */

void Assembly-CSharp.dll::MVLocalPlayerRegistered::
     MVLocalPlayerRegistered_OnXPProgressDataChangeRegistered
               (MVLocalPlayerRegistered *this,XPProgressData *xpProgress,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__GetRequest);
    func_?(&
                    MethodInfo__MVLocalPlayerRegistered__LevelCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__MV__Common__Urls);
    cRam_? = '\x01';
  }
  pXVar1 = xpProgress;
  if (xpProgress != (XPProgressData *)0x0) {
    bVar2 = XPProgressData::XPProgressData_get_XPLimitExceeded(xpProgress,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__Common__Urls);
      }
      pSVar3 = MVCommon.dll::MV::Common::Urls::Urls_get_Level((MethodInfo *)0x0);
      IStack_4.m_value = (this->fields)._._._ProfileID_k__BackingField;
      str1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_4,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_3(pSVar3,str1,(MethodInfo *)0x0);
      this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
                func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVLocalPlayerRegistered__LevelCallback_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      this_02 = (AssetBundleRequest *)func_?(TypeInfo__GetRequest);
      AssetBundleRequest::AssetBundleRequest__ctor
                (this_02,pSVar3,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                 WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_02,(MethodInfo *)0x0);
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Int32);
      func_?(&TypeInfo__NotificationController);
      func_?(&StringLiteral_You_gained__0__XP_);
      cRam_? = '\x01';
    }
    if ((this->fields)._.OnXPProgressData != (XPProgress_OnXPProgressDataDelegate *)0x0) {
      pXVar5 = (this->fields)._.OnXPProgressData;
      (*(pXVar5->fields)._._.invoke_impl)
                ((pXVar5->fields)._._.method_code,pXVar1,(pXVar5->fields)._._.method);
    }
    pSVar3 = TM::TM__(StringLiteral_You_gained__0__XP_,(MethodInfo *)0x0);
    xpProgress = (XPProgressData *)(pXVar1->fields).xpDelta;
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&xpProgress);
    pSVar3 = mscorlib.dll::System::String::String_Format(pSVar3,arg0,(MethodInfo *)0x0);
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__NotificationController);
    }
    NotificationController::NotificationController_PushNotification
              (pSVar3,(Sprite *)0x0,5,(MethodInfo *)0x0);
    this_00 = (GameEventManager_AvatarCommandsPlayModeManager *)
              MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_SetIntermediateDebriefing
                (this_00,(pXVar1->fields).xpDelta,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

