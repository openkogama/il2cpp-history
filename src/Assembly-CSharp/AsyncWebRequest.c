
/* Void Dispose() */

void Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest_Dispose
               (AsyncWebRequest *this,MethodInfo *method)

{
  if ((this->fields).request == (UnityWebRequest *)0x0) {
    return;
  }
  this_00 = (this->fields).request;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__GC);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
  UnityWebRequest_DisposeHandlers(this_00,(MethodInfo *)0x0);
  UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
  UnityWebRequest_InternalDestroy(this_00,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__GC->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__GC,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_00 == (UnityWebRequest *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_01 = (ArgumentNullException *)func_?(uVar1);
    paramName = (String *)func_?(&StringLiteral_obj);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_01,paramName,(MethodInfo *)0x0);
    uVar1 = func_?(&MethodInfo__System__GC__SuppressFinalize_System__Object_);
    FUN_?(this_01,uVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)&(TypeInfo__System__GC->_1).field_0x1c == 0) {
    FUN_?();
  }
  FUN_?(0xADDR);
  lVar3 = 0;
  if (lRam_? != lRam_?) {
    pUVar4 = this_00;
    while( true ) {
      uVar5 = lRam_? - 1U & (ulonglong)pUVar4;
      if (((int)uRam_? == *(int *)(uVar5 * 0x20 + lRam_?)) &&
         (((int)uRam_? != 0 ||
          (lRam_? == *(longlong *)(uVar5 * 0x20 + 8 + lRam_?)))))
      goto code_?;
      if ((((lRam_? == 0) ||
           (((int)uRam_? != *(int *)(uVar5 * 0x20 + lRam_?) ||
            (((int)uRam_? == 0 &&
             (lRam_? != *(longlong *)(uVar5 * 0x20 + 8 + lRam_?)))))))
          && (*(int *)(uVar5 * 0x20 + lRam_?) == 0)) &&
         (this_00 == *(UnityWebRequest **)(uVar5 * 0x20 + 8 + lRam_?))) break;
      lVar3 = lVar3 + 1;
      pUVar4 = (UnityWebRequest *)(uVar5 + lVar3);
    }
    if ((uVar5 != 0xffffffffffffffff) &&
       (lVar3 = uVar5 * 0x20 + lRam_?,
       lVar3 != lRam_? * 0x20 + lRam_?)) {
      *(undefined1 *)(lVar3 + 0x18) = 0;
      goto code_?;
    }
  }
code_?:
  FUN_?(this_00,0);
code_?:
  iVar6 = iRam_?;
  if (iRam_? == 0) {
    uRam_? = 0;
    LOCK();
    iRam_? = 0;
    UNLOCK();
    if (iVar6 == 2) {
      _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                (0xADDR,1,0);
    }
  }
  else {
    iRam_? = iRam_? + -1;
  }
  return;
}


/* Void GotoRunState() */

void Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest_GotoRunState
               (AsyncWebRequest *this,MethodInfo *method)

{
  pUVar1 = (UnityWebRequest *)(*(this->klass->vtable).__unknown.methodPtr)();
  (this->fields).request = pUVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).request >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  (this->fields).state = 1;
  pUVar1 = (this->fields).request;
  if (pUVar1 == (UnityWebRequest *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
  UnityWebRequest_SendWebRequest(pUVar1,(MethodInfo *)0x0);
  return;
}


/* Boolean IsWaitingStateDone() */

bool Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest_IsWaitingStateDone
               (AsyncWebRequest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  d1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  TVar1 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                    (d1,(DateTime)(this->fields).retryTime._dateData,(MethodInfo *)0x0);
  lVar2 = (this->fields).currentTimeout._ticks;
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  return lVar2 < TVar1._ticks;
}


/* Boolean ReadyToDoCallback() */

bool Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest_ReadyToDoCallback
               (AsyncWebRequest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0___1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Got_an_error_with_no_length__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_url__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = 0;
  pUVar1 = (this->fields).request;
  if (pUVar1 != (UnityWebRequest *)0x0) {
    pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
              UnityWebRequest_get_error(pUVar1,(MethodInfo *)0x0);
    if (pSVar2 == (String *)0x0) {
      return 1;
    }
    pUVar1 = (this->fields).request;
    if ((pUVar1 != (UnityWebRequest *)0x0) &&
       (pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                  UnityWebRequest_get_error(pUVar1,(MethodInfo *)0x0), pSVar2 != (String *)0x0)) {
      iVar3 = (pSVar2->fields)._stringLength;
      if (iVar3 < 1) {
        pUVar1 = (this->fields).request;
        if (pUVar1 == (UnityWebRequest *)0x0) goto code_?;
        pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                  UnityWebRequest_GetUrl(pUVar1,(MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral_Got_an_error_with_no_length__,pSVar2,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar2,(MethodInfo *)0x0);
      }
      bVar4 = true;
      if (0 < iVar3) {
        pUVar1 = (this->fields).request;
        if ((pUVar1 == (UnityWebRequest *)0x0) ||
           (pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::
                      UnityWebRequest::UnityWebRequest_get_error(pUVar1,(MethodInfo *)0x0),
           pSVar2 == (String *)0x0)) goto code_?;
        if ((pSVar2->fields)._stringLength < 1) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
code_?:
          uVar5 = FUN_?();
          FUN_?(uVar5,0);
code_?:
          uVar5 = FUN_?();
          FUN_?(uVar5,0);
code_?:
          FUN_?();
          FUN_?();
          pcVar6 = (code *)swi(3);
          bVar7 = (*pcVar6)();
          return bVar7;
        }
        c = (pSVar2->fields)._firstChar;
        if ((*(int *)(lRam_? + 0xe4) == 0) &&
           (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
          FUN_?();
        }
        pSVar2 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
        bVar7 = mscorlib.dll::System::Int32::Int32_TryParse(pSVar2,aiStackX_8,(MethodInfo *)0x0);
        if ((bVar7 != 0) && (aiStackX_8[0] == 4)) {
          bVar4 = false;
        }
      }
      if (((this->fields).retries < 1) || (!bVar4)) {
        pUVar1 = (this->fields).request;
        if (pUVar1 != (UnityWebRequest *)0x0) {
          pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest
                    ::UnityWebRequest_GetUrl(pUVar1,(MethodInfo *)0x0);
          pSVar2 = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_Failed_url__,pSVar2,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pSVar2,(MethodInfo *)0x0);
          pUVar1 = (this->fields).request;
          if (pUVar1 != (UnityWebRequest *)0x0) {
            pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::
                      UnityWebRequest::UnityWebRequest_get_error(pUVar1,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)pSVar2,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
      else {
        piVar8 = &(this->fields).retries;
        *piVar8 = *piVar8 + -1;
        if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
          FUN_?();
        }
        DVar9 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
        (this->fields).retryTime._dateData = DVar9._dateData;
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AsyncWWWManager);
        }
        pIVar10 = TypeInfo__AsyncWWWManager->static_fields->RetryTimeouts;
        uVar11 = (this->fields).retries;
        if (pIVar10 != (Int32__Array *)0x0) {
          if ((uint)pIVar10->max_length <= uVar11) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            bVar7 = (*pcVar6)();
            return bVar7;
          }
          iVar3 = pIVar10->vector[(int)uVar11];
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__TimeSpan);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (0x68db8bac710ca < (longlong)iVar3 * 1000 + 0x346dc5d638865U) {
            uVar5 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
            this_00 = (ArgumentOutOfRangeException *)func_?(uVar5);
            pSVar2 = (String *)func_?(&StringLiteral_TimeSpan_overflowed_because_the_)
            ;
            mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                      (this_00,(String *)0x0,pSVar2,(MethodInfo *)0x0);
            uVar5 = func_?(&
                                         MethodInfo__System__TimeSpan__TimeSpan_int__int__int__int__int_
                                        );
            FUN_?(this_00,uVar5);
            pcVar6 = (code *)swi(3);
            bVar7 = (*pcVar6)();
            return bVar7;
          }
          (this->fields).currentTimeout._ticks = (longlong)iVar3 * 10000000;
          (this->fields).state = 2;
          pUVar1 = (UnityWebRequest *)(*(this->klass->vtable).__unknown.methodPtr)(this);
          (this->fields).request = pUVar1;
          func_?(&(this->fields).request);
          pUVar1 = (this->fields).request;
          if (pUVar1 != (UnityWebRequest *)0x0) {
            pDStack_12 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::
                         UnityWebRequest::UnityWebRequest_GetResponseHeaders
                                   (pUVar1,(MethodInfo *)0x0);
            if (pDStack_12 != (Dictionary_2_System_String_System_String_ *)0x0) {
              uStack_13 = 0;
              uStack_14 = 0;
              if (iRam_? != 0) {
                uVar11 = (uint)((ulonglong)&pDStack_12 >> 0xc);
                puVar15 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar16 = *puVar15;
                  LOCK();
                  uVar17 = *puVar15;
                  if (uVar16 == uVar17) {
                    *puVar15 = uVar16 | 1L << (uVar11 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar16 != uVar17);
              }
              uStack_18 = (ulonglong)(uint)(pDStack_12->fields)._version;
              uStack_19 = 2;
              DStack_20._version = (undefined4)uStack_18;
              DStack_20._index = uStack_18._4_4_;
              DStack_20._current.key = (Object *)0x0;
              DStack_20._current.value = (Object *)0x0;
              DStack_20._getEnumeratorRetType = 2;
              DStack_20._36_4_ = 0;
              DStack_20._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDStack_12;
              while (bVar7 = mscorlib.dll::System::Collections::Generic::
                              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                        (&DStack_20,
                                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                                        ), pOVar21 = DStack_20._current.value,
                    pOVar22 = DStack_20._current.key, bVar7 != 0) {
                args = (Object__Array *)FUN_?(TypeInfo__System__Object,2);
                if (args == (Object__Array *)0x0) goto code_?;
                if ((pOVar22 != (Object *)0x0) &&
                   (lVar23 = FUN_?(pOVar22,(args->klass->_0).element_class), lVar23 == 0))
                goto code_?;
                FUN_?(args,0,pOVar22);
                if ((pOVar21 != (Object *)0x0) &&
                   (lVar23 = FUN_?(pOVar21,(args->klass->_0).element_class), lVar23 == 0))
                goto code_?;
                FUN_?(args,1);
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
                          (StringLiteral__0___1_,args,(MethodInfo *)0x0);
              }
            }
            return 0;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Boolean Update() */

bool Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest_Update
               (AsyncWebRequest *this,MethodInfo *method)

{
  iVar1 = (this->fields).state;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      cVar2 = (*(this->klass->vtable).UpdateRunningState.methodPtr)
                        (this,(this->klass->vtable).UpdateRunningState.method);
      return cVar2 != '\0';
    }
    if (iVar1 != 2) {
      return 0;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__TimeSpan);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    d1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
    TVar3 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                      (d1,(DateTime)(this->fields).retryTime._dateData,(MethodInfo *)0x0);
    lVar4 = (this->fields).currentTimeout._ticks;
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TVar3._ticks <= lVar4) {
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
  obj = (this->fields).request;
  apAStackX_8[0] = this;
  if (obj == (UnityWebRequest *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pvVar3 = (obj->fields).m_Ptr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
  iVar5 = (*pcRam_?)(pvVar3);
  bStackX_18 = iVar5 != 0;
  if (iVar5 != 0) {
    bVar2 = AsyncWebRequest_ReadyToDoCallback(apAStackX_8[0],(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    (apAStackX_8[0]->fields).isDone = 1;
    appAStack_6[0] = apAStackX_8;
    pAVar7 = (apAStackX_8[0]->fields).callback;
    if (pAVar7 != (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
      (*(pAVar7->fields)._._.invoke_impl)
                ((pAVar7->fields)._._.method_code,(apAStackX_8[0]->fields).request,
                 (pAVar7->fields)._._.method);
    }
    func_?(appAStack_6);
  }
  return bStackX_18;
}


/* AsyncWebRequest(String, Action`1[UnityEngine.Networking.UnityWebRequest], WWWRequestPriority) */

void Assembly-CSharp.dll::AsyncWebRequest::AsyncWebRequest__ctor
               (AsyncWebRequest *this,String *path,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               WWWRequestPriority__Enum requestPriority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  (this->fields).retries = TypeInfo__AsyncWWWManager->static_fields->retries;
  (this->fields).currentTimeout._ticks = 0;
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  DVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  (this->fields).retryTime._dateData = DVar1._dateData;
  iVar2 = iRam_?;
  (this->fields).requestPriority = requestPriority;
  (this->fields).path = path;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).path >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).callback = callback;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return;
}

