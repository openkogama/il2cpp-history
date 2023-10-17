
/* Void BackgroundUpdate() */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing_BackgroundUpdate
               (SessionLocatorPing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__GetRequest);
    func_?(&
                    MethodInfo__SessionLocatorPing__WWWCallBack_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).waitForTicks;
  if (this_00 != (WaitForTicksLocal *)0x0) {
    bVar1 = WaitForTicksLocal::WaitForTicksLocal_get_TimeIsUp(this_00,(MethodInfo *)0x0);
    if ((bVar1 == 0) || ((this->fields).pingInFlight != 0)) {
      return;
    }
    (this->fields).pingInFlight = 1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar2 != (GameSessionData *)0x0) {
      path = (pGVar2->fields).pingURL;
      this_01 = (Action_1_Object_ *)
                func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      if (this_01 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__SessionLocatorPing__WWWCallBack_UnityEngine__Networking__UnityWebRequest_
                   ,(MethodInfo *)0x0);
        this_02 = (AssetBundleRequest *)func_?(TypeInfo__GetRequest);
        if (this_02 != (AssetBundleRequest *)0x0) {
          AssetBundleRequest::AssetBundleRequest__ctor
                    (this_02,path,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                     WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(MethodInfo *)0x0);
          if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__SessionLocatorPing____c___CloseApplication_b__12_0__);
    func_?(&TypeInfo__SessionLocatorPing____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral_Quiting_due_to_connection_error_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Quiting_due_to_connection_error_,(MethodInfo *)0x0);
  if ((TypeInfo__SessionLocatorPing____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = TypeInfo__SessionLocatorPing____c->static_fields->__9__12_0;
  if (this_00 == (UnityAction *)0x0) {
    if ((TypeInfo__SessionLocatorPing____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    object = TypeInfo__SessionLocatorPing____c->static_fields->__9;
    this_00 = (UnityAction *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
    if (this_00 == (UnityAction *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              ((NavMesh_OnNavMeshPreUpdate *)this_00,(Object *)object,
               MethodInfo__SessionLocatorPing____c___CloseApplication_b__12_0__,(MethodInfo *)0x0);
    TypeInfo__SessionLocatorPing____c->static_fields->__9__12_0 = this_00;
    func_?(&TypeInfo__SessionLocatorPing____c->static_fields->__9__12_0,this_00);
  }
  coroutine = WaitForFrames::WaitForFrames_Frames(5,this_00,(MethodInfo *)0x0);
  Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
  return;
}


/* Void InternalUpdate() */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing_InternalUpdate
               (SessionLocatorPing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__GetRequest);
    func_?(&
                    MethodInfo__SessionLocatorPing__WWWCallBack_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).waitForTicks;
  if (this_00 != (WaitForTicksLocal *)0x0) {
    bVar1 = WaitForTicksLocal::WaitForTicksLocal_get_TimeIsUp(this_00,(MethodInfo *)0x0);
    if ((bVar1 == 0) || ((this->fields).pingInFlight != 0)) {
      return;
    }
    (this->fields).pingInFlight = 1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar2 != (GameSessionData *)0x0) {
      path = (pGVar2->fields).pingURL;
      this_01 = (Action_1_Object_ *)
                func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      if (this_01 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__SessionLocatorPing__WWWCallBack_UnityEngine__Networking__UnityWebRequest_
                   ,(MethodInfo *)0x0);
        this_02 = (AssetBundleRequest *)func_?(TypeInfo__GetRequest);
        if (this_02 != (AssetBundleRequest *)0x0) {
          AssetBundleRequest::AssetBundleRequest__ctor
                    (this_02,path,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                     WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(MethodInfo *)0x0);
          if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void LeaveSession() */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing_LeaveSession(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__GetRequest);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    path = (pGVar1->fields).disconnectURL;
    this = (AssetBundleRequest *)func_?(TypeInfo__GetRequest);
    if (this != (AssetBundleRequest *)0x0) {
      AssetBundleRequest::AssetBundleRequest__ctor
                (this,path,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0,
                 WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(MethodInfo *)0x0);
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this,(MethodInfo *)0x0);
      return;
    }
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
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Value__
                   );
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_Response_headers);
    func_?(&StringLiteral__0___1_);
    func_?(&StringLiteral_Ping_failed);
    func_?(&StringLiteral_Ping_failed_url__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  uStack_7 = 0;
  iStack_1._0_1_ = 0;
  iStack_1._1_3_ = 0;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
  if (result != (UnityWebRequest *)0x0) {
    pSVar8 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_GetUrl(result,(MethodInfo *)0x0);
    pSVar8 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Ping_failed_url__,pSVar8,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar8,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Response_headers,(MethodInfo *)0x0);
    this_00 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
              UnityWebRequest_GetResponseHeaders(result,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
      pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffff9c,(Dictionary_2_System_Object_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__GetEnumerator__
                         );
      uStack_10 = 0;
      DStack_6._dictionary = pDVar9->_dictionary;
      DStack_6._version = pDVar9->_version;
      DStack_6._index = pDVar9->_index;
      DStack_6._current.key = (pDVar9->_current).key;
      DStack_6._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
      iStack_1._0_1_ = 2;
      pDStack_11 = &DStack_6;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                          );
        pOVar13 = DStack_6._current.key;
        if (bVar12 == 0) {
          iStack_1._0_1_ = 0;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&DStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
                     ,in_stack_14);
          iStack_1 = (uint)iStack_1._1_3_ << 8;
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Ping_failed,(MethodInfo *)0x0);
          (this->fields).connectionLost = 1;
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pOStack_15 = DStack_6._current.value;
        args = (Object__Array *)func_?();
        if (args == (Object__Array *)0x0) goto code_?;
        if ((pOVar13 != (Object *)0x0) &&
           (iVar16 = func_?(pOVar13,(args->klass->_0).element_class), iVar16 == 0)) break;
        if (args->max_length == 0) goto code_?;
        args->vector[0] = pOVar13;
        func_?(args->vector,pOVar13);
        if ((pOStack_15 != (Object *)0x0) &&
           (iVar16 = func_?(pOStack_15,(args->klass->_0).element_class), iVar16 == 0))
        goto code_?;
        if (args->max_length < 2) goto code_?;
        args->vector[1] = pOStack_15;
        func_?(args->vector + 1,pOStack_15);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogFormat
                  (StringLiteral__0___1_,args,(MethodInfo *)0x0);
      }
      uVar17 = func_?();
      func_?(uVar17,0);
code_?:
      func_?();
code_?:
      uVar17 = func_?();
      func_?(uVar17,0);
code_?:
      func_?();
    }
  }
code_?:
  uVar17 = func_?();
  func_?(uVar17);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
    func_?();
    func_?(&MethodInfo__SessionLocatorPing____c___CloseApplication_b__12_0__);
    func_?(&TypeInfo__SessionLocatorPing____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral_Quiting_due_to_connection_error_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Quiting_due_to_connection_error_,(MethodInfo *)0x0);
  if ((TypeInfo__SessionLocatorPing____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_01 = TypeInfo__SessionLocatorPing____c->static_fields->__9__12_0;
  if (this_01 == (UnityAction *)0x0) {
    if ((TypeInfo__SessionLocatorPing____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    object = TypeInfo__SessionLocatorPing____c->static_fields->__9;
    this_01 = (UnityAction *)func_?();
    if (this_01 == (UnityAction *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              ((NavMesh_OnNavMeshPreUpdate *)this_01,(Object *)object,
               MethodInfo__SessionLocatorPing____c___CloseApplication_b__12_0__,(MethodInfo *)0x0);
    TypeInfo__SessionLocatorPing____c->static_fields->__9__12_0 = this_01;
    func_?();
  }
  WaitForFrames::WaitForFrames_Frames(5,this_01,(MethodInfo *)0x0);
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
code_?:
  func_?();
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
    func_?(&TypeInfo__WaitForTicksLocal);
    cRam_? = '\x01';
  }
  if (result != (UnityWebRequest *)0x0) {
    value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_error(result,(MethodInfo *)0x0);
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      SessionLocatorPing_OnPingError((SessionLocatorPing *)0x0,result,(MethodInfo *)0x0);
      return;
    }
    milliseconds = (this->fields).pingIntervalInMilliSeconds;
    this_00 = (WaitForTicksLocal *)func_?(TypeInfo__WaitForTicksLocal);
    if (this_00 != (WaitForTicksLocal *)0x0) {
      WaitForTicksLocal::WaitForTicksLocal__ctor(this_00,milliseconds,(MethodInfo *)0x0);
      (this->fields).waitForTicks = this_00;
      func_?(&this->fields,this_00);
      (this->fields).pingInFlight = 0;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* SessionLocatorPing() */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing__ctor
               (SessionLocatorPing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    func_?(&TypeInfo__WaitForTicksLocal);
    cRam_? = '\x01';
  }
  this_00 = (WaitForTicksLocal *)func_?(TypeInfo__WaitForTicksLocal);
  if (this_00 != (WaitForTicksLocal *)0x0) {
    WaitForTicksLocal::WaitForTicksLocal__ctor(this_00,0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).waitForTicks = this_00;
    func_?(method_00,this_00);
    (this->fields).pingIntervalInMilliSeconds = 60000;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UpdateController::UpdateController_AddUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,
               1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

