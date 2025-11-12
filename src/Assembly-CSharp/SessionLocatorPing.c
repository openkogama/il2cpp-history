
/* Void BackgroundUpdate() */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing_BackgroundUpdate
               (SessionLocatorPing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GetRequest);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SessionLocatorPing__WWWCallBack_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).waitForTicks;
  if (pWVar1 != (WaitForTicksLocal *)0x0) {
    iVar2 = FUN_?();
    if (((pWVar1->fields).maxTicks <= (uint)(iVar2 - (pWVar1->fields).startTicks)) &&
       ((this->fields).pingInFlight == 0)) {
      bVar3 = cRam_? == '\0';
      (this->fields).pingInFlight = 1;
      if (bVar3) {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar4 == (GameSessionData *)0x0) goto code_?;
      path = (pGVar4->fields).pingURL;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__SessionLocatorPing__WWWCallBack_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      this_01 = (AsyncWebRequest *)FUN_?(TypeInfo__GetRequest);
      AsyncWebRequest::AsyncWebRequest__ctor
                (this_01,path,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                 WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest(this_01,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void CloseApplication() */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing_CloseApplication
               (SessionLocatorPing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SessionLocatorPing____c___CloseApplication_b__12_0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SessionLocatorPing____c);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Quiting_due_to_connection_error_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Quiting_due_to_connection_error_,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__SessionLocatorPing____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = TypeInfo__SessionLocatorPing____c->static_fields->__9__12_0;
  if (this_00 == (UnityAction *)0x0) {
    if (*(int *)&(TypeInfo__SessionLocatorPing____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__SessionLocatorPing____c->static_fields->__9;
    this_00 = (UnityAction *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              ((NavMesh_OnNavMeshPreUpdate *)this_00,(Object *)object,
               MethodInfo__SessionLocatorPing____c___CloseApplication_b__12_0__,(MethodInfo *)0x0);
    TypeInfo__SessionLocatorPing____c->static_fields->__9__12_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__SessionLocatorPing____c->static_fields->__9__12_0 >> 0xc
                     );
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  pIVar5 = WaitForFrames::WaitForFrames_WithCallback(5,this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Coroutines);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = TypeInfo__Coroutines->static_fields->instance;
  if (obj == (Coroutines *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (pIVar5 == (IEnumerator *)0x0) {
    uVar7 = func_?(&TypeInfo__System__NullReferenceException);
    this_01 = (NullReferenceException *)func_?(uVar7);
    pSVar8 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_01,pSVar8,(MethodInfo *)0x0);
    uVar7 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar7);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar9 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)obj,(MethodInfo *)0x0);
  if (bVar9 == 0) {
    uVar7 = func_?(&TypeInfo__System__ArgumentException);
    this_02 = (InvalidEnumArgumentException *)func_?(uVar7);
    pSVar8 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_02,pSVar8,(MethodInfo *)0x0);
    uVar7 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_02,uVar7);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Coroutines *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pvVar10 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar10,pIVar5);
  return;
}


/* Void InternalUpdate() */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing_InternalUpdate
               (SessionLocatorPing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GetRequest);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SessionLocatorPing__WWWCallBack_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).waitForTicks;
  if (pWVar1 != (WaitForTicksLocal *)0x0) {
    iVar2 = FUN_?();
    if (((pWVar1->fields).maxTicks <= (uint)(iVar2 - (pWVar1->fields).startTicks)) &&
       ((this->fields).pingInFlight == 0)) {
      bVar3 = cRam_? == '\0';
      (this->fields).pingInFlight = 1;
      if (bVar3) {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar4 == (GameSessionData *)0x0) goto code_?;
      path = (pGVar4->fields).pingURL;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__SessionLocatorPing__WWWCallBack_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      this_01 = (AsyncWebRequest *)FUN_?(TypeInfo__GetRequest);
      AsyncWebRequest::AsyncWebRequest__ctor
                (this_01,path,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                 WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest(this_01,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void LeaveSession() */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing_LeaveSession(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GetRequest);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  path = (pGVar1->fields).disconnectURL;
  this_00 = (AsyncWebRequest *)FUN_?(TypeInfo__GetRequest);
  AsyncWebRequest::AsyncWebRequest__ctor
            (this_00,path,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0,
             WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CachedGetRequest);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  if (TypeInfo__AsyncWWWManager->static_fields->isQuiting != 0) {
    return;
  }
  if (this_00 != (AsyncWebRequest *)0x0) {
    bVar3 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
    if ((bVar3 <= (this_00->klass->_1).naturalAligment) &&
       ((this_00->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
        (Il2CppClass *)TypeInfo__CachedGetRequest)) {
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      pAVar4 = this_00->klass;
      bVar3 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
      if (((pAVar4->_1).naturalAligment < bVar3) ||
         ((pAVar4->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__CachedGetRequest)) {
        FUN_?(this_00,TypeInfo__CachedGetRequest,TypeInfo__CachedGetRequest,pAVar4,unaff_RBX
                     );
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      cVar5 = (*(code *)pAVar4[1]._0.image)
                        (this_00,TypeInfo__AsyncWWWManager->static_fields->cache,
                         pAVar4[1]._0.gc_desc);
      if (cVar5 != '\0') {
        return;
      }
    }
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  this = TypeInfo__AsyncWWWManager->static_fields->requests;
  if (((this_00 != (AsyncWebRequest *)0x0) &&
      (this != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) &&
     (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this,
                          (this_00->fields).requestPriority,
                          MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                         ), pOVar6 != (Object *)0x0)) {
    if (pOVar6[1].klass != (Object__Class *)0x0) {
      if (*(int *)&pOVar6[2].klass == *(int *)&((pOVar6[1].klass)->_0).namespaze) {
        pOVar7 = pOVar6[1].klass;
        iVar8 = *(int *)&(pOVar7->_0).namespaze * 2;
        if (iVar8 < *(int *)&(pOVar7->_0).namespaze + 4) {
          iVar8 = *(int *)&(pOVar7->_0).namespaze + 4;
        }
        FUN_?(pOVar6,iVar8,
                      MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                      ->klass->rgctx_data[5].rgctxDataDummy);
      }
      if (pOVar6[1].klass != (Object__Class *)0x0) {
        FUN_?(pOVar6[1].klass,(longlong)*(int *)((longlong)&pOVar6[1].monitor + 4),this_00);
        if (pOVar6[1].klass != (Object__Class *)0x0) {
          iVar9 = *(int *)((longlong)&pOVar6[1].monitor + 4) + 1;
          iVar8 = 0;
          if (iVar9 != *(int *)&((pOVar6[1].klass)->_0).namespaze) {
            iVar8 = iVar9;
          }
          *(int *)((longlong)&pOVar6[1].monitor + 4) = iVar8;
          *(int *)&pOVar6[2].klass = *(int *)&pOVar6[2].klass + 1;
          piVar10 = (int *)((longlong)&pOVar6[2].klass + 4);
          *piVar10 = *piVar10 + 1;
          return;
        }
      }
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPingError(UnityWebRequest) */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing_OnPingError
               (SessionLocatorPing *this,UnityWebRequest *result,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&StringLiteral_Response_headers);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0___1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ping_failed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ping_failed_url__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aDStack_1[0]._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  aDStack_1[0]._version = 0;
  aDStack_1[0]._index = 0;
  aDStack_1[0]._current.key = (Object *)0x0;
  aDStack_1[0]._current.value = (Object *)0x0;
  aDStack_1[0]._getEnumeratorRetType = 0;
  aDStack_1[0]._36_4_ = 0;
  if (result != (UnityWebRequest *)0x0) {
    pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_GetUrl(result,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Ping_failed_url__,pSVar2,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Response_headers,(MethodInfo *)0x0);
    pDVar3 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_GetResponseHeaders(result,(MethodInfo *)0x0);
    if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&pDStack_5 >> 0xc);
        lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      uStack_10 = (ulonglong)(uint)(pDVar3->fields)._version;
      uStack_11 = 2;
      uStack_12 = 0;
      uStack_13 = 0;
      aDStack_1[0]._version = (undefined4)uStack_10;
      aDStack_1[0]._index = uStack_10._4_4_;
      aDStack_1[0]._current.key = (Object *)0x0;
      aDStack_1[0]._current.value = (Object *)0x0;
      aDStack_1[0]._getEnumeratorRetType = 2;
      aDStack_1[0]._36_4_ = 0;
      pDStack_5 = pDVar3;
      aDStack_1[0]._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar3;
      while( true ) {
        bVar14 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (aDStack_1,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                          );
        pOVar15 = aDStack_1[0]._current.value;
        pOVar16 = aDStack_1[0]._current.key;
        if (bVar14 == 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Ping_failed,(MethodInfo *)0x0);
          (this->fields).connectionLost = 1;
          return;
        }
        args = (Object__Array *)FUN_?(TypeInfo__System__Object,2);
        if (args == (Object__Array *)0x0) break;
        if ((pOVar16 != (Object *)0x0) &&
           (lVar6 = FUN_?(pOVar16,(args->klass->_0).element_class), lVar6 == 0)) {
          uVar17 = FUN_?();
          FUN_?(uVar17,0);
code_?:
          FUN_?();
code_?:
          uVar17 = FUN_?();
          FUN_?(uVar17,0);
code_?:
          FUN_?();
          break;
        }
        if ((int)args->max_length == 0) goto code_?;
        args->vector[0] = pOVar16;
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)args->vector >> 0xc);
          lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        if ((pOVar15 != (Object *)0x0) &&
           (lVar6 = FUN_?(pOVar15,(args->klass->_0).element_class), lVar6 == 0))
        goto code_?;
        if ((uint)args->max_length < 2) goto code_?;
        args->vector[1] = pOVar15;
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)(args->vector + 1) >> 0xc);
          lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
                  (StringLiteral__0___1_,args,(MethodInfo *)0x0);
      }
      FUN_?();
    }
    FUN_?();
    FUN_?();
  }
  FUN_?();
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
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SessionLocatorPing____c___CloseApplication_b__12_0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SessionLocatorPing____c);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Quiting_due_to_connection_error_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Quiting_due_to_connection_error_,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__SessionLocatorPing____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = TypeInfo__SessionLocatorPing____c->static_fields->__9__12_0;
  if (this_00 == (UnityAction *)0x0) {
    if (*(int *)&(TypeInfo__SessionLocatorPing____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__SessionLocatorPing____c->static_fields->__9;
    this_00 = (UnityAction *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              ((NavMesh_OnNavMeshPreUpdate *)this_00,(Object *)object,
               MethodInfo__SessionLocatorPing____c___CloseApplication_b__12_0__,(MethodInfo *)0x0);
    TypeInfo__SessionLocatorPing____c->static_fields->__9__12_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__SessionLocatorPing____c->static_fields->__9__12_0 >> 0xc
                     );
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  pIVar5 = WaitForFrames::WaitForFrames_WithCallback(5,this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Coroutines);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = TypeInfo__Coroutines->static_fields->instance;
  if (obj == (Coroutines *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (pIVar5 == (IEnumerator *)0x0) {
    uVar7 = func_?(&TypeInfo__System__NullReferenceException);
    this_01 = (NullReferenceException *)func_?(uVar7);
    pSVar8 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_01,pSVar8,(MethodInfo *)0x0);
    uVar7 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar7);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar9 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)obj,(MethodInfo *)0x0);
  if (bVar9 == 0) {
    uVar7 = func_?(&TypeInfo__System__ArgumentException);
    this_02 = (InvalidEnumArgumentException *)func_?(uVar7);
    pSVar8 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_02,pSVar8,(MethodInfo *)0x0);
    uVar7 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_02,uVar7);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Coroutines *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pvVar10 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar10,pIVar5);
  return;
}


/* Void WWWCallBack(UnityWebRequest) */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing_WWWCallBack
               (SessionLocatorPing *this,UnityWebRequest *result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WaitForTicksLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (result == (UnityWebRequest *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
           UnityWebRequest_get_error(result,(MethodInfo *)0x0);
  if ((pSVar2 == (String *)0x0) || ((pSVar2->fields)._stringLength == 0)) {
    milliseconds = (this->fields).pingIntervalInMilliSeconds;
    this_00 = (WaitForTicksLocal *)FUN_?(TypeInfo__WaitForTicksLocal);
    WaitForTicksLocal::WaitForTicksLocal__ctor(this_00,milliseconds,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).waitForTicks = this_00;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    (this->fields).pingInFlight = 0;
    return;
  }
  if (cRam_? == '\0') {
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
    FUN_?(&StringLiteral_Response_headers);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0___1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ping_failed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ping_failed_url__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_8._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_8._version = 0;
  DStack_8._index = 0;
  DStack_8._current.key = (Object *)0x0;
  DStack_8._current.value = (Object *)0x0;
  DStack_8._getEnumeratorRetType = 0;
  DStack_8._36_4_ = 0;
  if (result != (UnityWebRequest *)0x0) {
    pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_GetUrl(result,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Ping_failed_url__,pSVar2,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Response_headers,(MethodInfo *)0x0);
    pDVar9 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_GetResponseHeaders(result,(MethodInfo *)0x0);
    if (pDVar9 != (Dictionary_2_System_String_System_String_ *)0x0) {
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&pDStack_10 >> 0xc);
        lVar11 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar5 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar3 = uVar7 == *puVar5;
          if (bVar3) {
            *puVar5 = uVar7 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      uStack_12 = (ulonglong)(uint)(pDVar9->fields)._version;
      uStack_13 = 2;
      uStack_14 = 0;
      uStack_15 = 0;
      DStack_8._version = (undefined4)uStack_12;
      DStack_8._index = uStack_12._4_4_;
      DStack_8._current.key = (Object *)0x0;
      DStack_8._current.value = (Object *)0x0;
      DStack_8._getEnumeratorRetType = 2;
      DStack_8._36_4_ = 0;
      pDStack_10 = pDVar9;
      DStack_8._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar9;
      while( true ) {
        bVar16 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                          );
        pOVar17 = DStack_8._current.value;
        pOVar18 = DStack_8._current.key;
        if (bVar16 == 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Ping_failed,(MethodInfo *)0x0);
          (this->fields).connectionLost = 1;
          return;
        }
        args = (Object__Array *)FUN_?(TypeInfo__System__Object,2);
        if (args == (Object__Array *)0x0) break;
        if ((pOVar18 != (Object *)0x0) &&
           (lVar11 = FUN_?(pOVar18,(args->klass->_0).element_class), lVar11 == 0)) {
          uVar19 = FUN_?();
          FUN_?(uVar19,0);
code_?:
          FUN_?();
code_?:
          uVar19 = FUN_?();
          FUN_?(uVar19,0);
code_?:
          FUN_?();
          break;
        }
        if ((int)args->max_length == 0) goto code_?;
        args->vector[0] = pOVar18;
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)args->vector >> 0xc);
          lVar11 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar11 + 0xADDR);
            puVar5 = (ulonglong *)(lVar11 + 0xADDR);
            LOCK();
            bVar3 = uVar7 == *puVar5;
            if (bVar3) {
              *puVar5 = uVar7 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        if ((pOVar17 != (Object *)0x0) &&
           (lVar11 = FUN_?(pOVar17,(args->klass->_0).element_class), lVar11 == 0))
        goto code_?;
        if ((uint)args->max_length < 2) goto code_?;
        args->vector[1] = pOVar17;
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)(args->vector + 1) >> 0xc);
          lVar11 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar11 + 0xADDR);
            puVar5 = (ulonglong *)(lVar11 + 0xADDR);
            LOCK();
            bVar3 = uVar7 == *puVar5;
            if (bVar3) {
              *puVar5 = uVar7 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
                  (StringLiteral__0___1_,args,(MethodInfo *)0x0);
      }
      FUN_?();
    }
    FUN_?();
    FUN_?();
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* SessionLocatorPing() */

void Assembly-CSharp.dll::SessionLocatorPing::SessionLocatorPing__ctor
               (SessionLocatorPing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WaitForTicksLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (WaitForTicksLocal *)FUN_?(TypeInfo__WaitForTicksLocal);
  WaitForTicksLocal::WaitForTicksLocal__ctor(this_00,0,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).waitForTicks = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
  (this->fields).pingIntervalInMilliSeconds = 60000;
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_
                  ,2,1,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&uStack_6 >> 0xc);
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
  uStack_7 = 2;
  uStack_8 = 1;
  uStack_6 = this;
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UpdateController);
  }
  pLVar9 = TypeInfo__UpdateController->static_fields->updateBuckets;
  if (pLVar9 != (List_1_PriorityDataUpdate___Array *)0x0) {
    if ((uint)pLVar9->max_length < 3) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (pLVar9->vector[2] != (List_1_PriorityDataUpdate_ *)0x0) {
      uStack_11 = (undefined4)uStack_6;
      uStack_12 = uStack_6._4_4_;
      uStack_13 = uStack_7;
      uStack_14 = uStack_8;
      FUN_?(pLVar9->vector[2],&uStack_11,
                    MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_
                   );
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

