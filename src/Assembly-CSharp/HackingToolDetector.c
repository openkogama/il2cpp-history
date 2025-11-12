
/* IEnumerator HandleReports() */

IEnumerator *
Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_HandleReports
          (HackingToolDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector___HandleReports_d__30);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__HackingToolDetector___HandleReports_d__30);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* Void Initialize(ApplicationDesc[]) */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_Initialize
               (ApplicationDesc__Array *banList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ban_list_received_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__HackingToolDetector);
  }
  pHVar1 = TypeInfo__HackingToolDetector->static_fields->instance;
  if (pHVar1 != (HackingToolDetector *)0x0) {
    bVar2 = iRam_? != 0;
    (pHVar1->fields).banList = banList;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(pHVar1->fields).banList >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    this = (IEnumerator__Class *)TypeInfo__HackingToolDetector->static_fields->instance;
    if (this != (IEnumerator__Class *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__HackingToolDetector);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Scan_thread_started_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__HackingToolDetector___Scan_Coroutine_d__28);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      routine = (IEnumerator *)FUN_?(TypeInfo__HackingToolDetector___Scan_Coroutine_d__28);
      bVar2 = iRam_? != 0;
      *(undefined4 *)&routine[1].klass = 0;
      routine[2].klass = this;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)(routine + 2) >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__HackingToolDetector___HandleReports_d__30);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      lVar4 = FUN_?(TypeInfo__HackingToolDetector___HandleReports_d__30);
      bVar2 = iRam_? != 0;
      *(undefined4 *)(lVar4 + 0x10) = 0;
      *(IEnumerator__Class **)(lVar4 + 0x20) = this;
      if (bVar2) {
        uVar3 = (uint)(lVar4 + 0x20U >> 0xc);
        lVar7 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar6 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      if (lVar4 == 0) {
        uVar8 = func_?(&TypeInfo__System__NullReferenceException);
        this_00 = (NullReferenceException *)func_?(uVar8);
        pSVar9 = (String *)func_?(&StringLiteral_routine_is_null);
        mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                  (this_00,pSVar9,(MethodInfo *)0x0);
        uVar8 = func_?(&
                                    MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                   );
        FUN_?(this_00,uVar8);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
      if (bVar11 == 0) {
        uVar8 = func_?(&TypeInfo__System__ArgumentException);
        this_01 = (InvalidEnumArgumentException *)func_?(uVar8);
        pSVar9 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(this_01,pSVar9,(MethodInfo *)0x0);
        uVar8 = func_?(&
                                    MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                   );
        FUN_?(this_01,uVar8);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
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
      if (this == (IEnumerator__Class *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pvVar12 = (((HackingToolDetector__Fields *)&(this->_0).name)->_)._._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar12,lVar4);
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void InitiateDetection() */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_InitiateDetection
               (HackingToolDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Scan_thread_started_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector___Scan_Coroutine_d__28);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  routine = (IEnumerator *)FUN_?(TypeInfo__HackingToolDetector___Scan_Coroutine_d__28);
  bVar1 = iRam_? != 0;
  *(undefined4 *)&routine[1].klass = 0;
  routine[2].klass = (IEnumerator__Class *)this;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)(routine + 2) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
            ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector___HandleReports_d__30);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar3 = FUN_?(TypeInfo__HackingToolDetector___HandleReports_d__30);
  bVar1 = iRam_? != 0;
  *(undefined4 *)(lVar3 + 0x10) = 0;
  *(HackingToolDetector **)(lVar3 + 0x20) = this;
  if (bVar1) {
    uVar2 = (uint)(lVar3 + 0x20U >> 0xc);
    lVar6 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar5 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (lVar3 == 0) {
    uVar7 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar7);
    pSVar8 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar8,(MethodInfo *)0x0);
    uVar7 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar7);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar10 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar10 == 0) {
    uVar7 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar7);
    pSVar8 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar8,(MethodInfo *)0x0);
    uVar7 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar7);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
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
  if (this == (HackingToolDetector *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pvVar11 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar11 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar11,lVar3);
  return;
}


/* Void InjectionDetectedCallback(String) */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_InjectionDetectedCallback
               (HackingToolDetector *this,String *msg,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Injection_detector__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Injection_detector__,msg,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,2,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_OnDestroy
               (HackingToolDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  HackingToolDetector_set_QuitRequest(this,1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__HackingToolDetector);
  }
  TypeInfo__HackingToolDetector->static_fields->instance = (HackingToolDetector *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__HackingToolDetector->static_fields->instance >> 0xc);
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
  return;
}


/* Void Report(HackingToolDetector+HackingToolReport) */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_Report
               (HackingToolDetector_HackingToolReport *report,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__Enqueue_HackingToolDetector__HackingToolReport_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__HackingToolDetector);
  }
  pMVar1 = 
  MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__Enqueue_HackingToolDetector__HackingToolReport_
  ;
  pHVar2 = TypeInfo__HackingToolDetector->static_fields->instance;
  if ((pHVar2 == (HackingToolDetector *)0x0) ||
     (pTVar3 = (pHVar2->fields).detectedHackingTools,
     pTVar3 == (ThreadSafeQueue_1_HackingToolDetector_HackingToolReport_ *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pOVar5 = (pTVar3->fields)._lock;
  if (pOVar5 != (Object *)0x0) {
    cVar6 = FUN_?(pOVar5,0xffffffff);
    this = (pTVar3->fields)._queue;
    if (this != (Queue_1_HackingToolDetector_HackingToolReport_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
      Queue_1_System_Object__Enqueue
                ((Queue_1_System_Object_ *)this,(Object *)report,pMVar1->klass->rgctx_data[7].method
                );
      if (cVar6 == '\0') {
        return;
      }
      if (pOVar5 != (Object *)0x0) {
        FUN_?();
        return;
      }
      uVar7 = FUN_?(&UNK_?);
      FUN_?(uVar7,0);
    }
    FUN_?();
  }
  uVar7 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar7);
  paramName = (String *)func_?(&StringLiteral_obj);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,(MethodInfo *)0x0);
  uVar7 = func_?(&
                              MethodInfo__System__Threading__Monitor__ReliableEnterTimeout_System__Object__int__System__Boolean__
                             );
  FUN_?(this_00,uVar7);
  mscorlib.dll::System::Threading::Monitor::Monitor_ThrowLockTakenException((MethodInfo *)0x0);
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ScanForForbiddenProcesses() */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_ScanForForbiddenProcesses
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
    FUN_?();
  }
  pHVar1 = TypeInfo__HackingToolDetector->static_fields->instance;
  if (pHVar1 == (HackingToolDetector *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar3 = (pHVar1->fields).banList;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HackingToolDetector__HackingToolReport);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_NativeFunc_error__eError_Process);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_NativeFunc_error_code__UNKNOWN);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_NativeFunc_error__eError_CreateT);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = (String *)0x0;
  if (pcRam_? == (code *)0x0) {
    puStack_5 = (undefined *)0xb;
    uStack_6 = 0x19;
    uStack_7 = 0;
    uStack_8 = 2;
    uStack_9 = 0;
    pcRam_? = (code *)FUN_?(&puStack_10);
  }
  uVar11 = (*pcRam_?)();
  if ((int)uVar11 < 0) {
    if (uVar11 == 0xfffffffd) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_NativeFunc_error__eError_Process,(MethodInfo *)0x0);
      return;
    }
    if (uVar11 != 0xfffffffe) {
      if (uVar11 == 0xffffffff) {
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_NativeFunc_error_code__UNKNOWN,(MethodInfo *)0x0);
      return;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_NativeFunc_error__eError_CreateT,(MethodInfo *)0x0);
    return;
  }
  if (pAVar3 == (ApplicationDesc__Array *)0x0) goto code_?;
  if (uVar11 < (uint)pAVar3->max_length) {
    pAVar12 = pAVar3->vector[(int)uVar11];
    if (pAVar12 != (ApplicationDesc *)0x0) {
      uVar13 = (uint)pAVar3->max_length;
      if ((pAVar12->fields).strictComparison == 0) {
        if (uVar11 < uVar13) {
          if (pcRam_? == (code *)0x0) {
            puStack_5 = (undefined *)0xb;
            uStack_6 = 0x10;
            uStack_7 = 0;
            uStack_8 = 1;
            uStack_9 = 0;
            pcRam_? = (code *)FUN_?(&puStack_10);
          }
          lVar14 = (*pcRam_?)();
          if (lVar14 != 0) {
            lVar15 = -1;
            do {
              lVar15 = lVar15 + 1;
            } while (*(char *)(lVar14 + lVar15) != '\0');
            pSVar4 = (String *)FUN_?(lVar14);
            CoTaskMemFree(lVar14);
          }
          pHVar16 = (HackingToolDetector_HackingToolReport *)
                    FUN_?(TypeInfo__HackingToolDetector__HackingToolReport);
          (pHVar16->fields).kind = 1;
          (pHVar16->fields).app = pAVar12;
          if (iRam_? != 0) {
            uVar11 = (uint)((ulonglong)&(pHVar16->fields).app >> 0xc);
            lVar14 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
            do {
              uVar17 = *(ulonglong *)(lVar14 + 0xADDR);
              puVar18 = (ulonglong *)(lVar14 + 0xADDR);
              LOCK();
              bVar19 = uVar17 == *puVar18;
              if (bVar19) {
                *puVar18 = uVar17 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar19);
          }
          iVar20 = iRam_?;
          (pHVar16->fields).exactFind = pSVar4;
          if (iVar20 != 0) {
            uVar11 = (uint)((ulonglong)&(pHVar16->fields).exactFind >> 0xc);
            lVar14 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
            do {
              uVar17 = *(ulonglong *)(lVar14 + 0xADDR);
              puVar18 = (ulonglong *)(lVar14 + 0xADDR);
              LOCK();
              bVar19 = uVar17 == *puVar18;
              if (bVar19) {
                *puVar18 = uVar17 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar19);
          }
          if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
            FUN_?();
          }
          HackingToolDetector_Report(pHVar16,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      if (uVar11 < uVar13) {
        pHVar16 = (HackingToolDetector_HackingToolReport *)
                  FUN_?(TypeInfo__HackingToolDetector__HackingToolReport);
        (pHVar16->fields).kind = 0;
        (pHVar16->fields).app = pAVar12;
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)&(pHVar16->fields).app >> 0xc);
          lVar14 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
          do {
            uVar17 = *(ulonglong *)(lVar14 + 0xADDR);
            puVar18 = (ulonglong *)(lVar14 + 0xADDR);
            LOCK();
            bVar19 = uVar17 == *puVar18;
            if (bVar19) {
              *puVar18 = uVar17 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar19);
        }
        if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
          FUN_?();
        }
        HackingToolDetector_Report(pHVar16,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  else {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  FUN_?();
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* IEnumerator Scan_Coroutine() */

IEnumerator *
Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_Scan_Coroutine
          (HackingToolDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector___Scan_Coroutine_d__28);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__HackingToolDetector___Scan_Coroutine_d__28);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* Void Start() */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_Start
               (HackingToolDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<HackingToolDetector::HackingToolReport>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__HackingToolDetector__TemporaryReportHandler_HackingToolDetector__HackingToolReport_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_There_s_already_a_HackingToolDet);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
    FUN_?();
  }
  pHVar1 = TypeInfo__HackingToolDetector->static_fields->instance;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pHVar1 != (HackingToolDetector *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pHVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_There_s_already_a_HackingToolDet,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                      ,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pvVar2 = (void *)0x0;
      if (this != (HackingToolDetector *)0x0) {
        pvVar2 = (this->fields)._._._._.m_CachedPtr;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar2,0);
      return;
    }
  }
  if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__HackingToolDetector->static_fields->instance = this;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&TypeInfo__HackingToolDetector->static_fields->instance >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<HackingToolDetector::HackingToolReport>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__HackingToolDetector__TemporaryReportHandler_HackingToolDetector__HackingToolReport_
             ,(MethodInfo *)0x0);
  bVar9 = iRam_? != 0;
  (this->fields).onHackToolDetected = (Action_1_HackingToolDetector_HackingToolReport_ *)this_00;
  if (bVar9) {
    uVar5 = (uint)((ulonglong)&(this->fields).onHackToolDetected >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  return;
}


/* Void TemporaryReportHandler(HackingToolDetector+HackingToolReport) */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_TemporaryReportHandler
               (HackingToolDetector *this,HackingToolDetector_HackingToolReport *a,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HackingToolDetector__ReportCategory);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Application_quit_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Running_process__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___detected_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_cheatDetected_ReportCategory_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___detected_as__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Registry_key__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Report_default_label_have_been_h);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___associated_with__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Report_default_label_have_been_h;
  index = 2;
  if (a == (HackingToolDetector_HackingToolReport *)0x0) goto code_?;
  iVar2 = (a->fields).kind;
  if (iVar2 == 0) {
    index = 0;
    values = (String__Array *)FUN_?(TypeInfo__System__String,5);
    if (values == (String__Array *)0x0) goto code_?;
    FUN_?(values,0,StringLiteral_Running_process__);
    pAVar3 = (a->fields).app;
    if (pAVar3 == (ApplicationDesc *)0x0) goto code_?;
    pSVar1 = (pAVar3->fields)._ExeCertSubjectName_k__BackingField;
code_?:
    FUN_?(values,1,pSVar1);
    FUN_?(values,2,StringLiteral___associated_with__);
    pAVar3 = (a->fields).app;
    if (pAVar3 == (ApplicationDesc *)0x0) goto code_?;
    FUN_?(values,3,(pAVar3->fields).programName);
code_?:
    FUN_?(values);
    pSVar1 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
  }
  else {
    if (iVar2 == 1) {
      index = 0;
      values = (String__Array *)FUN_?(TypeInfo__System__String,7);
      if (values == (String__Array *)0x0) goto code_?;
      FUN_?(values,0,StringLiteral_Running_process__);
      pAVar3 = (a->fields).app;
      if (pAVar3 == (ApplicationDesc *)0x0) goto code_?;
      pSVar1 = (pAVar3->fields)._ExeCertSubjectName_k__BackingField;
code_?:
      FUN_?(values,1,pSVar1);
      FUN_?(values,2,StringLiteral___associated_with__);
      pAVar3 = (a->fields).app;
      if (pAVar3 == (ApplicationDesc *)0x0) goto code_?;
      FUN_?(values,3,(pAVar3->fields).programName);
      FUN_?(values,4,StringLiteral___detected_as__);
      FUN_?(values,5,(a->fields).exactFind);
      goto code_?;
    }
    if (iVar2 == 2) {
      index = 1;
      values = (String__Array *)FUN_?(TypeInfo__System__String,5);
      if (values == (String__Array *)0x0) goto code_?;
      FUN_?(values,0,StringLiteral_Registry_key__);
      pAVar4 = (a->fields).foundKey;
      if (pAVar4 == (ApplicationDesc_RegistryKey *)0x0) goto code_?;
      pSVar1 = (pAVar4->fields).name;
      goto code_?;
    }
    if (iVar2 == 3) {
      index = 1;
      values = (String__Array *)FUN_?(TypeInfo__System__String,7);
      if (values == (String__Array *)0x0) goto code_?;
      FUN_?(values,0,StringLiteral_Registry_key__);
      pAVar4 = (a->fields).foundKey;
      if (pAVar4 == (ApplicationDesc_RegistryKey *)0x0) goto code_?;
      pSVar1 = (pAVar4->fields).name;
      goto code_?;
    }
    if (iVar2 == 4) {
      return;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar1,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
    FUN_?();
  }
  pBVar5 = (this->fields).alreadyReported;
  if (pBVar5 == (BitArray *)0x0) {
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar7 = mscorlib.dll::System::Collections::BitArray::BitArray_Get(pBVar5,index,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
    EStack_8.klass = (Enum__Class *)TypeInfo__HackingToolDetector__ReportCategory;
    EStack_8.monitor = (MonitorData *)0xffffffffffffffff;
    iStack_9 = index;
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_8,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_cheatDetected_ReportCategory_,pSVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
    pBVar5 = (this->fields).alreadyReported;
    if (pBVar5 == (BitArray *)0x0) goto code_?;
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar5,index,1,(MethodInfo *)0x0);
    if (index == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar1 = StringLiteral_Application_quit_;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Application_quit_,(MethodInfo *)0x0);
      CheatHandling::CheatHandling_ExecuteBan
                ((CheatType__Enum)CONCAT71((int7)((ulonglong)pSVar1 >> 8),3),(MethodInfo *)0x0);
    }
  }
  return;
}


/* HackingToolDetector() */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Cheating_Hacking_is_not_allowed_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Cheating_Hacking_is_not_allowed_,(MethodInfo *)0x0);
  TypeInfo__HackingToolDetector->static_fields->CheatWarning = pSVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__HackingToolDetector->static_fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  TypeInfo__HackingToolDetector->static_fields->instance = (HackingToolDetector *)0x0;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__HackingToolDetector->static_fields->instance >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* HackingToolDetector() */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector__ctor
               (HackingToolDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Collections__BitArray);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__ThreadSafeQueue_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (BitArray *)FUN_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_1(this_00,3,0,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).alreadyReported = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).alreadyReported >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pOVar6 = (Object *)FUN_?(TypeInfo__System__Object);
  bVar1 = iRam_? != 0;
  (this->fields)._quitLock = pOVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._quitLock >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pTVar7 = (ThreadSafeQueue_1_HackingToolDetector_HackingToolReport_ *)
           FUN_?(TypeInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>);
  pMVar8 = MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__ThreadSafeQueue_int_
  ;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar6 = (Object *)FUN_?(TypeInfo__System__Object);
  bVar1 = iRam_? != 0;
  (pTVar7->fields)._lock = pOVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(pTVar7->fields)._lock >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pvVar9 = pMVar8->klass->rgctx_data[1].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
    pvVar9 = (void *)FUN_?(pvVar9);
  }
  this_01 = (Queue_1_HackingToolDetector_HackingToolReport_ *)FUN_?(pvVar9);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Dynamic::
  BindingRestrictions+TestBuilder+AndNode]::
  Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode___ctor_1
            ((Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ *)this_01,2,
             pMVar8->klass->rgctx_data[2].method);
  iVar10 = iRam_?;
  (pTVar7->fields)._queue = this_01;
  if (iVar10 != 0) {
    uVar2 = (uint)((ulonglong)&pTVar7->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar10 = iRam_?;
    } while (!bVar1);
  }
  (this->fields).detectedHackingTools = pTVar7;
  if (iVar10 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).detectedHackingTools >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


/* Boolean get_InstallTracesDetected() */

bool Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_get_InstallTracesDetected
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
    FUN_?();
  }
  pHVar1 = TypeInfo__HackingToolDetector->static_fields->instance;
  if ((pHVar1 == (HackingToolDetector *)0x0) ||
     (pBVar2 = (pHVar1->fields).alreadyReported, pBVar2 == (BitArray *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  if ((pBVar2->fields).m_length < 2) {
    auStackX_10[0] = 1;
    actualValue = (Object *)func_?(uRam_?,auStackX_10,0);
    uVar5 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this = (ArgumentOutOfRangeException *)func_?(uVar5);
    message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
    paramName = (String *)func_?(&StringLiteral_index);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
              (this,paramName,actualValue,message,(MethodInfo *)0x0);
    uVar5 = func_?(&MethodInfo__System__Collections__BitArray__Get_int_);
    FUN_?(this,uVar5);
  }
  else {
    pIVar6 = (pBVar2->fields).m_array;
    if (pIVar6 == (Int32__Array *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    if ((int)pIVar6->max_length != 0) {
      return (pIVar6->vector[0] & 2U) != 0;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* HackingToolDetector get_Instance() */

HackingToolDetector *
Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__HackingToolDetector);
  }
  return TypeInfo__HackingToolDetector->static_fields->instance;
}


/* Boolean get_ProcessDetected() */

bool Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_get_ProcessDetected
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
    FUN_?();
  }
  pHVar1 = TypeInfo__HackingToolDetector->static_fields->instance;
  if ((pHVar1 == (HackingToolDetector *)0x0) ||
     (pBVar2 = (pHVar1->fields).alreadyReported, pBVar2 == (BitArray *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  if ((pBVar2->fields).m_length < 1) {
    auStackX_10[0] = 0;
    actualValue = (Object *)func_?(uRam_?,auStackX_10,0);
    uVar5 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this = (ArgumentOutOfRangeException *)func_?(uVar5);
    message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
    paramName = (String *)func_?(&StringLiteral_index);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
              (this,paramName,actualValue,message,(MethodInfo *)0x0);
    uVar5 = func_?(&MethodInfo__System__Collections__BitArray__Get_int_);
    FUN_?(this,uVar5);
  }
  else {
    pIVar6 = (pBVar2->fields).m_array;
    if (pIVar6 == (Int32__Array *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    if ((int)pIVar6->max_length != 0) {
      return (pIVar6->vector[0] & 1U) != 0;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean get_QuitRequest() */

bool Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_get_QuitRequest
               (HackingToolDetector *this,MethodInfo *method)

{
  pOVar1 = (this->fields)._quitLock;
  if (pOVar1 == (Object *)0x0) {
code_?:
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar2);
    paramName = (String *)func_?(&StringLiteral_obj);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,paramName,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__System__Threading__Monitor__ReliableEnterTimeout_System__Object__int__System__Boolean__
                               );
    FUN_?(this_00,uVar2);
    mscorlib.dll::System::Threading::Monitor::Monitor_ThrowLockTakenException((MethodInfo *)0x0);
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  cVar5 = FUN_?(pOVar1,0xffffffff);
  bVar4 = (this->fields)._quitRequest;
  if (cVar5 != '\0') {
    if (pOVar1 == (Object *)0x0) {
      uVar2 = FUN_?(&UNK_?);
      FUN_?(uVar2,0);
      goto code_?;
    }
    FUN_?();
  }
  return bVar4;
}


/* Single get_WaitTime() */

float Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_get_WaitTime(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
    FUN_?();
  }
  pHVar1 = TypeInfo__HackingToolDetector->static_fields->instance;
  if ((pHVar1 != (HackingToolDetector *)0x0) &&
     (pHVar2 = (pHVar1->fields).sharedProperties, pHVar2 != (HackingToolDetectorSO *)0x0)) {
    return _UNK_? / (pHVar2->fields).scanFrequency;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float)(*pcVar3)();
  return fVar4;
}


/* Void set_QuitRequest(Boolean) */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_set_QuitRequest
               (HackingToolDetector *this,bool value,MethodInfo *method)

{
  pOVar1 = (this->fields)._quitLock;
  if (pOVar1 == (Object *)0x0) {
code_?:
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar2);
    paramName = (String *)func_?(&StringLiteral_obj);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,paramName,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__System__Threading__Monitor__ReliableEnterTimeout_System__Object__int__System__Boolean__
                               );
    FUN_?(this_00,uVar2);
    mscorlib.dll::System::Threading::Monitor::Monitor_ThrowLockTakenException((MethodInfo *)0x0);
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  cVar4 = FUN_?(pOVar1,0xffffffff);
  (this->fields)._quitRequest = value;
  if (cVar4 != '\0') {
    if (pOVar1 == (Object *)0x0) {
      uVar2 = FUN_?(&UNK_?);
      FUN_?(uVar2,0);
      goto code_?;
    }
    FUN_?();
  }
  return;
}

