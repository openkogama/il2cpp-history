
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
    this_01 = (Action_1_Object_ *)
              func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    if (this_01 != (Action_1_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
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
  if (initialLevelData == (InitialLevelData *)0x0) goto code_?;
  (this->fields)._._.level = (initialLevelData->fields).Level;
  pXVar1 = (XPProgress *)func_?(TypeInfo__XPProgress);
  if (pXVar1 == (XPProgress *)0x0) goto code_?;
  XPProgress::XPProgress__ctor(pXVar1,(MVLocalPlayer *)this,initialLevelData_00,(MethodInfo *)0x0);
  (this->fields)._.xpProgress = pXVar1;
  func_?(&(this->fields)._.xpProgress,pXVar1);
  if ((this->fields)._.OnInitializeLeveling != (Action *)0x0) {
    pAVar2 = (this->fields)._.OnInitializeLeveling;
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,(pAVar2->fields)._._.method);
  }
  pXVar1 = (this->fields)._.xpProgress;
  if (pXVar1 == (XPProgress *)0x0) goto code_?;
  initialLevelData = (InitialLevelData *)(pXVar1->fields).OnXPProgressData;
  this_00 = (Action_1_Object_ *)func_?(TypeInfo__XPProgress__OnXPProgressDataDelegate);
  if (this_00 == (Action_1_Object_ *)0x0) goto code_?;
  mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MVLocalPlayerRegistered__OnXPProgressDataChangeRegistered_XPProgressData_,
             (MethodInfo *)0x0);
  pXVar3 = (XPProgress_OnXPProgressDataDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)initialLevelData,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pXVar3 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
    (pXVar1->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
code_?:
    func_?();
    level = (undefined *)(this->fields)._._.level;
    puStack_4 = level;
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
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LocalPlayerLevelChanged
                (pMVar5,(int32_t)level,(MethodInfo *)0x0);
      if ((this->fields)._.oldLevel != 0) {
        this_01 = (Dictionary_2_System_Object_System_Object_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
        if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        initialLevelData = (InitialLevelData *)CONCAT13(4,initialLevelData._0_3_);
        key = (Object *)func_?(TypeInfo__System__Byte,(int)&initialLevelData + 3);
        puStack_6 = puStack_4;
        value = (Object *)func_?(TypeInfo__System__Int32,&puStack_6);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_01,key,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__NotificationController);
        }
        NotificationController::NotificationController_OnNotificationReceived
                  (NotificationType__Enum_LevelUp,this_01,(MethodInfo *)0x0);
        level = puStack_4;
      }
      (this->fields)._.oldLevel = (int32_t)level;
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinNotification
                  (pMVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pXVar7 = (XPProgress_OnXPProgressDataDelegate *)0x0;
    if (pXVar3->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
      pXVar7 = pXVar3;
    }
    if (pXVar7 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
      (pXVar1->fields).OnXPProgressData = pXVar7;
      pXVar7 = (XPProgress_OnXPProgressDataDelegate *)0x0;
      if (pXVar3->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
        pXVar7 = pXVar3;
      }
      if (pXVar7 != (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    this_00 = (DownloadHandler *)
              mscorlib.dll::System::Collections::Generic::ValueListBuilder`1[System::Object]::
              ValueListBuilder_1_System_Object__1_get_Length
                        ((ValueListBuilder_1_System_Object__1 *)result,(MethodInfo *)0x0);
    if (this_00 != (DownloadHandler *)0x0) {
      value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
              DownloadHandler_get_text(this_00,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar1 = int_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<int>_System__String_
      ;
      pIVar2 = (Il2CppClass *)
               Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_5
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
      this_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      level = unaff_ESI;
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      this = (MVLocalPlayerRegistered *)((int)&level + 3);
      level = CONCAT13(4,(undefined3)level);
      key = (Object *)func_?();
      value = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,key,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__NotificationController);
      }
      NotificationController::NotificationController_OnNotificationReceived
                (NotificationType__Enum_LevelUp,this_00,(MethodInfo *)0x0);
    }
    (this->fields)._.oldLevel = iVar2;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame_OperationRequests *)0x0) {
      level = 0;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinNotification
                (pMVar1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  level = (int32_t)&UNK_?;
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
  IStack_1.m_value = in_ECX;
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
  pXVar2 = xpProgress;
  if (xpProgress != (XPProgressData *)0x0) {
    bVar3 = XPProgressData::XPProgressData_get_XPLimitExceeded(xpProgress,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Int32);
        func_?(&TypeInfo__NotificationController);
        func_?(&StringLiteral_You_gained__0__XP_);
        cRam_? = '\x01';
      }
      if ((this->fields)._.OnXPProgressData != (XPProgress_OnXPProgressDataDelegate *)0x0) {
        pXVar4 = (this->fields)._.OnXPProgressData;
        (*(pXVar4->fields)._._.invoke_impl)
                  ((pXVar4->fields)._._.method_code,pXVar2,(pXVar4->fields)._._.method);
      }
      pSVar5 = TM::TM__(StringLiteral_You_gained__0__XP_,(MethodInfo *)0x0);
      xpProgress = (XPProgressData *)(pXVar2->fields).xpDelta;
      arg0 = (Object *)func_?(TypeInfo__System__Int32,&xpProgress);
      pSVar5 = mscorlib.dll::System::String::String_Format(pSVar5,arg0,(MethodInfo *)0x0);
      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__NotificationController);
      }
      NotificationController::NotificationController_PushNotification
                (pSVar5,(Sprite *)0x0,5,(MethodInfo *)0x0);
      this_00 = (InventoryController *)
                MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (this_00 != (InventoryController *)0x0) {
        InventoryController::InventoryController_PageTurned
                  (this_00,(pXVar2->fields).xpDelta,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__Common__Urls);
      }
      pSVar5 = MVCommon.dll::MV::Common::Urls::Urls_get_Level((MethodInfo *)0x0);
      IStack_1.m_value = (this->fields)._._._ProfileID_k__BackingField;
      str1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
      xpProgress = (XPProgressData *)
                   mscorlib.dll::System::String::String_Concat_3(pSVar5,str1,(MethodInfo *)0x0);
      this_01 = (Action_1_Object_ *)
                func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      if (this_01 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVLocalPlayerRegistered__LevelCallback_UnityEngine__Networking__UnityWebRequest_
                   ,(MethodInfo *)0x0);
        this_02 = (AssetBundleRequest *)func_?(TypeInfo__GetRequest);
        if (this_02 != (AssetBundleRequest *)0x0) {
          AssetBundleRequest::AssetBundleRequest__ctor
                    (this_02,(String *)xpProgress,
                     (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                     WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
          if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          IStack_1.m_value = (int32_t)&UNK_?;
          AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

