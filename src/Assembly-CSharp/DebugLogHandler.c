
/* Boolean AddLogToLogContext(String, LogType) */

bool Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_AddLogToLogContext
               (DebugLogHandler_1 *this,String *logString,LogType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__DebugLogHandler);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__DebugLogHandler);
  }
  this_00 = TypeInfo__DebugLogHandler->static_fields->ignoreLogStrings;
  if (this_00 != (HashSet_1_System_String_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      ((HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)this_00,
                       (NativeAdType__Enum)logString,
                       MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                      );
    if ((((bVar1 == 0) || (type != LogType__Enum_Error)) && (type != LogType__Enum_Warning)) &&
       (type != LogType__Enum_Log)) {
      return 0;
    }
    this_01 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                                );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
              );
    value = (CrossPlatformInputManager_VirtualButton *)
            func_?(TypeInfo__System__Int32,&stack0xfffffff8);
    if (this_01 !=
        (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                (this_01,StringLiteral_Frame,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      piVar2 = (int *)func_?(TypeInfo__UnityEngine__LogType,&type);
      if (piVar2 != (int *)0x0) {
        key = (String *)(**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
        pLVar3 = (LogType__Enum *)func_?(piVar2);
        type = *pLVar3;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  (this_01,key,(CrossPlatformInputManager_VirtualButton *)logString,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                  );
        pQVar4 = (this->fields).logContextQueue;
        if (pQVar4 != (Queue_1_Dictionary_2_System_String_System_Object_ *)0x0) {
          System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
          Queue_1_SmoothPhysicsMovement_Package__Enqueue
                    ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar4,
                     (SmoothPhysicsMovement_Package *)this_01,
                     MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Enqueue_System__Collections__Generic__Dictionary<System::String,_System::Object>_
                    );
          pQVar4 = (this->fields).logContextQueue;
          if (pQVar4 != (Queue_1_Dictionary_2_System_String_System_Object_ *)0x0) {
            pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                     KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                     KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                               ((KogamaSettingNumericBase_1_System_Single_ *)pQVar4,
                                MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__get_Count__
                               );
            if ((this->fields).maxLogContextQueueCount < (int)pIVar5) {
              pQVar4 = (this->fields).logContextQueue;
              if (pQVar4 == (Queue_1_Dictionary_2_System_String_System_Object_ *)0x0)
              goto code_?;
              System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
              Queue_1_SmoothPhysicsMovement_Package__Dequeue
                        ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar4,
                         MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Dequeue__
                        );
            }
            return 1;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  bVar1 = (*pcVar6)();
  return bVar1;
}


/* String CleanStackTrace(String) */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_CleanStackTrace
                   (String *stackTrace,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (String__Array *)func_?(TypeInfo__System__String,1);
  if (pSVar1 == (String__Array *)0x0) {
code_?:
    func_?(0);
  }
  else if ((StringLiteral_UnityEngine_Debug_LogError_Objec == (String *)0x0) ||
          (iVar2 = func_?(StringLiteral_UnityEngine_Debug_LogError_Objec,
                                   (pSVar1->klass->_0).element_class), iVar2 != 0)) {
    if (pSVar1->max_length == 0) goto code_?;
    pSVar1->vector[0] = StringLiteral_UnityEngine_Debug_LogError_Objec;
    if ((stackTrace != (String *)0x0) &&
       (pSVar1 = mscorlib.dll::System::String::String_Split_5
                           (stackTrace,pSVar1,StringSplitOptions__Enum_RemoveEmptyEntries,
                            (MethodInfo *)0x0), pSVar1 != (String__Array *)0x0)) {
      if (pSVar1->max_length != 2) {
        return stackTrace;
      }
      return pSVar1->vector[1];
    }
    goto code_?;
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* Void Destroy() */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_Destroy
               (DebugLogHandler_1 *this,MethodInfo *method)

{
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  this_00 = (this->fields).logContextQueue;
  (this->fields).errorCount = 0;
  (this->fields).logErrorHasBeenSendOnce = 0;
  if (this_00 == (Queue_1_Dictionary_2_System_String_System_Object_ *)0x0) {
code_?:
    func_?(0);
    pDStack_2 = this->klass;
    func_?(&pDStack_2,&UNK_?);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  System.dll::System::Collections::Generic::Queue`1[System::Int32]::Queue_1_System_Int32__Clear
            ((Queue_1_System_Int32_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Clear__
            );
  (this->fields).isSampling = 0;
  if ((this->fields).isInBrokenState != 0) {
    (this->fields).isInBrokenState = 0;
    *unaff_FS_OFFSET = uVar1;
    return;
  }
  pPVar4 = (this->fields).kogamaLogHandler;
  if (pPVar4 != (ProxyLogHandler *)0x0) {
    ProxyLogHandler::ProxyLogHandler_Disable(pPVar4,(MethodInfo *)0x0);
    pPVar4 = (this->fields).kogamaLogHandler;
    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar5,(Object *)this,
               MethodInfo__DebugLogHandler__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
               ,
               MethodInfo__System__EventHandler<ProxyLogHandler::LogFormatData>__EventHandler_System__Object__void__
              );
    if (pPVar4 == (ProxyLogHandler *)0x0) goto code_?;
    ProxyLogHandler::ProxyLogHandler_remove_OnLogReceived
              (pPVar4,(EventHandler_1_ProxyLogHandler_LogFormatData_ *)pUVar5,(MethodInfo *)0x0);
    (this->fields).kogamaLogHandler = (ProxyLogHandler *)0x0;
  }
  pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar5,(Object *)this,
             MethodInfo__DebugLogHandler__HandleLog_System__String__System__String__UnityEngine__LogType_
             ,(MethodInfo *)0x0);
  uVar1 = 0;
  UnityEngine.CoreModule.dll::UnityEngine::Application::Application_remove_logMessageReceived
            ((Application_LogCallback *)pUVar5,(MethodInfo *)0x0);
  *unaff_FS_OFFSET = uVar1;
  return;
}


/* String GenerateSystemInfoString(Dictionary`2[System.String,System.String]) */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_GenerateSystemInfoString
                   (Dictionary_2_System_String_System_String_ *systemInfo,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  pOStack_3 = (Object *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_3;
  pOStack_4 = (Object__Array *)&stack0xffffffa4;
  pOVar5 = (Object__Array *)&stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pOVar5 = pOStack_4;
  }
  pOStack_4 = pOVar5;
  auStack_6._16_4_ = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pLStack_8 = (Link__Array *)&stack0xffffffa4;
  pOStack_4 = (Object__Array *)&stack0xffffffa4;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (pLStack_8 = (Link__Array *)&stack0xffffffa4, pOStack_4 = (Object__Array *)&stack0xffffffa4,
     (TypeInfo__System__String->_1).cctor_started == 0)) {
    pLStack_8 = (Link__Array *)&stack0xffffffa4;
    pOStack_4 = (Object__Array *)&stack0xffffffa4;
    func_?(TypeInfo__System__String);
  }
  str0 = (WinningConditionType__Enum__Array *)TypeInfo__System__String->static_fields->Empty;
  pWStack_9 = str0;
  if (systemInfo != (Dictionary_2_System_String_System_String_ *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_11,(Dictionary_2_WinningConditionType_System_Object_ *)systemInfo,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar10->dictionary;
    auStack_6._4_4_ = pDVar10->next;
    auStack_6._8_4_ = pDVar10->stamp;
    auStack_6._12_4_ = (pDVar10->current).key;
    auStack_6._16_4_ = (pDVar10->current).value;
    iStack_1 = 0;
    while (cVar12 = func_?(), cVar12 != '\0') {
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__get_Current__
                            );
      DStack_11.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_11.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Key__
      ;
      arg0 = (Object *)func_?();
      DStack_11.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_11.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Value__
      ;
      arg1 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar13 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__0____1_u000A,arg0,arg1,(MethodInfo *)0x0);
      str0 = (WinningConditionType__Enum__Array *)
             mscorlib.dll::System::String::String_Concat_2((String *)str0,pSVar13,(MethodInfo *)0x0);
      pWStack_9 = str0;
    }
    pLStack_8->klass = (Link__Array__Class *)0x58;
    iStack_1 = -1;
    func_?();
    *unaff_FS_OFFSET = pOStack_3;
    return (String *)str0;
  }
  func_?(0);
  func_?();
  pcVar14 = (code *)swi(3);
  pSVar13 = (String *)(*pcVar14)();
  return pSVar13;
}


/* String GetBrowserInfo() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_GetBrowserInfo(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BrowserComm->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm->_1).cctor_started == 0)) {
    func_?(TypeInfo__BrowserComm);
  }
  pSVar1 = BrowserComm::BrowserComm_get_BrowserName((MethodInfo *)0x0);
  iStack_2 = BrowserComm::BrowserComm_get_BrowserVersion((MethodInfo *)0x0);
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral__0___version___1_,(Object *)pSVar1,arg1,(MethodInfo *)0x0);
  return pSVar1;
}


/* Dictionary`2[System.String,System.Object] GetExtraSentryData() */

Dictionary_2_System_String_System_Object_ *
Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_GetExtraSentryData
          (DebugLogHandler_1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_String_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
            );
  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  pCVar2 = (CrossPlatformInputManager_VirtualButton *)
           func_?(TypeInfo__System__Int32,&stack0xfffffff4);
  if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,StringLiteral_Time_frameCount,pCVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar3 = StringLiteral_BrowserInfo;
    if (TypeInfo__DebugLogHandler->static_fields->__f__mg_cache0 == (Func_1_String_ *)0x0) {
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)0x0,MethodInfo__DebugLogHandler__GetBrowserInfo__,
                 MethodInfo__System__Func<System::String>__Func_System__Object__void__);
      if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__DebugLogHandler->static_fields->__f__mg_cache0 = (Func_1_String_ *)pUVar4;
    }
    if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar2 = (CrossPlatformInputManager_VirtualButton *)
             DebugLogHandler_1_TryGetExtraString
                       (TypeInfo__DebugLogHandler->static_fields->__f__mg_cache0,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar3,pCVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    pSVar3 = StringLiteral_GameMode;
    if (TypeInfo__DebugLogHandler->static_fields->__f__mg_cache1 == (Func_1_String_ *)0x0) {
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)0x0,MethodInfo__DebugLogHandler__GetGameMode__,
                 MethodInfo__System__Func<System::String>__Func_System__Object__void__);
      if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__DebugLogHandler->static_fields->__f__mg_cache1 = (Func_1_String_ *)pUVar4;
    }
    if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar2 = (CrossPlatformInputManager_VirtualButton *)
             DebugLogHandler_1_TryGetExtraString
                       (TypeInfo__DebugLogHandler->static_fields->__f__mg_cache1,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar3,pCVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    pSVar3 = StringLiteral_JoinState;
    if (TypeInfo__DebugLogHandler->static_fields->__f__mg_cache2 == (Func_1_String_ *)0x0) {
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)0x0,MethodInfo__DebugLogHandler__GetJoinState__,
                 MethodInfo__System__Func<System::String>__Func_System__Object__void__);
      if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__DebugLogHandler->static_fields->__f__mg_cache2 = (Func_1_String_ *)pUVar4;
    }
    if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar2 = (CrossPlatformInputManager_VirtualButton *)
             DebugLogHandler_1_TryGetExtraString
                       (TypeInfo__DebugLogHandler->static_fields->__f__mg_cache2,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar3,pCVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    pSVar3 = StringLiteral_PlayersCount;
    if (TypeInfo__DebugLogHandler->static_fields->__f__mg_cache3 == (Func_1_String_ *)0x0) {
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)0x0,MethodInfo__DebugLogHandler__GetPlayersCount__,
                 MethodInfo__System__Func<System::String>__Func_System__Object__void__);
      if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__DebugLogHandler->static_fields->__f__mg_cache3 = (Func_1_String_ *)pUVar4;
    }
    if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar2 = (CrossPlatformInputManager_VirtualButton *)
             DebugLogHandler_1_TryGetExtraString
                       (TypeInfo__DebugLogHandler->static_fields->__f__mg_cache3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar3,pCVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    pSVar3 = StringLiteral_PendingPlayersCount;
    if (TypeInfo__DebugLogHandler->static_fields->__f__mg_cache4 == (Func_1_String_ *)0x0) {
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)0x0,MethodInfo__DebugLogHandler__GetPendingPlayersCount__,
                 MethodInfo__System__Func<System::String>__Func_System__Object__void__);
      if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__DebugLogHandler->static_fields->__f__mg_cache4 = (Func_1_String_ *)pUVar4;
    }
    if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar2 = (CrossPlatformInputManager_VirtualButton *)
             DebugLogHandler_1_TryGetExtraString
                       (TypeInfo__DebugLogHandler->static_fields->__f__mg_cache4,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar3,pCVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    pSVar3 = StringLiteral_Is_tourist_session;
    if (TypeInfo__DebugLogHandler->static_fields->__f__mg_cache5 == (Func_1_String_ *)0x0) {
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)0x0,MethodInfo__DebugLogHandler__GetIsTouristSession__,
                 MethodInfo__System__Func<System::String>__Func_System__Object__void__);
      if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__DebugLogHandler->static_fields->__f__mg_cache5 = (Func_1_String_ *)pUVar4;
    }
    if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar2 = (CrossPlatformInputManager_VirtualButton *)
             DebugLogHandler_1_TryGetExtraString
                       (TypeInfo__DebugLogHandler->static_fields->__f__mg_cache5,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar3,pCVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    pSVar3 = StringLiteral_ProfileID;
    if (TypeInfo__DebugLogHandler->static_fields->__f__mg_cache6 == (Func_1_String_ *)0x0) {
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)0x0,MethodInfo__DebugLogHandler__GetProfileID__,
                 MethodInfo__System__Func<System::String>__Func_System__Object__void__);
      if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__DebugLogHandler->static_fields->__f__mg_cache6 = (Func_1_String_ *)pUVar4;
    }
    if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar2 = (CrossPlatformInputManager_VirtualButton *)
             DebugLogHandler_1_TryGetExtraString
                       (TypeInfo__DebugLogHandler->static_fields->__f__mg_cache6,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar3,pCVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    pSVar3 = StringLiteral_PlanetID;
    if (TypeInfo__DebugLogHandler->static_fields->__f__mg_cache7 == (Func_1_String_ *)0x0) {
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)0x0,MethodInfo__DebugLogHandler__GetPlanetID__,
                 MethodInfo__System__Func<System::String>__Func_System__Object__void__);
      if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__DebugLogHandler->static_fields->__f__mg_cache7 = (Func_1_String_ *)pUVar4;
    }
    if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar2 = (CrossPlatformInputManager_VirtualButton *)
             DebugLogHandler_1_TryGetExtraString
                       (TypeInfo__DebugLogHandler->static_fields->__f__mg_cache7,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar3,pCVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_platform
              ((MethodInfo *)0x0);
    piVar5 = (int *)func_?();
    if (piVar5 != (int *)0x0) {
      pCVar2 = (CrossPlatformInputManager_VirtualButton *)(**(code **)(*piVar5 + 0xd8))();
      func_?(piVar5);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar1,StringLiteral_RuntimePlatform,pCVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      pSVar3 = StringLiteral_SystemInfo;
      if (TypeInfo__DebugLogHandler->static_fields->__f__mg_cache8 == (Func_1_String_ *)0x0) {
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)0x0,MethodInfo__DebugLogHandler__GetSystemInfo__,
                   MethodInfo__System__Func<System::String>__Func_System__Object__void__);
        if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
          func_?();
        }
        TypeInfo__DebugLogHandler->static_fields->__f__mg_cache8 = (Func_1_String_ *)pUVar4;
      }
      if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar2 = (CrossPlatformInputManager_VirtualButton *)
               DebugLogHandler_1_TryGetExtraString
                         (TypeInfo__DebugLogHandler->static_fields->__f__mg_cache8,(MethodInfo *)0x0
                         );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar1,pSVar3,pCVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)&UNK_?,MethodInfo__DebugLogHandler__GetLogContext__,
                 MethodInfo__System__Func<System::String>__Func_System__Object__void__);
      pCVar2 = (CrossPlatformInputManager_VirtualButton *)
               DebugLogHandler_1_TryGetExtraString((Func_1_String_ *)pUVar4,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar1,StringLiteral_Log_Context,pCVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      pCVar2 = _UNK_?;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar6 = mscorlib.dll::System::String::String_IsNullOrEmpty((String *)pCVar2,(MethodInfo *)0x0)
      ;
      if (bVar6 == 0) {
        if (_UNK_? == (CrossPlatformInputManager_VirtualButton *)0x0) goto code_?;
        mscorlib.dll::System::String::String_Trim((String *)_UNK_?,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pDVar1,StringLiteral_Sanitized_Error_Data,_UNK_?,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                  );
      }
      if (_UNK_? == 0x32) {
        if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
          func_?();
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pDVar1,StringLiteral_First_Error,
                   (CrossPlatformInputManager_VirtualButton *)
                   TypeInfo__DebugLogHandler->static_fields->firstError,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                  );
      }
      return pDVar1;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_String_System_Object_ *)(*pcVar7)();
  return pDVar1;
}


/* String GetGameMode() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_GetGameMode(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MStack_1 = MVGameMode__Enum_Edit;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MStack_1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  piVar2 = (int *)func_?(TypeInfo__MV__Common__MVGameMode,&MStack_1);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
    func_?(piVar2);
    return pSVar3;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* String GetIsTouristSession() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_GetIsTouristSession
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase,in_ECX & 0xffffff);
  }
  MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  pSVar1 = (String *)func_?(&stack0xfffffffb,0);
  return pSVar1;
}


/* String GetJoinState() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_GetJoinState(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
    piVar2 = (int *)func_?(TypeInfo__MVJoinState,&stack0xfffffff8);
    if (piVar2 != (int *)0x0) {
      pSVar3 = (String *)(**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
      func_?(piVar2);
      return pSVar3;
    }
    func_?(0);
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  return StringLiteral_MVGameController_Game_is_null;
}


/* String GetLogContext() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_GetLogContext
                   (DebugLogHandler_1 *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppGenericClass *)0xffffffff;
  pIStack_2 = (Il2CppClass *)&DAT_?;
  pIStack_3 = (Il2CppClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  pIStack_4 = (Il2CppClass *)&stack0xffffff88;
  pIVar5 = (Il2CppClass *)&stack0xffffff88;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  iStack_6 = 0;
  auStack_7._16_4_ = (Object *)0x0;
  uStack_8 = 0;
  KStack_9.key = 0;
  KStack_9.value = 0;
  iStack_10 = 0;
  auStack_7._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_7._4_4_ = (MethodInfo *)0x0;
  auStack_7._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_7._12_4_ = 0;
  func_?();
  iStack_11 = -1;
  _Stack_20.dummy = &stack0xffffff88;
  pIStack_4 = (Il2CppClass *)&stack0xffffff88;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (_Stack_20.dummy = &stack0xffffff88, pIStack_4 = (Il2CppClass *)&stack0xffffff88,
     (TypeInfo__System__String->_1).cctor_started == 0)) {
    _Stack_20.dummy = &stack0xffffff88;
    pIStack_4 = (Il2CppClass *)&stack0xffffff88;
    func_?(TypeInfo__System__String);
  }
  pIVar5 = (Il2CppClass *)TypeInfo__System__String->static_fields->Empty;
  this_00 = (this->fields).logContextQueue;
  pIStack_12 = pIVar5;
  if (this_00 == (Queue_1_Dictionary_2_System_String_System_Object_ *)0x0) {
code_?:
    func_?(0);
  }
  else {
    pQVar13 = System.dll::System::Collections::Generic::Queue`1[System::Int32]::
             Queue_1_System_Int32__GetEnumerator
                       (&QStack_14,(Queue_1_System_Int32_ *)this_00,
                        MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__GetEnumerator__
                       );
    uStack_8._0_4_ = pQVar13->q;
    uStack_8._4_4_ = pQVar13->idx;
    iStack_6 = pQVar13->ver;
    pIStack_1 = (Il2CppGenericClass *)0x0;
    iVar15 = -1;
    while( true ) {
      cVar16 = func_?();
      iVar17 = iStack_10;
      if (cVar16 == '\0') break;
      this_01 = (Dictionary_2_WinningConditionType_System_Object_ *)func_?();
      if (this_01 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0) goto code_?;
      pDVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *
                          )(auStack_7 + 0x14),this_01,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__GetEnumerator__
                         );
      auStack_7._0_4_ = pDVar18->dictionary;
      auStack_7._4_4_ = pDVar18->next;
      auStack_7._8_4_ = pDVar18->stamp;
      auStack_7._12_4_ = (pDVar18->current).key;
      auStack_7._16_4_ = (pDVar18->current).value;
      pIStack_1._0_1_ = 1;
      while( true ) {
        cVar16 = func_?();
        if (cVar16 == '\0') break;
        KStack_9 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_7,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__get_Current__
                              );
        auStack_7._0_4_ = &KStack_9;
        auStack_7._4_4_ =
             MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::Object>__get_Key__
        ;
        _Stack_28.dummy = (void *)func_?();
        auStack_7._0_4_ = &KStack_9;
        auStack_7._4_4_ =
             MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::Object>__get_Value__
        ;
        arg1 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar19 = mscorlib.dll::System::String::String_Format_1
                           (StringLiteral__0____1__,(Object *)_Stack_28.typeHandle,arg1,
                            (MethodInfo *)0x0);
        pIVar5 = (Il2CppClass *)
                 mscorlib.dll::System::String::String_Concat_2
                           ((String *)pIVar5,pSVar19,(MethodInfo *)0x0);
        pIStack_12 = pIVar5;
      }
      iVar17 = iVar15 + 1;
      pIStack_1 = (Il2CppGenericClass *)((uint)pIStack_1._1_3_ << 8);
      *(undefined4 *)((int)_Stack_20.dummy + iVar17 * 4) = 0x72;
      iStack_11 = iVar17;
      func_?();
      if (iStack_10 != 0) {
        func_?(iStack_10,0,0);
        goto code_?;
      }
      if (((iVar17 != -1) && (*(int *)((int)_Stack_20.dummy + iVar17 * 4) == 0x72)) && (-1 < iVar17)) {
        iVar17 = iVar15;
        iStack_11 = iVar15;
      }
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pIVar5 = (Il2CppClass *)
               mscorlib.dll::System::String::String_Concat_2
                         ((String *)pIVar5,StringLiteral_u000A,(MethodInfo *)0x0);
      iVar15 = iVar17;
      pIStack_12 = pIVar5;
    }
    *(undefined4 *)((int)_Stack_20.dummy + iVar15 * 4 + 4) = 0x9d;
    pIStack_1 = (Il2CppGenericClass *)0xffffffff;
    func_?();
    if (iVar17 == 0) {
      *unaff_FS_OFFSET = pIStack_3;
      return (String *)pIVar5;
    }
  }
  func_?();
  pcVar20 = (code *)swi(3);
  pSVar19 = (String *)(*pcVar20)();
  return pSVar19;
}


/* String GetPendingPlayersCount() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_GetPendingPlayersCount
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this != (MVAvatar *)0x0) {
      this_00 = MVAvatar::MVAvatar_get_Shield(this,(MethodInfo *)0x0);
      if (this_00 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        MVPlayerContainer::MVPlayerContainer_get_PendingPlayersCount
                  ((MVPlayerContainer *)this_00,(MethodInfo *)0x0);
        pSVar2 = (String *)func_?();
        return pSVar2;
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar3)();
    return pSVar2;
  }
  return StringLiteral_MVGameController_WOCM_is_null;
}


/* String GetPlanetID() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_GetPlanetID(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    pSVar2 = (String *)func_?(&(pGVar1->fields).planetID);
    return pSVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* String GetPlayersCount() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_GetPlayersCount(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this != (MVAvatar *)0x0) {
      this_00 = MVAvatar::MVAvatar_get_Shield(this,(MethodInfo *)0x0);
      if (this_00 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        MVPlayerContainer::MVPlayerContainer_get_Count
                  ((MVPlayerContainer *)this_00,(MethodInfo *)0x0);
        pSVar2 = (String *)func_?();
        return pSVar2;
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar3)();
    return pSVar2;
  }
  return StringLiteral_MVGameController_WOCM_is_null;
}


/* String GetProfileID() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_GetProfileID(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    pSVar2 = (String *)func_?(&(pGVar1->fields).profileID);
    return pSVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* String GetSystemInfo() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_GetSystemInfo(MethodInfo *method)

{
  puStack_1 = (undefined *)0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  systemInfo = (Dictionary_2_System_String_System_String_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)systemInfo,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  pCVar4 = (CrossPlatformInputManager_VirtualButton *)
           UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetOperatingSystem
                     ((MethodInfo *)0x0);
  if (systemInfo != (Dictionary_2_System_String_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)systemInfo,StringLiteral_operatingSystem,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)
             UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetProcessorType
                       ((MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)systemInfo,StringLiteral_processorType,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetProcessorCount
              ((MethodInfo *)0x0);
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)systemInfo,StringLiteral_processorCount,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetPhysicalMemoryMB
              ((MethodInfo *)0x0);
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)systemInfo,StringLiteral_systemMemorySize,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsMemorySize
              ((MethodInfo *)0x0);
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)systemInfo,StringLiteral_graphicsMemorySize,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)
             UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceName
                       ((MethodInfo *)0x0);
    pSVar5 = StringLiteral_graphicsDeviceName;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)systemInfo,StringLiteral_graphicsDeviceName,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)
             UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceVendor
                       ((MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)systemInfo,StringLiteral_graphicsDeviceVendor,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceID
              ((MethodInfo *)0x0);
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)systemInfo,StringLiteral_graphicsDeviceID,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceVendorID
              ((MethodInfo *)0x0);
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)systemInfo,StringLiteral_graphicsDeviceVendorID,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)
             UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
             SystemInfo_GetGraphicsDeviceVersion((MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)systemInfo,StringLiteral_graphicsDeviceVersion,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsShaderLevel
              ((MethodInfo *)0x0);
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)systemInfo,StringLiteral_graphicsShaderLevel,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_SupportsShadows
              ((MethodInfo *)0x0);
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)systemInfo,StringLiteral_supportsShadows,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_SupportsImageEffects
              ((MethodInfo *)0x0);
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)systemInfo,StringLiteral_supportsImageEffects,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_SupportedRenderTargetCount
              ((MethodInfo *)0x0);
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)systemInfo,StringLiteral_supportedRenderTargetCount,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    a = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceVendor
                  ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar6 = mscorlib.dll::System::String::String_op_Equality
                      (a,StringLiteral_Vivante_Corporation,(MethodInfo *)0x0);
    if (bVar6 == 0) {
code_?:
      if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
        func_?(TypeInfo__DebugLogHandler);
      }
      pSVar5 = DebugLogHandler_1_GenerateSystemInfoString(systemInfo,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return pSVar5;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    handle = TypeRef__UnityEngine__RenderTextureFormat;
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)
             TypeInfo__System__String->static_fields->Empty;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
      func_?();
    }
    this = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
    if (this != (Array *)0x0) {
      pIVar7 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
      puStack_1 = (undefined *)0x0;
      while (pIVar7 != (IEnumerator *)0x0) {
        cVar8 = func_?();
        if (cVar8 == '\0') {
          puStack_1 = (undefined *)0xffffffff;
          iVar9 = func_?();
          if (iVar9 != 0) {
            func_?();
          }
          if (pSVar5 != (String *)0x0) goto code_?;
          if (systemInfo != (Dictionary_2_System_String_System_String_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]
            ::
            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                      ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                        *)systemInfo,StringLiteral_supportedRenderTextureFormats,pCVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                      );
            goto code_?;
          }
          break;
        }
        piVar10 = (int *)func_?();
        if (piVar10 == (int *)0x0) break;
        if (*(Il2CppClass **)(*piVar10 + 0x20) !=
            (TypeInfo__UnityEngine__RenderTextureFormat->_0).element_class) {
          func_?();
          break;
        }
        pRVar11 = (RenderTextureFormat__Enum *)func_?();
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                SystemInfo_SupportsRenderTextureFormat(*pRVar11,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          bVar6 = mscorlib.dll::System::String::String_IsNullOrEmpty
                            ((String *)pCVar4,(MethodInfo *)0x0);
          if (bVar6 == 0) {
            pOVar12 = (Object *)func_?();
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pCVar4 = (CrossPlatformInputManager_VirtualButton *)
                     mscorlib.dll::System::String::String_Concat_1
                               ((Object *)pCVar4,(Object *)::StringLiteral__,pOVar12,
                                (MethodInfo *)0x0);
          }
          else {
            pOVar12 = (Object *)func_?();
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pCVar4 = (CrossPlatformInputManager_VirtualButton *)
                     mscorlib.dll::System::String::String_Concat
                               ((Object *)pCVar4,pOVar12,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar13)();
  return pSVar5;
}


/* Dictionary`2[System.String,System.String] GetTags() */

Dictionary_2_System_String_System_String_ *
Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_GetTags(MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  pDVar1 = (Dictionary_2_System_String_System_String_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pKVar2 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
  if ((pKVar2 != (KoGaMaSettingsContainer *)0x0) &&
     (pCVar3 = (CrossPlatformInputManager_VirtualButton *)
               KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionString
                         (pKVar2,(MethodInfo *)0x0),
     pDVar1 != (Dictionary_2_System_String_System_String_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,StringLiteral_Version,pCVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pKVar2 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (pKVar2 != (KoGaMaSettingsContainer *)0x0) {
      pCVar3 = (CrossPlatformInputManager_VirtualButton *)
               KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_ReleaseName
                         (pKVar2,(MethodInfo *)0x0);
      pDVar4 = pDVar1;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar1,StringLiteral_ReleaseName,pCVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                );
      MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
      piVar5 = (int *)func_?();
      if (piVar5 != (int *)0x0) {
        pCVar3 = (CrossPlatformInputManager_VirtualButton *)(**(code **)(*piVar5 + 0xd8))();
        func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pDVar1,StringLiteral_JoinState,pCVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pDVar1,StringLiteral_Source,
                   (CrossPlatformInputManager_VirtualButton *)StringLiteral_standalone,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                  );
        *unaff_FS_OFFSET = pDVar4;
        return pDVar1;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_String_System_String_ *)(*pcVar6)();
  return pDVar1;
}


/* Void HandleLog(String, String, LogType) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_HandleLog
               (DebugLogHandler_1 *this,String *logString,String *stackTrace,LogType__Enum type,
               MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__UnityEngine__Application__LogCallback);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)this,
             MethodInfo__DebugLogHandler__HandleLog_System__String__System__String__UnityEngine__LogType_
             ,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Application::Application_remove_logMessageReceived
            ((Application_LogCallback *)pUVar1,(MethodInfo *)0x0);
  DebugLogHandler_1_HandleLogExecute(this,logString,stackTrace,type,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?();
  pUVar1 = this_00;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__DebugLogHandler__HandleLog_System__String__System__String__UnityEngine__LogType_
             ,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Application::Application_add_logMessageReceived
            ((Application_LogCallback *)this_00,(MethodInfo *)0x0);
  *unaff_FS_OFFSET = pUVar1;
  return;
}


/* Void HandleLogExecute(String, String, LogType) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_HandleLogExecute
               (DebugLogHandler_1 *this,String *logString,String *stackTrace,LogType__Enum type,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = DebugLogHandler_1_AddLogToLogContext(this,logString,type,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if (type == LogType__Enum_Error) {
    if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
      func_?(TypeInfo__DebugLogHandler);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    type = func_?(TypeInfo__System__String,1);
    if ((String__Array *)type == (String__Array *)0x0) goto code_?;
    if ((StringLiteral_UnityEngine_Debug_LogError_Objec == (String *)0x0) ||
       (iVar2 = func_?(), iVar2 != 0)) {
      if (((String__Array *)type)->max_length == 0) goto code_?;
      ((String__Array *)type)->vector[0] = StringLiteral_UnityEngine_Debug_LogError_Objec;
      if (stackTrace != (String *)0x0) {
        logString = (String *)&UNK_?;
        pSVar3 = mscorlib.dll::System::String::String_Split_5
                           (stackTrace,(String__Array *)type,
                            StringSplitOptions__Enum_RemoveEmptyEntries,(MethodInfo *)0x0);
        if (pSVar3 != (String__Array *)0x0) {
          if (pSVar3->max_length == 2) {
            stackTrace = pSVar3->vector[1];
          }
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  else {
code_?:
    str1 = logString;
    piVar4 = &(this->fields).errorCount;
    *piVar4 = *piVar4 + 1;
    if ((this->fields).logErrorHasBeenSendOnce == 0) {
      if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
        func_?(TypeInfo__DebugLogHandler);
      }
      TypeInfo__DebugLogHandler->static_fields->firstError = logString;
      if ((this->fields).logErrorHasBeenSendOnce != 0) goto code_?;
    }
    else {
code_?:
      if ((this->fields).errorCount != 0x32) {
        return;
      }
    }
    (this->fields).logErrorHasBeenSendOnce = 1;
    logString._0_1_ = 0;
    if ((this->fields).errorCount == 0x32) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      str1 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral__Ongoing_error__,str1,(MethodInfo *)0x0);
      logString._0_1_ = 1;
    }
    if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
      func_?(TypeInfo__DebugLogHandler);
    }
    DebugLogHandler_1_SendToConsole(str1,stackTrace,(MethodInfo *)0x0);
    bVar1 = 0;
    DebugLogHandler_1_ReportError(this,str1,stackTrace,type,(MethodInfo *)0x0);
    this_00 = (this->fields).statHatErrorCount;
    if (this_00 != (DebugLogHandler_StatHatErrorCount *)0x0) {
      DebugLogHandler+StatHatErrorCount::DebugLogHandler_StatHatErrorCount_Increment
                (this_00,bVar1,(bool)logString,(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?();
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize(DebugLogHandlerConfig, SentryConfig) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_Initialize
               (DebugLogHandler_1 *this,DebugLogHandlerConfig debugLogHandlerConfig,
               SentryConfig sentryConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).maxLogContextQueueCount = debugLogHandlerConfig.maxLogContextQueueCount;
  if (debugLogHandlerConfig.useProxyLogHandler != 0) {
    pPVar1 = (ProxyLogHandler *)func_?(TypeInfo__ProxyLogHandler);
    ProxyLogHandler::ProxyLogHandler__ctor(pPVar1,(MethodInfo *)0x0);
    (this->fields).kogamaLogHandler = pPVar1;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__DebugLogHandler__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
               ,
               MethodInfo__System__EventHandler<ProxyLogHandler::LogFormatData>__EventHandler_System__Object__void__
              );
    if (pPVar1 == (ProxyLogHandler *)0x0) goto code_?;
    ProxyLogHandler::ProxyLogHandler_add_OnLogReceived
              (pPVar1,(EventHandler_1_ProxyLogHandler_LogFormatData_ *)pUVar2,(MethodInfo *)0x0);
    pPVar1 = (this->fields).kogamaLogHandler;
    if (pPVar1 == (ProxyLogHandler *)0x0) goto code_?;
    (pPVar1->fields).filterLogTypeConsoleWrite =
         debugLogHandlerConfig.proxyLogHandlerConfig.filterLogTypeConsoleWrite;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt(0,0x65,(MethodInfo *)0x0)
  ;
  (this->fields).isSampling = 1;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__UnityEngine__Application__LogCallback);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__DebugLogHandler__HandleLog_System__String__System__String__UnityEngine__LogType_
             ,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Application::Application_add_logMessageReceived
            ((Application_LogCallback *)pUVar2,(MethodInfo *)0x0);
  this_00 = (this->fields).sentrySdk;
  if (this_00 != (SentrySdk *)0x0) {
    SentrySdk::SentrySdk_Initialize(this_00,sentryConfig,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsIgnored(String) */

bool Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_IsIgnored
               (String *logString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__DebugLogHandler);
  }
  this = TypeInfo__DebugLogHandler->static_fields->ignoreLogStrings;
  if (this != (HashSet_1_System_String_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      ((HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)this,
                       (NativeAdType__Enum)logString,
                       MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void KogamaLogHandlerOnOnLogReceived(Object, ProxyLogHandler+LogFormatData) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_KogamaLogHandlerOnOnLogReceived
               (DebugLogHandler_1 *this,Object *sender,ProxyLogHandler_LogFormatData *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).kogamaLogHandler;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__DebugLogHandler__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
             ,
             MethodInfo__System__EventHandler<ProxyLogHandler::LogFormatData>__EventHandler_System__Object__void__
            );
  if (pPVar1 != (ProxyLogHandler *)0x0) {
    ProxyLogHandler::ProxyLogHandler_remove_OnLogReceived
              (pPVar1,(EventHandler_1_ProxyLogHandler_LogFormatData_ *)pUVar2,(MethodInfo *)0x0);
    if (e != (ProxyLogHandler_LogFormatData *)0x0) {
      logString = ProxyLogHandler+LogFormatData::ProxyLogHandler_LogFormatData_get_Message
                            (e,(MethodInfo *)0x0);
      DebugLogHandler_1_AddLogToLogContext(this,logString,(e->fields).LogType,(MethodInfo *)0x0);
      pPVar1 = (this->fields).kogamaLogHandler;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__DebugLogHandler__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
                 ,
                 MethodInfo__System__EventHandler<ProxyLogHandler::LogFormatData>__EventHandler_System__Object__void__
                );
      if (pPVar1 != (ProxyLogHandler *)0x0) {
        ProxyLogHandler::ProxyLogHandler_add_OnLogReceived
                  (pPVar1,(EventHandler_1_ProxyLogHandler_LogFormatData_ *)pUVar2,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ReportError(String, String, LogType) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_ReportError
               (DebugLogHandler_1 *this,String *logString,String *stackTrace,LogType__Enum type,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__DebugLogHandler);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__DebugLogHandler);
  }
  if (TypeInfo__DebugLogHandler->static_fields->didConnectToGameServer == 0) {
    this_00 = (this->fields).sentrySdk;
    pDVar1 = DebugLogHandler_1_GetExtraSentryData(this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
      func_?(TypeInfo__DebugLogHandler);
    }
    pDVar2 = DebugLogHandler_1_GetTags((MethodInfo *)0x0);
    if (this_00 != (SentrySdk *)0x0) {
      SentrySdk::SentrySdk_OnLogMessageReceived
                (this_00,logString,stackTrace,type,pDVar1,pDVar2,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if ((this->fields).isSampling == 0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    index = 0;
    while( true ) {
      if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
        type = (LogType__Enum)&UNK_?;
        func_?();
      }
      pLVar3 = TypeInfo__DebugLogHandler->static_fields->sanitizeLogSubstrings;
      if (pLVar3 == (List_1_System_String_ *)0x0) goto code_?;
      pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                          MethodInfo__System__Collections__Generic__List<System::String>__get_Count__
                         );
      this_01 = (DebugLogHandler_1 *)logString;
      if ((int)pOVar4 <= index) goto code_?;
      if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
        func_?();
      }
      pLVar3 = TypeInfo__DebugLogHandler->static_fields->sanitizeLogSubstrings;
      if ((pLVar3 == (List_1_System_String_ *)0x0) ||
         (this_01 = (DebugLogHandler_1 *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,index,
                               MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                              ), logString == (String *)0x0)) goto code_?;
      bVar5 = mscorlib.dll::System::String::String_Contains
                        (logString,(String *)this_01,(MethodInfo *)0x0);
      this = this_01;
      if (bVar5 != 0) break;
      index = index + 1;
    }
    stackTrace = logString;
    startIndex = mscorlib.dll::System::String::String_IndexOf_5
                           (logString,(String *)this_01,(MethodInfo *)0x0);
    if (this_01 != (DebugLogHandler_1 *)0x0) {
      count = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
      type = (LogType__Enum)&UNK_?;
      pSVar6 = mscorlib.dll::System::String::String_Remove_1
                         (logString,startIndex,(int32_t)count,(MethodInfo *)0x0);
      (this_01->fields).sanitizedString = pSVar6;
code_?:
      pDVar1 = DebugLogHandler_1_GetExtraSentryData(this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
        func_?(TypeInfo__DebugLogHandler);
      }
      pDVar2 = DebugLogHandler_1_GetTags((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SendClientLog
                  (this_02,(String *)this_01,stackTrace,type,pDVar1,pDVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* String SanitizeLogStringForUniqueErrors(String) */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_SanitizeLogStringForUniqueErrors
                   (DebugLogHandler_1 *this,String *logString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  while( true ) {
    if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
      func_?(TypeInfo__DebugLogHandler);
    }
    pLVar1 = TypeInfo__DebugLogHandler->static_fields->sanitizeLogSubstrings;
    if (pLVar1 == (List_1_System_String_ *)0x0) goto code_?;
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<System::String>__get_Count__)
    ;
    if ((int)pOVar2 <= index) {
      return logString;
    }
    if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
      func_?(TypeInfo__DebugLogHandler);
    }
    pLVar1 = TypeInfo__DebugLogHandler->static_fields->sanitizeLogSubstrings;
    if ((pLVar1 == (List_1_System_String_ *)0x0) ||
       (this_00 = (Collection_1_VoxelHit_ *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                            ), logString == (String *)0x0)) goto code_?;
    bVar3 = mscorlib.dll::System::String::String_Contains
                      (logString,(String *)this_00,(MethodInfo *)0x0);
    if (bVar3 != 0) break;
    index = index + 1;
  }
  startIndex = mscorlib.dll::System::String::String_IndexOf_5
                         (logString,(String *)this_00,(MethodInfo *)0x0);
  if (this_00 != (Collection_1_VoxelHit_ *)0x0) {
    count = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
            Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
    pSVar4 = mscorlib.dll::System::String::String_Remove_1
                       (logString,startIndex,(int32_t)count,(MethodInfo *)0x0);
    *(String **)&logString[2].fields.start_char = pSVar4;
    return (String *)this_00;
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* Void SendToConsole(String, String) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_SendToConsole
               (String *logString,String *stackTrace,MethodInfo *method)

{
  puStack_1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  this = (Collection_1_VoxelHit_ *)
         mscorlib.dll::System::String::String_Concat_3
                   (logString,::StringLiteral___,stackTrace,(MethodInfo *)0x0);
  if (this != (Collection_1_VoxelHit_ *)0x0) {
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(this,(MethodInfo *)0x0);
    if (0x400 < (int)pIVar2) {
      this = (Collection_1_VoxelHit_ *)
             mscorlib.dll::System::String::String_Substring_1
                       ((String *)this,0,0x400,(MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_Warning,(String *)this,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = puStack_1;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String TryGetExtraString(Func`1[String]) */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_TryGetExtraString
                   (Func_1_String_ *getFunc,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  uStack_1 = 0;
  if (getFunc != (Func_1_String_ *)0x0) {
    pLVar4 = System.Core.dll::System::Func`1[System::Collections::Generic::List`1[MVOverlapResult]]
             ::Func_1_System_Collections_Generic_List_1_MVOverlapResult__Invoke
                       ((Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)getFunc,
                        MethodInfo__System__Func<System::String>__Invoke__);
    *unaff_FS_OFFSET = uStack_3;
    return (String *)pLVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar5)();
  return pSVar6;
}


/* Void Update() */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_Update
               (DebugLogHandler_1 *this,MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  (this->fields).timeFrameCount = iVar1;
  return;
}


/* DebugLogHandler() */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_Vector4_ *)
         func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  if (this != (List_1_UnityEngine_Vector4_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this,
               (UIPushOption__Enum)StringLiteral_Could_not_allocate_memory__Syste,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this,
               (UIPushOption__Enum)StringLiteral_Failed_to_update_dynamic_font,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this,
               (UIPushOption__Enum)StringLiteral_Screen_position_out_of_view_frus,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    TypeInfo__DebugLogHandler->static_fields->sanitizeLogSubstrings = (List_1_System_String_ *)this;
    this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (this_00,MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__)
    ;
    if (this_00 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
      UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                 (UnityWebRequest *)StringLiteral_Fullscreen_mode_can_only_be_enab,
                 MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
                );
      TypeInfo__DebugLogHandler->static_fields->ignoreLogStrings =
           (HashSet_1_System_String_ *)this_00;
      TypeInfo__DebugLogHandler->static_fields->didConnectToGameServer = 0;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        pSStack1 = TypeInfo__System__String;
        func_?();
      }
      TypeInfo__DebugLogHandler->static_fields->firstError =
           TypeInfo__System__String->static_fields->Empty;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* DebugLogHandler() */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1__ctor
               (DebugLogHandler_1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).maxLogContextQueueCount = 4;
  method_00 = TypeInfo__DebugLogHandler__StatHatErrorCount;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields).statHatErrorCount = (DebugLogHandler_StatHatErrorCount *)this_00;
  this_01 = (Queue_1_Dictionary_2_System_String_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>
                           );
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            ((Queue_1_SmoothPhysicsMovement_Package_ *)this_01,
             MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Queue__
            );
  (this->fields).logContextQueue = this_01;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_DidConnectToGameServer() */

bool Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_get_DidConnectToGameServer
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__DebugLogHandler);
  }
  return TypeInfo__DebugLogHandler->static_fields->didConnectToGameServer;
}


/* Boolean get_SendOnGoingError() */

bool Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_get_SendOnGoingError
               (DebugLogHandler_1 *this,MethodInfo *method)

{
  return (this->fields).errorCount == 0x32;
}


/* Void set_DidConnectToGameServer(Boolean) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_1_set_DidConnectToGameServer
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__DebugLogHandler);
    TypeInfo__DebugLogHandler->static_fields->didConnectToGameServer = value;
    return;
  }
  TypeInfo__DebugLogHandler->static_fields->didConnectToGameServer = value;
  return;
}

