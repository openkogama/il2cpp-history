
/* Void Destroy() */

void Assembly-CSharp.dll::MVLocalPlayerRegistered::MVLocalPlayerRegistered_Destroy
               (MVLocalPlayerRegistered *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.xpProgress;
  if (this_00 != (XPProgress *)0x0) {
    XPProgress::XPProgress_Destroy(this_00,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__MVLocalPlayerRegistered__LevelCallback_UnityEngine__Networking__UnityWebRequest_
               ,
               MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
              );
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (initialLevelData != (InitialLevelData *)0x0) {
    (this->fields)._._.level = (initialLevelData->fields).Level;
    this_01 = (XPProgress *)func_?(TypeInfo__XPProgress);
    XPProgress::XPProgress__ctor(this_01,(MVLocalPlayer *)this,initialLevelData,(MethodInfo *)0x0);
    this_00 = (JumpState_OnWallJumpDelegate *)(this->fields)._.OnInitializeLeveling;
    (this->fields)._.xpProgress = this_01;
    if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
      JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
      this_01 = (this->fields)._.xpProgress;
    }
    if (this_01 != (XPProgress *)0x0) {
      pXVar1 = (this_01->fields).OnXPProgressData;
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__XPProgress__OnXPProgressDataDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this,
                 MethodInfo__MVLocalPlayerRegistered__OnXPProgressDataChangeRegistered_XPProgressData_
                 ,(MethodInfo *)0x0);
      pXVar2 = (XPProgress_OnXPProgressDataDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pXVar1,(Delegate *)this_02,(MethodInfo *)0x0);
      pXVar1 = (XPProgress_OnXPProgressDataDelegate *)0x0;
      if (pXVar2 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
        if (pXVar2->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
          pXVar1 = pXVar2;
        }
        pXVar3 = TypeInfo__XPProgress__OnXPProgressDataDelegate;
        if (pXVar1 == (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
      }
      (this_01->fields).OnXPProgressData = pXVar1;
      level = System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                          *)this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      MVLocalPlayer::MVLocalPlayer_OnLevelChangedLocal
                ((MVLocalPlayer *)this,(int32_t)level,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinNotification
                  (this_03,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pXVar2 = extraout_ECX;
  pXVar3 = extraout_EDX;
code_?:
  func_?(pXVar2,pXVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void LevelCallback(UnityWebRequest) */

void Assembly-CSharp.dll::MVLocalPlayerRegistered::MVLocalPlayerRegistered_LevelCallback
               (MVLocalPlayerRegistered *this,UnityWebRequest *result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (result != (UnityWebRequest *)0x0) {
    this_00 = (ActDetectorBase *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)result,
                         (MethodInfo *)0x0);
    if (this_00 != (ActDetectorBase *)0x0) {
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
      ActDetectorBase_OnApplicationQuit(this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_24
                (value,
                 int_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<int>_System__String_
                );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      UVar1 = *(UIPushOption__Enum *)(in_stack_2 + 0x10);
      *(UIPushOption__Enum *)(in_stack_2 + 0x10) = in_stack_3;
      if ((UVar1 != in_stack_3) &&
         (*(Action_1_UIPushOption_ **)(in_stack_2 + 0x1c) != (Action_1_UIPushOption_ *)0x0))
      {
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  (*(Action_1_UIPushOption_ **)(in_stack_2 + 0x1c),in_stack_3,
                   MethodInfo__UnityEngine__Events__UnityAction<int>__Invoke_int_);
      }
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnLevelChangedLocalReceivedLevelData(Int32) */

void Assembly-CSharp.dll::MVLocalPlayerRegistered::
     MVLocalPlayerRegistered_OnLevelChangedLocalReceivedLevelData
               (MVLocalPlayerRegistered *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLocalPlayer::MVLocalPlayer_OnLevelChangedLocal((MVLocalPlayer *)this,level,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinNotification
              (this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnXPProgressDataChangeRegistered(XPProgressData) */

void Assembly-CSharp.dll::MVLocalPlayerRegistered::
     MVLocalPlayerRegistered_OnXPProgressDataChangeRegistered
               (MVLocalPlayerRegistered *this,XPProgressData *xpProgress,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = xpProgress;
  if (xpProgress != (XPProgressData *)0x0) {
    bVar1 = XPProgressData::XPProgressData_get_XPLimitExceeded(xpProgress,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__Common__Urls);
      }
      pSVar2 = MVCommon.dll::MV::Common::Urls::Urls_get_Level((MethodInfo *)0x0);
      xpProgress = (XPProgressData *)
                   UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                   TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                   TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                             ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this,
                              (MethodInfo *)0x0);
      pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&xpProgress);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar2 = mscorlib.dll::System::String::String_Concat
                         ((Object *)pSVar2,pOVar3,(MethodInfo *)0x0);
      this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_03,(Object *)this,
                 MethodInfo__MVLocalPlayerRegistered__LevelCallback_UnityEngine__Networking__UnityWebRequest_
                 ,
                 MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                );
      this_04 = (GetRequest *)func_?(TypeInfo__GetRequest);
      GetRequest::GetRequest__ctor
                (this_04,pSVar2,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_03,
                 WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_04,(MethodInfo *)0x0);
      return;
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (this->fields)._.OnXPProgressData;
    if (this_00 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
      XPProgress+OnXPProgressDataDelegate::XPProgress_OnXPProgressDataDelegate_Invoke
                (this_00,this_01,(MethodInfo *)0x0);
    }
    pSVar2 = TM::TM__(StringLiteral_You_gained__0__XP_,(MethodInfo *)0x0);
    xpProgress = (XPProgressData *)
                 System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System
                 ::Int32]::
                 Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                           ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_01,
                            (MethodInfo *)0x0);
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&xpProgress);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Format(pSVar2,pOVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?(TypeInfo__NotificationController);
    }
    NotificationController::NotificationController_PushNotification
              (pSVar2,(Sprite *)0x0,5,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    xp = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]
         ::
         Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                   ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_01,
                    (MethodInfo *)0x0);
    if (this_02 != (GameEventManager *)0x0) {
      GameEventManager::GameEventManager_NotifyXPDeltaAmount(this_02,xp,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

