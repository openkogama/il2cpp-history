
/* IEnumerator HandleReports() */

IEnumerator *
Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_HandleReports
          (HackingToolDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HackingToolDetector___HandleReports_d__30);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__HackingToolDetector___HandleReports_d__30;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void Initialize(ApplicationDesc[]) */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_Initialize
               (ApplicationDesc__Array *banList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HackingToolDetector);
    func_?(&StringLiteral_Ban_list_received_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__HackingToolDetector);
  }
  pHVar1 = TypeInfo__HackingToolDetector->static_fields->instance;
  if (pHVar1 != (HackingToolDetector *)0x0) {
    (pHVar1->fields).banList = banList;
    func_?(&(pHVar1->fields).banList,banList);
    this = (Object__Class *)TypeInfo__HackingToolDetector->static_fields->instance;
    if (this != (Object__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__HackingToolDetector);
        func_?(&StringLiteral_Scan_thread_started_);
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__HackingToolDetector___Scan_Coroutine_d__28);
        cRam_? = '\x01';
      }
      method_01 = TypeInfo__HackingToolDetector___Scan_Coroutine_d__28;
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
      pOVar2[1].klass = (Object__Class *)0x0;
      pOVar2[2].klass = this;
      func_?(pOVar2 + 2,this);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)pOVar2,(MethodInfo *)0x0);
      if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__HackingToolDetector___HandleReports_d__30;
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      pOVar2[1].klass = (Object__Class *)0x0;
      pOVar2[2].klass = this;
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)pOVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitiateDetection() */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_InitiateDetection
               (HackingToolDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HackingToolDetector);
    func_?(&StringLiteral_Scan_thread_started_);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HackingToolDetector___Scan_Coroutine_d__28);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__HackingToolDetector___Scan_Coroutine_d__28;
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  pOVar1[1].klass = (Object__Class *)0x0;
  pOVar1[2].klass = (Object__Class *)this;
  func_?(pOVar1 + 2,this);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,(IEnumerator *)pOVar1,(MethodInfo *)0x0);
  if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__HackingToolDetector___HandleReports_d__30;
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pOVar1[1].klass = (Object__Class *)0x0;
  pOVar1[2].klass = (Object__Class *)this;
  func_?(pOVar1 + 2);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,(IEnumerator *)pOVar1,(MethodInfo *)0x0);
  return;
}


/* Void InjectionDetectedCallback(String) */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_InjectionDetectedCallback
               (HackingToolDetector *this,String *msg,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Injection_detector__);
    cRam_? = '\x01';
  }
  message = mscorlib.dll::System::String::String_Concat_3
                      (StringLiteral_Injection_detector__,msg,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)message,(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_OnDestroy
               (HackingToolDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HackingToolDetector);
    cRam_? = '\x01';
  }
  HackingToolDetector_set_QuitRequest(this,1,(MethodInfo *)0x0);
  if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__HackingToolDetector->static_fields->instance = (HackingToolDetector *)0x0;
  func_?();
  return;
}


/* Void Report(HackingToolDetector+HackingToolReport) */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_Report
               (HackingToolDetector_HackingToolReport *report,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pHVar1 = TypeInfo__HackingToolDetector->static_fields->instance;
  if ((pHVar1 != (HackingToolDetector *)0x0) &&
     (this = (pHVar1->fields).detectedHackingTools,
     this != (ThreadSafeQueue_1_HackingToolDetector_HackingToolReport_ *)0x0)) {
    ThreadSafeQueue`1[System::Object]::ThreadSafeQueue_1_System_Object__Enqueue
              ((ThreadSafeQueue_1_System_Object_ *)this,(Object *)report,
               MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__Enqueue_HackingToolDetector__HackingToolReport_
              );
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ScanForForbiddenProcesses() */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_ScanForForbiddenProcesses
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pHVar1 = TypeInfo__HackingToolDetector->static_fields->instance;
  if (pHVar1 != (HackingToolDetector *)0x0) {
    ProcessScanner::ProcessScanner_StartScan((pHVar1->fields).banList,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* IEnumerator Scan_Coroutine() */

IEnumerator *
Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_Scan_Coroutine
          (HackingToolDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HackingToolDetector___Scan_Coroutine_d__28);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__HackingToolDetector___Scan_Coroutine_d__28;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void Start() */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_Start
               (HackingToolDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<HackingToolDetector::HackingToolReport>);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__HackingToolDetector__TemporaryReportHandler_HackingToolDetector__HackingToolReport_
                   );
    func_?(&TypeInfo__HackingToolDetector);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_There_s_already_a_HackingToolDet);
    cRam_? = '\x01';
  }
  if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__HackingToolDetector);
  }
  x = TypeInfo__HackingToolDetector->static_fields->instance;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_There_s_already_a_HackingToolDet,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      ppOStack2 = &TypeInfo__UnityEngine__Object;
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      ppOStack2 = (Object_1__Class **)TypeInfo__UnityEngine__Object;
      func_?();
    }
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    ppOStack2 = (Object_1__Class **)0x0;
    (*pcRam_?)();
    return;
  }
  if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__HackingToolDetector->static_fields->instance = this;
  func_?(&TypeInfo__HackingToolDetector->static_fields->instance,this);
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<HackingToolDetector::HackingToolReport>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__HackingToolDetector__TemporaryReportHandler_HackingToolDetector__HackingToolReport_
             ,(MethodInfo *)0x0);
  (this->fields).onHackToolDetected = (Action_1_HackingToolDetector_HackingToolReport_ *)this_00;
  func_?(&(this->fields).onHackToolDetected,this_00);
  return;
}


/* Void TemporaryReportHandler(HackingToolDetector+HackingToolReport) */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_TemporaryReportHandler
               (HackingToolDetector *this,HackingToolDetector_HackingToolReport *a,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_Application_quit_);
    func_?(&StringLiteral_Running_process__);
    func_?(&StringLiteral___detected_);
    func_?(&StringLiteral_cheatDetected_ReportCategory_);
    func_?(&StringLiteral___detected_as__);
    func_?(&StringLiteral_Registry_key__);
    func_?(&StringLiteral_Report_default_label_have_been_h);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral___associated_with__);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Report_default_label_have_been_h;
  iVar2 = 2;
  if (a == (HackingToolDetector_HackingToolReport *)0x0) goto code_?;
  switch((a->fields).kind) {
  case 0:
    iVar2 = 0;
    unaff_EBX = (String__Array *)func_?(TypeInfo__System__String,5);
    if (unaff_EBX == (String__Array *)0x0) goto code_?;
    func_?(0,StringLiteral_Running_process__);
    pAVar3 = (a->fields).app;
    if (pAVar3 == (ApplicationDesc *)0x0) goto code_?;
    pSVar1 = (pAVar3->fields)._ExeCertSubjectName_k__BackingField;
    break;
  case 1:
    iVar2 = 0;
    unaff_EBX = (String__Array *)func_?(TypeInfo__System__String,7);
    if (unaff_EBX == (String__Array *)0x0) goto code_?;
    func_?(0,StringLiteral_Running_process__);
    pAVar3 = (a->fields).app;
    if (pAVar3 == (ApplicationDesc *)0x0) goto code_?;
    pSVar1 = (pAVar3->fields)._ExeCertSubjectName_k__BackingField;
    goto code_?;
  case 2:
    iVar2 = 1;
    unaff_EBX = (String__Array *)func_?(TypeInfo__System__String,5);
    if (unaff_EBX == (String__Array *)0x0) goto code_?;
    func_?(0,StringLiteral_Registry_key__);
    pAVar4 = (a->fields).foundKey;
    if (pAVar4 == (ApplicationDesc_RegistryKey *)0x0) goto code_?;
    pSVar1 = (pAVar4->fields).name;
    break;
  case 3:
    iVar2 = 1;
    unaff_EBX = (String__Array *)func_?(TypeInfo__System__String,7);
    if (unaff_EBX == (String__Array *)0x0) goto code_?;
    func_?(0,StringLiteral_Registry_key__);
    pAVar4 = (a->fields).foundKey;
    if (pAVar4 == (ApplicationDesc_RegistryKey *)0x0) goto code_?;
    pSVar1 = (pAVar4->fields).name;
code_?:
    func_?(1,pSVar1);
    func_?(2,StringLiteral___associated_with__);
    pAVar3 = (a->fields).app;
    if (pAVar3 == (ApplicationDesc *)0x0) goto code_?;
    func_?(3,(pAVar3->fields).programName);
    func_?(4,StringLiteral___detected_as__);
    func_?(5,(a->fields).exactFind);
    uVar5 = 6;
    pSVar1 = ::StringLiteral__;
    goto code_?;
  case 4:
    goto code_?;
  default:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar1,(MethodInfo *)0x0);
    goto code_?;
  }
  func_?(1,pSVar1);
  func_?(2,StringLiteral___associated_with__);
  pAVar3 = (a->fields).app;
  if (pAVar3 != (ApplicationDesc *)0x0) {
    func_?(3,(pAVar3->fields).programName);
    uVar5 = 4;
    pSVar1 = StringLiteral___detected_;
code_?:
    func_?(uVar5,pSVar1);
    pSVar1 = mscorlib.dll::System::String::String_Concat_6(unaff_EBX,(MethodInfo *)0x0);
code_?:
    if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__HackingToolDetector);
    }
    pBVar6 = (this->fields).alreadyReported;
    unaff_EBX = (String__Array *)this;
    if (pBVar6 != (BitArray *)0x0) {
      bVar7 = mscorlib.dll::System::Collections::BitArray::BitArray_get_Item
                        (pBVar6,iVar2,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar1,(MethodInfo *)0x0);
        EStack_8.klass = (Enum__Class *)TypeInfo__HackingToolDetector__ReportCategory;
        EStack_8.monitor = (MonitorData *)0xffffffff;
        iStack_9 = iVar2;
        pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_8,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_cheatDetected_ReportCategory_,pSVar1,(MethodInfo *)0x0);
        if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__StatHatWrapper);
        }
        StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
        pBVar6 = (this->fields).alreadyReported;
        if (pBVar6 == (BitArray *)0x0) goto code_?;
        mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
                  (pBVar6,iVar2,1,(MethodInfo *)0x0);
        if (iVar2 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Application_quit_,(MethodInfo *)0x0);
          this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Ban
                    (this_00,CheatType__Enum_CheatSoftwareRunning,(MethodInfo *)0x0);
          BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignout((MethodInfo *)0x0);
        }
      }
code_?:
      return;
    }
  }
code_?:
  func_?();
  uVar10 = (*extraout_ECX)();
  pbVar11 = (byte *)uVar10;
  iVar2 = (int)unaff_EBX->vector +
           CONCAT31((int3)((ulonglong)uVar10 >> 0x28),
                    (byte)((ulonglong)uVar10 >> 0x20) & *pbVar11 & *pbVar11) + -0x10;
  piVar12 = (int *)CONCAT31((int3)((uint)iVar2 >> 8),(byte)iVar2 & *pbVar11);
  bVar13 = (byte)extraout_ECX_00 & 0x1f;
  iVar2 = *piVar12;
  *piVar12 = *piVar12 << bVar13;
  *(char *)(extraout_ECX_00 + 0xcc1022d4) =
       *(char *)(extraout_ECX_00 + 0xcc1022d4) + (char)((uint)unaff_EBX >> 8) +
       ((extraout_ECX_00 & 0x1f) != 0) * (iVar2 << bVar13 - 1 < 0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* HackingToolDetector() */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HackingToolDetector);
    func_?(&StringLiteral_Cheating_Hacking_is_not_allowed_);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Cheating_Hacking_is_not_allowed_,(MethodInfo *)0x0);
  TypeInfo__HackingToolDetector->static_fields->CheatWarning = pSVar1;
  func_?(TypeInfo__HackingToolDetector->static_fields,pSVar1);
  TypeInfo__HackingToolDetector->static_fields->instance = (HackingToolDetector *)0x0;
  func_?(&TypeInfo__HackingToolDetector->static_fields->instance,0);
  return;
}


/* HackingToolDetector() */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector__ctor
               (HackingToolDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__BitArray);
    func_?(&TypeInfo__System__Object);
    func_?(&
                    MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__ThreadSafeQueue_int_
                   );
    func_?(&TypeInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>);
    cRam_? = '\x01';
  }
  this_00 = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor(this_00,3,(MethodInfo *)0x0);
  (this->fields).alreadyReported = this_00;
  func_?(&(this->fields).alreadyReported,this_00);
  method_00 = TypeInfo__System__Object;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._quitLock = value;
  func_?(&(this->fields)._quitLock,value);
  this_01 = (ThreadSafeQueue_1_HackingToolDetector_HackingToolReport_ *)
            func_?(TypeInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>);
  ThreadSafeQueue`1[System::Object]::ThreadSafeQueue_1_System_Object___ctor
            ((ThreadSafeQueue_1_System_Object_ *)this_01,2,
             MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__ThreadSafeQueue_int_
            );
  (this->fields).detectedHackingTools = this_01;
  func_?(&(this->fields).detectedHackingTools,this_01);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_InstallTracesDetected() */

bool Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_get_InstallTracesDetected
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pHVar1 = TypeInfo__HackingToolDetector->static_fields->instance;
  if ((pHVar1 != (HackingToolDetector *)0x0) &&
     (this = (pHVar1->fields).alreadyReported, this != (BitArray *)0x0)) {
    bVar2 = mscorlib.dll::System::Collections::BitArray::BitArray_get_Item(this,1,(MethodInfo *)0x0)
    ;
    return bVar2;
  }
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* HackingToolDetector get_Instance() */

HackingToolDetector *
Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HackingToolDetector);
    cRam_? = '\x01';
  }
  if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__HackingToolDetector);
  }
  return TypeInfo__HackingToolDetector->static_fields->instance;
}


/* Boolean get_ProcessDetected() */

bool Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_get_ProcessDetected
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pHVar1 = TypeInfo__HackingToolDetector->static_fields->instance;
  if ((pHVar1 != (HackingToolDetector *)0x0) &&
     (this = (pHVar1->fields).alreadyReported, this != (BitArray *)0x0)) {
    bVar2 = mscorlib.dll::System::Collections::BitArray::BitArray_get_Item(this,0,(MethodInfo *)0x0)
    ;
    return bVar2;
  }
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Boolean get_QuitRequest() */

bool Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_get_QuitRequest
               (HackingToolDetector *this,MethodInfo *method)

{
  pHVar1 = this;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  obj = (this->fields)._quitLock;
  this = (HackingToolDetector *)((uint)this & 0xffffff);
  uStack_4 = 1;
  mscorlib.dll::System::Threading::Monitor::Monitor_1_Enter_1
            (obj,(bool *)((int)&this + 3),(MethodInfo *)0x0);
  bVar5 = (pHVar1->fields)._quitRequest;
  uStack_4 = 0xffffffff;
  if (this._3_1_ != '\0') {
    mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(obj,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return bVar5;
  }
  *unaff_FS_OFFSET = uStack_3;
  return bVar5;
}


/* Single get_WaitTime() */

float Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_get_WaitTime(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pHVar1 = TypeInfo__HackingToolDetector->static_fields->instance;
  if ((pHVar1 != (HackingToolDetector *)0x0) &&
     (pHVar2 = (pHVar1->fields).sharedProperties, pHVar2 != (HackingToolDetectorSO *)0x0)) {
    return 1.0 / (pHVar2->fields).scanFrequency;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Void set_QuitRequest(Boolean) */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_set_QuitRequest
               (HackingToolDetector *this,bool value,MethodInfo *method)

{
  pHVar1 = this;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  this = (HackingToolDetector *)((uint)this & 0xffffff);
  obj = (pHVar1->fields)._quitLock;
  uStack_4 = 1;
  mscorlib.dll::System::Threading::Monitor::Monitor_1_Enter_1
            (obj,(bool *)((int)&this + 3),(MethodInfo *)0x0);
  (pHVar1->fields)._quitRequest = value;
  uStack_4 = 0xffffffff;
  if (this._3_1_ != '\0') {
    mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(obj,(MethodInfo *)0x0);
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}

