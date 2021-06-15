
/* Void BackgroundUpdate() */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing_BackgroundUpdate
               (SessionLocatorPing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).waitForTicks;
  if (this_00 != (WaitForTicksLocal *)0x0) {
    bVar1 = WaitForTicksLocal::WaitForTicksLocal_get_TimeIsUp(this_00,(MethodInfo *)0x0);
    if ((bVar1 != 0) && ((this->fields).pingInFlight == 0)) {
      (this->fields).pingInFlight = 1;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
      if (pGVar2 == (GameSessionData *)0x0) goto code_?;
      path = (pGVar2->fields).pingURL;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__SessionLocatorPing__WWWCallBack_UnityEngine__Networking__UnityWebRequest_
                 ,
                 MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                );
      this_02 = (GetRequest *)func_?(TypeInfo__GetRequest);
      GetRequest::GetRequest__ctor
                (this_02,path,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                 WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_02,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CloseApplication() */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing_CloseApplication
               (SessionLocatorPing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Quiting_due_to_connection_error_,(MethodInfo *)0x0);
  if (TypeInfo__SessionLocatorPing->static_fields->__f__am_cache0 == (UnityAction *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,MethodInfo__SessionLocatorPing___CloseApplication_m__0__,
               (MethodInfo *)0x0);
    TypeInfo__SessionLocatorPing->static_fields->__f__am_cache0 = (UnityAction *)this_00;
  }
  coroutine = WaitForFrames::WaitForFrames_Frames
                        (5,TypeInfo__SessionLocatorPing->static_fields->__f__am_cache0,
                         (MethodInfo *)0x0);
  Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
  return;
}


/* Void InternalUpdate() */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing_InternalUpdate
               (SessionLocatorPing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).waitForTicks;
  if (this_00 != (WaitForTicksLocal *)0x0) {
    bVar1 = WaitForTicksLocal::WaitForTicksLocal_get_TimeIsUp(this_00,(MethodInfo *)0x0);
    if ((bVar1 != 0) && ((this->fields).pingInFlight == 0)) {
      (this->fields).pingInFlight = 1;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
      if (pGVar2 == (GameSessionData *)0x0) goto code_?;
      path = (pGVar2->fields).pingURL;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__SessionLocatorPing__WWWCallBack_UnityEngine__Networking__UnityWebRequest_
                 ,
                 MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                );
      this_02 = (GetRequest *)func_?(TypeInfo__GetRequest);
      GetRequest::GetRequest__ctor
                (this_02,path,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                 WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_02,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void LeaveSession() */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing_LeaveSession(MethodInfo *method)

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
    path = (pGVar1->fields).disconnectURL;
    this = (GetRequest *)func_?(TypeInfo__GetRequest);
    GetRequest::GetRequest__ctor
              (this,path,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0,
               WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPingError(UnityWebRequest) */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing_OnPingError
               (SessionLocatorPing *this,UnityWebRequest *result,MethodInfo *method)

{
  iStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  iStack_1._0_1_ = 0;
  iStack_1._1_3_ = 0;
  if (result != (UnityWebRequest *)0x0) {
    pSVar4 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_GetUrl(result,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Ping_failed_url__,pSVar4,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar4,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Response_headers,(MethodInfo *)0x0);
    this_00 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
              UnityWebRequest_GetResponseHeaders(result,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]
      ::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                 &stack0xffffffac,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__GetEnumerator__
                );
      iStack_1._0_1_ = 1;
      while( true ) {
        cVar5 = func_?();
        if (cVar5 == '\0') {
          iStack_1 = (uint)iStack_1._1_3_ << 8;
          func_?();
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Ping_failed,(MethodInfo *)0x0);
          (this->fields).connectionLost = 1;
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        LevelRewardsManager::LevelRewardsManager_get_NextReward
                  ((LevelRewardsManager *)&stack0xffffffc0,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__get_Current__
                  );
        args = (Object__Array *)func_?();
        pOVar6 = (Object *)func_?();
        if (args == (Object__Array *)0x0) goto code_?;
        if ((pOVar6 != (Object *)0x0) && (iVar7 = func_?(), iVar7 == 0)) break;
        if (args->max_length == 0) goto code_?;
        args->vector[0] = pOVar6;
        pOVar6 = (Object *)func_?();
        if ((pOVar6 != (Object *)0x0) && (iVar7 = func_?(), iVar7 == 0))
        goto code_?;
        if (args->max_length < 2) goto code_?;
        args->vector[1] = pOVar6;
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogFormat
                  (StringLiteral__0___1_,args,(MethodInfo *)0x0);
      }
      func_?();
      func_?();
code_?:
      func_?();
      func_?();
code_?:
      func_?();
      func_?();
code_?:
      func_?();
      func_?();
    }
  }
code_?:
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing_UpdateControllerUpdate
               (SessionLocatorPing *this,MethodInfo *method)

{
  SessionLocatorPing_InternalUpdate(this,(MethodInfo *)0x0);
  if ((this->fields).connectionLost == 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Quiting_due_to_connection_error_,(MethodInfo *)0x0);
  if (TypeInfo__SessionLocatorPing->static_fields->__f__am_cache0 == (UnityAction *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,MethodInfo__SessionLocatorPing___CloseApplication_m__0__,
               (MethodInfo *)0x0);
    TypeInfo__SessionLocatorPing->static_fields->__f__am_cache0 = (UnityAction *)this_01;
  }
  WaitForFrames::WaitForFrames_Frames
            (5,TypeInfo__SessionLocatorPing->static_fields->__f__am_cache0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
  if (this_00 != (MonoBehaviour *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              (this_00,in_stack_1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WWWCallBack(UnityWebRequest) */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing_WWWCallBack
               (SessionLocatorPing *this,UnityWebRequest *result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (result == (UnityWebRequest *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
          UnityWebRequest_get_error(result,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    SessionLocatorPing_OnPingError(this,result,(MethodInfo *)0x0);
    return;
  }
  milliseconds = (this->fields).pingIntervalInMilliSeconds;
  this_00 = (WaitForTicksLocal *)func_?(TypeInfo__WaitForTicksLocal);
  WaitForTicksLocal::WaitForTicksLocal__ctor(this_00,milliseconds,(MethodInfo *)0x0);
  (this->fields).waitForTicks = this_00;
  (this->fields).pingInFlight = 0;
  return;
}


/* Void <CloseApplication>m__0() */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing__CloseApplication_m__0
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (QuitConnectionError *)func_?(TypeInfo__QuitConnectionError);
  QuitConnectionError::QuitConnectionError__ctor(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  MVGameControllerBase::MVGameControllerBase_ApplicationQuit
            ((QuitBaseCallback *)this,(MethodInfo *)0x0);
  return;
}


/* SessionLocatorPing() */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing__ctor
               (SessionLocatorPing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WaitForTicksLocal;
  this_00 = (WaitForTicksLocal *)func_?();
  WaitForTicksLocal::WaitForTicksLocal__ctor(this_00,0,(MethodInfo *)0x0);
  (this->fields).waitForTicks = this_00;
  (this->fields).pingIntervalInMilliSeconds = 60000;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  return;
}

