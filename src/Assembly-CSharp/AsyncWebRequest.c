
/* Void Dispose() */

void Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest_Dispose
               (AsyncWebRequest *this,MethodInfo *method)

{
  this_00 = (this->fields).request;
  if (this_00 != (UnityWebRequest *)0x0) {
    if (((this_00->fields)._disposeDownloadHandlerOnDispose_k__BackingField != 0) &&
       (this_01 = (this_00->fields).m_DownloadHandler, this_01 != (DownloadHandler *)0x0)) {
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
      DownloadHandler_Dispose(this_01,(MethodInfo *)0x0);
    }
    if (((this_00->fields)._disposeUploadHandlerOnDispose_k__BackingField != 0) &&
       (this_02 = (this_00->fields).m_UploadHandler, this_02 != (UploadHandler *)0x0)) {
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UploadHandler::
      UploadHandler_Dispose(this_02,(MethodInfo *)0x0);
    }
    if (((this_00->fields)._disposeCertificateHandlerOnDispose_k__BackingField != 0) &&
       (this_03 = (this_00->fields).m_CertificateHandler, this_03 != (CertificateHandler *)0x0)) {
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::CertificateHandler::
      CertificateHandler_Dispose(this_03,(MethodInfo *)0x0);
    }
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
    UnityWebRequest_InternalDestroy(this_00,(MethodInfo *)0x0);
    mscorlib.dll::System::GC::GC_1_SuppressFinalize((Object *)this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


/* Void GotoRunState() */

void Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest_GotoRunState
               (AsyncWebRequest *this,MethodInfo *method)

{
  pUVar1 = (UnityWebRequest *)
           (*(code *)(this->klass->vtable).__unknown.method)(this,this->klass[1]._0.image);
  (this->fields).request = pUVar1;
  (this->fields).state = 1;
  if (pUVar1 == (UnityWebRequest *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?,unaff_EBP), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?,0,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  iVar4 = (*pcRam_?)(pUVar1,unaff_ESI);
  if (iVar4 != 0) {
    *(UnityWebRequest **)(iVar4 + 0x10) = pUVar1;
  }
  return;
}


/* Boolean IsWaitingStateDone() */

bool Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest_IsWaitingStateDone
               (AsyncWebRequest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now
                     ((DateTime *)&stack0xffffffec,(MethodInfo *)0x0);
  t1 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction
                 (*pDVar1,(this->fields).retryTime,(MethodInfo *)0x0);
  uVar2 = *(undefined4 *)((int)&(this->fields).currentTimeout._ticks + 4);
  if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
    func_?();
  }
  t2._ticks._4_4_ = uVar2;
  t2._ticks._0_4_ = uVar2;
  bVar3 = mscorlib.dll::System::TimeSpan::TimeSpan_op_GreaterThan(t1,t2,(MethodInfo *)0x0);
  return bVar3 != 0;
}


/* Boolean ReadyToDoCallback() */

bool Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest_ReadyToDoCallback
               (AsyncWebRequest *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  uStack_7 = 0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  func_?();
  pUVar9 = (this->fields).request;
  puStack_10 = (undefined4 *)&stack0xffffff98;
  puStack_4 = &stack0xffffff98;
  if (pUVar9 != (UnityWebRequest *)0x0) {
    puStack_10 = (undefined4 *)&stack0xffffff98;
    puStack_4 = &stack0xffffff98;
    pSVar11 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
              UnityWebRequest_get_error(pUVar9,(MethodInfo *)0x0);
    if (pSVar11 == (String *)0x0) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    }
    pUVar9 = (this->fields).request;
    uStack_12._0_5_ = CONCAT14(1,(undefined4)uStack_12);
    if ((pUVar9 != (UnityWebRequest *)0x0) &&
       (pSVar11 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                  UnityWebRequest_get_error(pUVar9,(MethodInfo *)0x0), pSVar11 != (String *)0x0)) {
      uVar13 = mscorlib.dll::System::String::String_get_Chars(pSVar11,0,(MethodInfo *)0x0);
      uStack_7 = (uint)uVar13;
      method_00 = (MethodInfo *)&UNK_?;
      pSVar11 = (String *)func_?();
      bVar14 = mscorlib.dll::System::Int32::Int32_TryParse(pSVar11,&iStack_6,(MethodInfo *)0x0);
      cVar15 = (char)((ulonglong)uStack_12 >> 0x20);
      if ((bVar14 != 0) && (iStack_6 == 4)) {
        cVar15 = '\0';
      }
      iVar16 = (this->fields).retries;
      if ((iVar16 < 1) || (cVar15 == '\0')) {
        pUVar9 = (this->fields).request;
        if (pUVar9 != (UnityWebRequest *)0x0) {
          pSVar11 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest
                    ::UnityWebRequest_GetUrl(pUVar9,in_stack_17);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar11 = mscorlib.dll::System::String::String_Concat_2
                              (StringLiteral_Failed_url__,pSVar11,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)pSVar11,(MethodInfo *)0x0);
          pUVar9 = (this->fields).request;
          if (pUVar9 != (UnityWebRequest *)0x0) {
            pSVar11 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::
                      UnityWebRequest::UnityWebRequest_get_error(pUVar9,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)pSVar11,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
      else {
        (this->fields).retries = iVar16 + -1;
        if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__DateTime);
        }
        pDVar18 = mscorlib.dll::System::DateTime::DateTime_get_Now
                            ((DateTime *)(auStack_19 + 4),(MethodInfo *)0x0);
        uVar20 = *(undefined4 *)((int)&(pDVar18->ticks)._ticks + 4);
        iVar21 = pDVar18->kind;
        uVar22 = *(undefined4 *)&pDVar18->field_0xc;
        *(int *)&(this->fields).retryTime.ticks._ticks = (int)(pDVar18->ticks)._ticks;
        *(undefined4 *)((int)&(this->fields).retryTime.ticks._ticks + 4) = uVar20;
        (this->fields).retryTime.kind = iVar21;
        *(undefined4 *)&(this->fields).retryTime.field_0xc = uVar22;
        if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__AsyncWWWManager);
        }
        uVar23 = (this->fields).retries;
        pIVar24 = TypeInfo__AsyncWWWManager->static_fields->RetryTimeouts;
        if (pIVar24 != (Int32__Array *)0x0) {
          if (uVar23 < pIVar24->max_length) {
            uStack_12 = 0;
            func_?(&uStack_12,0,0,0,pIVar24->vector[uVar23]);
            *(undefined4 *)&(this->fields).currentTimeout._ticks = (undefined4)uStack_12;
            *(undefined4 *)((int)&(this->fields).currentTimeout._ticks + 4) = uStack_12._4_4_;
            pUVar9 = (this->fields).request;
            (this->fields).state = 2;
            if ((pUVar9 != (UnityWebRequest *)0x0) &&
               (this_00 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::
                          UnityWebRequest::UnityWebRequest_GetResponseHeaders(pUVar9,method_00),
               this_00 != (Dictionary_2_System_String_System_String_ *)0x0)) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
              Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                        ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                         auStack_19,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__GetEnumerator__
                        );
              uStack_1 = 0;
              while( true ) {
                cVar15 = func_?();
                if (cVar15 == '\0') {
                  *puStack_10 = 0xf4;
                  uStack_1 = 0xffffffff;
                  func_?();
                  pUVar9 = (UnityWebRequest *)func_?();
                  (this->fields).request = pUVar9;
                  *unaff_FS_OFFSET = uStack_3;
                  return 0;
                }
                KStack_8 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                      ((LevelRewardsManager *)&stack0xffffffa4,
                                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__get_Current__
                                      );
                auStack_19._0_4_ = (Dictionary_2_WinningConditionType_System_Object_ *)0x2;
                args = (Object__Array *)func_?();
                auStack_19._0_4_ =
                     MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Key__
                ;
                func_?();
                if (args == (Object__Array *)0x0) break;
                func_?();
                func_?();
                func_?();
                func_?();
                func_?();
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogFormat
                          (StringLiteral__0___1_,args,(MethodInfo *)0x0);
              }
            }
          }
          else {
            uVar20 = func_?(0);
            func_?(uVar20);
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar25 = (code *)swi(3);
  bVar14 = (*pcVar25)();
  return bVar14;
}


/* Boolean Update() */

bool Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest_Update
               (AsyncWebRequest *this,MethodInfo *method)

{
  iVar1 = (this->fields).state;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      cVar2 = (*(code *)(this->klass->vtable).UpdateRunningState.method)
                        (this,(this->klass->vtable).__unknown.methodPtr);
      if (cVar2 != '\0') {
        return 1;
      }
    }
    else if (iVar1 == 2) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__DateTime);
      }
      pDVar3 = mscorlib.dll::System::DateTime::DateTime_get_Now
                         ((DateTime *)&stack0xffffffe8,(MethodInfo *)0x0);
      t1 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction
                     (*pDVar3,(this->fields).retryTime,(MethodInfo *)0x0);
      uVar4 = (uint)(this->fields).currentTimeout._ticks;
      if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
        func_?();
      }
      t2._ticks._4_4_ = 0;
      t2._ticks._0_4_ = uVar4;
      bVar5 = mscorlib.dll::System::TimeSpan::TimeSpan_op_GreaterThan(t1,t2,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        AsyncWebRequest_GotoRunState(this,(MethodInfo *)0x0);
      }
    }
    return 0;
  }
  this_00 = (UnityWebRequest *)
            (*(code *)(this->klass->vtable).__unknown.method)(this,this->klass[1]._0.image);
  (this->fields).request = this_00;
  (this->fields).state = 1;
  if (this_00 != (UnityWebRequest *)0x0) {
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
    UnityWebRequest_SendWebRequest(this_00,(MethodInfo *)0x0);
    return 0;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean UpdateRunningState() */

bool Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest_UpdateRunningState
               (AsyncWebRequest *this,MethodInfo *method)

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
  this_00 = (this->fields).request;
  if (this_00 == (UnityWebRequest *)0x0) {
    func_?();
    func_?();
    func_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  bVar5 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
          UnityWebRequest_get_isDone(this_00,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    bVar6 = AsyncWebRequest_ReadyToDoCallback(this,(MethodInfo *)0x0);
    if (bVar6 == 0) {
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    (this->fields).isDone = 1;
    this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
              (this->fields).callback;
    uStack_1 = 1;
    if (this_01 !=
        (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
      String,System::Object]]::
      Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                (this_01,(Dictionary_2_System_String_System_Object_ *)(this->fields).request,
                 MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Invoke_UnityEngine__Networking__UnityWebRequest_
                );
    }
    (this->fields).callback = (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0;
  }
  *unaff_FS_OFFSET = uStack_3;
  return bVar5;
}


/* AsyncWebRequest(String, Action`1[UnityEngine.Networking.UnityWebRequest], WWWRequestPriority) */

void Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest__ctor
               (AsyncWebRequest *this,String *path,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               WWWRequestPriority__Enum requestPriority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  (this->fields).retries = TypeInfo__AsyncWWWManager->static_fields->retries;
  uStack_1 = 0;
  func_?(&uStack_1,0,0,0);
  *(undefined4 *)&(this->fields).currentTimeout._ticks = (undefined4)uStack_1;
  *(undefined4 *)((int)&(this->fields).currentTimeout._ticks + 4) = uStack_1._4_4_;
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now(&DStack_3,(MethodInfo *)0x0);
  uVar4 = *(undefined4 *)((int)&(pDVar2->ticks)._ticks + 4);
  iVar5 = pDVar2->kind;
  uVar6 = *(undefined4 *)&pDVar2->field_0xc;
  *(int *)&(this->fields).retryTime.ticks._ticks = (int)(pDVar2->ticks)._ticks;
  *(undefined4 *)((int)&(this->fields).retryTime.ticks._ticks + 4) = uVar4;
  (this->fields).retryTime.kind = iVar5;
  *(undefined4 *)&(this->fields).retryTime.field_0xc = uVar6;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).requestPriority = requestPriority;
  (this->fields).path = path;
  (this->fields).callback = callback;
  return;
}

