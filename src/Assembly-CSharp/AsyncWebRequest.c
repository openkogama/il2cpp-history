
/* Void Dispose() */

void Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest_Dispose
               (AsyncWebRequest *this,MethodInfo *method)

{
  if ((this->fields).request != (UnityWebRequest *)0x0) {
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
    UnityWebRequest_Dispose((this->fields).request,(MethodInfo *)0x0);
  }
  return;
}


/* Void GotoRunState() */

void Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest_GotoRunState
               (AsyncWebRequest *this,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  uStack_3 = 0;
  pUVar4 = (UnityWebRequest *)
           (*(code *)(this->klass->vtable).__unknown.method)(this,this->klass[1]._0.image);
  (this->fields).request = pUVar4;
  func_?(&(this->fields).request,pUVar4);
  pUVar4 = (this->fields).request;
  (this->fields).state = 1;
  if (pUVar4 != (UnityWebRequest *)0x0) {
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
    UnityWebRequest_SendWebRequest(pUVar4,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_2;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean IsWaitingStateDone() */

bool Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest_IsWaitingStateDone
               (AsyncWebRequest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  d1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  t1 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                 (d1,(DateTime)(this->fields).retryTime._dateData,(MethodInfo *)0x0);
  pTVar1 = TypeInfo__System__TimeSpan;
  uVar2 = *(undefined4 *)((int)&(this->fields).currentTimeout._ticks + 4);
  pTVar3 = *(TimeSpan__Class **)&(this->fields).currentTimeout._ticks;
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
    pTVar3 = pTVar1;
  }
  t2._ticks._4_4_ = uVar2;
  t2._ticks._0_4_ = pTVar3;
  bVar4 = mscorlib.dll::System::TimeSpan::TimeSpan_op_GreaterThan(t1,t2,(MethodInfo *)0x0);
  return bVar4 != 0;
}


/* Boolean ReadyToDoCallback() */

bool Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest_ReadyToDoCallback
               (AsyncWebRequest *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__System__DateTime);
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
    func_?(&StringLiteral__0___1_);
    func_?(&StringLiteral_Got_an_error_with_no_length__);
    func_?(&StringLiteral_Failed_url__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  uStack_7 = 0;
  pUVar8 = (this->fields).request;
  if (pUVar8 == (UnityWebRequest *)0x0) goto code_?;
  pSVar9 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
           UnityWebRequest_get_error(pUVar8,(MethodInfo *)0x0);
  if (pSVar9 == (String *)0x0) goto code_?;
  pUVar8 = (this->fields).request;
  if ((pUVar8 == (UnityWebRequest *)0x0) ||
     (pSVar9 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(pUVar8,(MethodInfo *)0x0), pSVar9 == (String *)0x0))
  goto code_?;
  if ((pSVar9->fields)._stringLength < 1) {
    pUVar8 = (this->fields).request;
    if (pUVar8 == (UnityWebRequest *)0x0) goto code_?;
    pSVar9 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_GetUrl(pUVar8,(MethodInfo *)0x0);
    pSVar9 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Got_an_error_with_no_length__,pSVar9,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar9,(MethodInfo *)0x0);
  }
  pUVar8 = (this->fields).request;
  if ((pUVar8 == (UnityWebRequest *)0x0) ||
     (pSVar9 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(pUVar8,(MethodInfo *)0x0), pSVar9 == (String *)0x0))
  goto code_?;
  if ((pSVar9->fields)._stringLength < 1) {
code_?:
    if (0 < (this->fields).retries) {
      piVar10 = &(this->fields).retries;
      *piVar10 = *piVar10 + -1;
      if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__DateTime);
      }
      DVar11 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
      (this->fields).retryTime._dateData = DVar11._dateData;
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__AsyncWWWManager);
      }
      uVar12 = (this->fields).retries;
      pIVar13 = TypeInfo__AsyncWWWManager->static_fields->RetryTimeouts;
      if (pIVar13 != (Int32__Array *)0x0) {
        if (uVar12 < pIVar13->max_length) {
          TStack_14._ticks = 0;
          mscorlib.dll::System::TimeSpan::TimeSpan__ctor_2
                    (&TStack_14,0,0,0,pIVar13->vector[uVar12],(MethodInfo *)0x0);
          *(undefined4 *)&(this->fields).currentTimeout._ticks = (undefined4)TStack_14._ticks;
          pUVar8 = (this->fields).request;
          *(undefined4 *)((int)&(this->fields).currentTimeout._ticks + 4) = TStack_14._ticks._4_4_;
          (this->fields).state = 2;
          if ((pUVar8 != (UnityWebRequest *)0x0) &&
             (this_00 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::
                        UnityWebRequest::UnityWebRequest_GetResponseHeaders
                                  (pUVar8,(MethodInfo *)0x0),
             this_00 != (Dictionary_2_System_String_System_String_ *)0x0)) {
            pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System
                      ::Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *
                                 )&stack0xffffffa0,
                                 (Dictionary_2_System_UInt32_System_Object_ *)this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__GetEnumerator__
                                );
            pOVar16 = (Object *)(pDVar15->_current).key;
            uVar17 = *(undefined8 *)&(pDVar15->_current).value;
            TStack_14._ticks = ZEXT48((Object *)&stack0xffffffb8) << 0x20;
            uStack_1 = 1;
            while( true ) {
              bVar18 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                      Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *
                                 )&stack0xffffffb8,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                                );
              method_00 = (MethodInfo *)uVar17;
              if (bVar18 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)&stack0xffffffb8,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
                           ,method_00);
                uStack_1 = 0xffffffff;
                pUVar8 = (UnityWebRequest *)(*(code *)(this->klass->vtable).__unknown.method)();
                (this->fields).request = pUVar8;
                func_?();
                *unaff_FS_OFFSET = uStack_3;
                return 0;
              }
              pOVar19 = (Object *)0x2;
              pMStack_20 = method_00;
              pOStack_21 = pOVar16;
              args = (Object__Array *)func_?();
              if (args == (Object__Array *)0x0) break;
              pOVar16 = pOVar19;
              if ((pOStack_21 != (Object *)0x0) &&
                 (iVar22 = func_?(pOStack_21,(args->klass->_0).element_class),
                 pOVar16 = pOVar19, iVar22 == 0)) goto code_?;
              if (args->max_length == 0) goto code_?;
              args->vector[0] = pOStack_21;
              func_?(args->vector,pOStack_21);
              if ((pMStack_20 != (MethodInfo *)0x0) &&
                 (iVar22 = func_?(pMStack_20,(args->klass->_0).element_class), iVar22 == 0)
                 ) goto code_?;
              if (args->max_length < 2) goto code_?;
              args->vector[1] = (Object *)pMStack_20;
              func_?(args->vector + 1,pMStack_20);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
                        (StringLiteral__0___1_,args,(MethodInfo *)0x0);
            }
          }
        }
        else {
          func_?();
code_?:
          uVar23 = func_?();
          func_?(uVar23,0);
code_?:
          func_?();
code_?:
          uVar23 = func_?();
          func_?(uVar23,0);
code_?:
          func_?();
        }
      }
      goto code_?;
    }
  }
  else {
    pUVar8 = (this->fields).request;
    if ((pUVar8 == (UnityWebRequest *)0x0) ||
       (pSVar9 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                 UnityWebRequest_get_error(pUVar8,(MethodInfo *)0x0), pSVar9 == (String *)0x0))
    goto code_?;
    uVar24 = mscorlib.dll::System::String::String_get_Chars(pSVar9,0,(MethodInfo *)0x0);
    uStack_7 = (uint)uVar24;
    if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar9 = mscorlib.dll::System::Char::Char_ToString((Char *)&uStack_7,(MethodInfo *)0x0);
    bVar18 = mscorlib.dll::System::Int32::Int32_TryParse(pSVar9,&iStack_6,(MethodInfo *)0x0);
    if ((bVar18 == 0) || (iStack_6 != 4)) goto code_?;
  }
  pUVar8 = (this->fields).request;
  if (pUVar8 != (UnityWebRequest *)0x0) {
    pSVar9 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_GetUrl(pUVar8,(MethodInfo *)0x0);
    pSVar9 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Failed_url__,pSVar9,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)pSVar9,(MethodInfo *)0x0);
    pUVar8 = (this->fields).request;
    if (pUVar8 != (UnityWebRequest *)0x0) {
      pSVar9 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(pUVar8,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar9,(MethodInfo *)0x0);
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    }
  }
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  bVar18 = (*pcVar25)();
  return bVar18;
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
      return cVar2 != '\0';
    }
    if (iVar1 != 2) {
      return 0;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__DateTime);
      func_?(&TypeInfo__System__TimeSpan);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__DateTime);
    }
    d1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
    t1 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                   (d1,(DateTime)(this->fields).retryTime._dateData,(MethodInfo *)0x0);
    t2._ticks = (this->fields).currentTimeout._ticks;
    if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__TimeSpan);
    }
    bVar3 = mscorlib.dll::System::TimeSpan::TimeSpan_op_GreaterThan(t1,t2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return 0;
    }
  }
  AsyncWebRequest_GotoRunState(this,(MethodInfo *)0x0);
  return 0;
}


/* Boolean UpdateRunningState() */

bool Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest_UpdateRunningState
               (AsyncWebRequest *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffc4;
  this_00 = (this->fields).request;
  if (this_00 == (UnityWebRequest *)0x0) {
    auStack_5[0] = func_?();
    uVar6 = func_?(auStack_5,&UNK_?);
    func_?(uVar6);
    pcVar7 = (code *)swi(3);
    bVar8 = (*pcVar7)();
    return bVar8;
  }
  puStack_4 = &stack0xffffffc4;
  bVar8 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
          UnityWebRequest_get_isDone(this_00,(MethodInfo *)0x0);
  if (bVar8 != 0) {
    bStack_9 = bVar8;
    bVar10 = AsyncWebRequest_ReadyToDoCallback(this,(MethodInfo *)0x0);
    if (bVar10 == 0) {
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    (this->fields).isDone = 1;
    uStack_1 = 2;
    if ((this->fields).callback != (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
      (*(((this->fields).callback)->fields)._._.invoke_impl)();
    }
    uStack_1 = 0xffffffff;
    (this->fields).callback = (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0;
    func_?();
  }
  *unaff_FS_OFFSET = uStack_3;
  return bVar8;
}


/* AsyncWebRequest(String, Action`1[UnityEngine.Networking.UnityWebRequest], WWWRequestPriority) */

void Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest__ctor
               (AsyncWebRequest *this,String *path,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               WWWRequestPriority__Enum requestPriority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__System__DateTime);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  (this->fields).retries = TypeInfo__AsyncWWWManager->static_fields->retries;
  *(undefined4 *)&(this->fields).currentTimeout._ticks = 0;
  *(undefined4 *)((int)&(this->fields).currentTimeout._ticks + 4) = 0;
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  DVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  (this->fields).retryTime._dateData = DVar1._dateData;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).requestPriority = requestPriority;
  (this->fields).path = path;
  func_?(&(this->fields).path,path);
  (this->fields).callback = callback;
  func_?(&this->fields,callback);
  return;
}

