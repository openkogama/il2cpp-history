
/* IEnumerator HandleReports() */

IEnumerator *
Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_HandleReports
          (HackingToolDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HackingToolDetector___HandleReports_d__30);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__HackingToolDetector___HandleReports_d__30);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
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
      pOVar2 = (Object *)func_?(TypeInfo__HackingToolDetector___Scan_Coroutine_d__28);
      if (pOVar2 != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (pOVar2,ExceptionArgument__Enum_obj,unaff_EBP);
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
        pOVar2 = (Object *)func_?();
        if (pOVar2 != (Object *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (pOVar2,ExceptionArgument__Enum_obj,unaff_EBP);
          pOVar2[1].klass = (Object__Class *)0x0;
          pOVar2[2].klass = this;
          func_?(pOVar2 + 2,this);
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                    ((MonoBehaviour *)this,(IEnumerator *)pOVar2,(MethodInfo *)0x0);
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
  pOVar1 = (Object *)func_?(TypeInfo__HackingToolDetector___Scan_Coroutine_d__28);
  if (pOVar1 != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
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
    pOVar1 = (Object *)func_?();
    if (pOVar1 != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
      pOVar1[1].klass = (Object__Class *)0x0;
      pOVar1[2].klass = (Object__Class *)this;
      func_?(pOVar1 + 2,this);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)pOVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
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
  value = (Object *)func_?(TypeInfo__HackingToolDetector___Scan_Coroutine_d__28);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
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
  this_00 = (Action_1_Object_ *)
            func_?(TypeInfo__System__Action<HackingToolDetector::HackingToolReport>);
  if (this_00 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__HackingToolDetector__TemporaryReportHandler_HackingToolDetector__HackingToolReport_
               ,(MethodInfo *)0x0);
    (this->fields).onHackToolDetected = (Action_1_HackingToolDetector_HackingToolReport_ *)this_00;
    func_?(&(this->fields).onHackToolDetected,this_00);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void TemporaryReportHandler(HackingToolDetector+HackingToolReport) */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_TemporaryReportHandler
               (HackingToolDetector *this,HackingToolDetector_HackingToolReport *a,
               MethodInfo *method)

{
  pHVar1 = a;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
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
  pSVar2 = StringLiteral_Report_default_label_have_been_h;
  index = (HackingToolDetector_HackingToolReport *)0x2;
  if (a == (HackingToolDetector_HackingToolReport *)0x0) goto code_?;
  switch((a->fields).kind) {
  case 0:
    a = (HackingToolDetector_HackingToolReport *)0x0;
    pSVar3 = (String__Array *)func_?();
    if (pSVar3 == (String__Array *)0x0) break;
    if ((StringLiteral_Running_process__ != (String *)0x0) &&
       (iVar4 = func_?(), iVar4 == 0)) goto code_?;
    func_?();
    pAVar5 = (pHVar1->fields).app;
    index = (HackingToolDetector_HackingToolReport *)0x0;
    if (pAVar5 == (ApplicationDesc *)0x0) break;
    index = (HackingToolDetector_HackingToolReport *)
            (pAVar5->fields)._ExeCertSubjectName_k__BackingField;
code_?:
    if ((index != (HackingToolDetector_HackingToolReport *)0x0) &&
       (iVar4 = func_?(), iVar4 == 0)) goto code_?;
    func_?();
    if ((StringLiteral___associated_with__ != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral___associated_with__,
                                 (pSVar3->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    func_?(2,StringLiteral___associated_with__);
    pAVar5 = (pHVar1->fields).app;
    if (pAVar5 == (ApplicationDesc *)0x0) break;
    if (((pAVar5->fields).programName != (String *)0x0) && (iVar4 = func_?(), iVar4 == 0)
       ) goto code_?;
    func_?();
    if ((StringLiteral___detected_ == (String *)0x0) ||
       (iVar4 = func_?(StringLiteral___detected_,(pSVar3->klass->_0).element_class),
       iVar4 != 0)) {
      func_?(4,StringLiteral___detected_);
      pSVar2 = mscorlib.dll::System::String::String_Concat_6(pSVar3,(MethodInfo *)0x0);
      index = a;
      goto code_?;
    }
    goto code_?;
  case 1:
    a = (HackingToolDetector_HackingToolReport *)0x0;
    pSVar3 = (String__Array *)func_?();
    if (pSVar3 == (String__Array *)0x0) break;
    if ((StringLiteral_Running_process__ != (String *)0x0) &&
       (iVar4 = func_?(), iVar4 == 0)) goto code_?;
    func_?();
    pAVar5 = (pHVar1->fields).app;
    index = (HackingToolDetector_HackingToolReport *)0x0;
    if (pAVar5 == (ApplicationDesc *)0x0) break;
    index = (HackingToolDetector_HackingToolReport *)
            (pAVar5->fields)._ExeCertSubjectName_k__BackingField;
    if ((index != (HackingToolDetector_HackingToolReport *)0x0) &&
       (iVar4 = func_?(), iVar4 == 0)) goto code_?;
    func_?();
    if ((StringLiteral___associated_with__ != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral___associated_with__,
                                 (pSVar3->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    func_?(2,StringLiteral___associated_with__);
    pAVar5 = (pHVar1->fields).app;
    index = (HackingToolDetector_HackingToolReport *)0x0;
    if (pAVar5 == (ApplicationDesc *)0x0) break;
    index = (HackingToolDetector_HackingToolReport *)(pAVar5->fields).programName;
    if ((index == (HackingToolDetector_HackingToolReport *)0x0) ||
       (iVar4 = func_?(), iVar4 != 0)) goto code_?;
    goto code_?;
  case 2:
    a = (HackingToolDetector_HackingToolReport *)0x1;
    pSVar3 = (String__Array *)func_?();
    if (pSVar3 != (String__Array *)0x0) {
      if ((StringLiteral_Registry_key__ != (String *)0x0) &&
         (iVar4 = func_?(), iVar4 == 0)) goto code_?;
      func_?();
      pAVar6 = (pHVar1->fields).foundKey;
      index = (HackingToolDetector_HackingToolReport *)0x0;
      if (pAVar6 != (ApplicationDesc_RegistryKey *)0x0) {
        index = (HackingToolDetector_HackingToolReport *)(pAVar6->fields).name;
        goto code_?;
      }
    }
    break;
  case 3:
    a = (HackingToolDetector_HackingToolReport *)0x1;
    pSVar3 = (String__Array *)func_?();
    if (pSVar3 == (String__Array *)0x0) break;
    if ((StringLiteral_Registry_key__ != (String *)0x0) && (iVar4 = func_?(), iVar4 == 0)
       ) goto code_?;
    func_?();
    pAVar6 = (pHVar1->fields).foundKey;
    index = (HackingToolDetector_HackingToolReport *)0x0;
    if (pAVar6 == (ApplicationDesc_RegistryKey *)0x0) break;
    index = (HackingToolDetector_HackingToolReport *)(pAVar6->fields).name;
    if (((index != (HackingToolDetector_HackingToolReport *)0x0) &&
        (iVar4 = func_?(), iVar4 == 0)) ||
       ((func_?(), StringLiteral___associated_with__ != (String *)0x0 &&
        (iVar4 = func_?(), iVar4 == 0)))) goto code_?;
    func_?();
    pAVar5 = (pHVar1->fields).app;
    index = (HackingToolDetector_HackingToolReport *)0x0;
    if (pAVar5 == (ApplicationDesc *)0x0) break;
    index = (HackingToolDetector_HackingToolReport *)(pAVar5->fields).programName;
    if ((index != (HackingToolDetector_HackingToolReport *)0x0) &&
       (iVar4 = func_?(), iVar4 == 0)) goto code_?;
code_?:
    func_?();
    if ((StringLiteral___detected_as__ != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral___detected_as__,(pSVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    func_?(4,StringLiteral___detected_as__);
    pSVar2 = (pHVar1->fields).exactFind;
    if ((pSVar2 != (String *)0x0) &&
       (iVar4 = func_?(pSVar2,(pSVar3->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    func_?(5,pSVar2);
    if ((::StringLiteral__ == (String *)0x0) ||
       (iVar4 = func_?(::StringLiteral__,(pSVar3->klass->_0).element_class), iVar4 != 0)
       ) {
      func_?(6,::StringLiteral__);
      pSVar2 = mscorlib.dll::System::String::String_Concat_6(pSVar3,(MethodInfo *)0x0);
      index = a;
      goto code_?;
    }
    goto code_?;
  case 4:
    goto code_?;
  default:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar2,(MethodInfo *)0x0);
code_?:
    if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pBVar7 = (this->fields).alreadyReported;
    if (pBVar7 != (BitArray *)0x0) {
      bVar8 = mscorlib.dll::System::Collections::BitArray::BitArray_get_Item
                        (pBVar7,(int32_t)index,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        return;
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar2,(MethodInfo *)0x0);
      EStack_9.klass = (Enum__Class *)TypeInfo__HackingToolDetector__ReportCategory;
      EStack_9.monitor = (MonitorData *)0xffffffff;
      pHStack_10 = index;
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_9,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_cheatDetected_ReportCategory_,pSVar2,(MethodInfo *)0x0);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__StatHatWrapper);
      }
      StatHatWrapper::StatHatWrapper_Count(pSVar2,1,(MethodInfo *)0x0);
      pBVar7 = (this->fields).alreadyReported;
      if (pBVar7 != (BitArray *)0x0) {
        mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
                  (pBVar7,(int32_t)index,1,(MethodInfo *)0x0);
        if (index != (HackingToolDetector_HackingToolReport *)0x0) {
code_?:
          return;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Application_quit_,(MethodInfo *)0x0);
        this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Ban
                    (this_00,CheatType__Enum_CheatSoftwareRunning,(MethodInfo *)0x0);
          BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignout((MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  uVar11 = func_?(0);
  func_?(uVar11);
code_?:
  func_?();
  func_?();
code_?:
  uVar11 = func_?(0);
  func_?(uVar11);
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  uVar11 = func_?(0);
  func_?(uVar11);
code_?:
  func_?();
  func_?();
code_?:
  uVar11 = func_?(0);
  func_?(uVar11);
code_?:
  uVar11 = func_?(0);
  func_?(uVar11);
code_?:
  uVar11 = func_?(0);
  func_?(uVar11);
code_?:
  func_?();
  uVar12 = func_?();
  puVar13 = (uint *)((ulonglong)uVar12 >> 0x20);
  puVar14 = puVar13 + 1;
  uVar15 = *puVar14;
  bVar16 = (byte)((ulonglong)uVar12 >> 0x28);
  bVar17 = (byte)*puVar14 + bVar16;
  *(byte *)puVar14 = bVar17 + CARRY4((uint)index,*puVar13);
  uVar18 = (undefined3)((ulonglong)uVar12 >> 0x28);
  cVar19 = ((char)((ulonglong)uVar12 >> 0x20) - *(char *)uVar12) -
           (CARRY1((byte)uVar15,bVar16) || CARRY1(bVar17,CARRY4((uint)index,*puVar13)));
  uVar20 = in((short)CONCAT31(uVar18,cVar19));
  uVar15 = CONCAT31((int3)((ulonglong)uVar12 >> 8),uVar20);
  pcVar21 = (char *)(uVar15 + 0x64e101a);
  pbVar22 = (byte *)CONCAT31(uVar18,(cVar19 - *pcVar21) - (0xf9b1efe5 < uVar15));
  *pbVar22 = *pbVar22 | (char)index + (char)*puVar13;
  pbVar22 = (byte *)(uVar15 + 0xf9b42557);
  bVar17 = *pbVar22;
  bVar16 = (byte)pcVar21;
  *pbVar22 = *pbVar22 + bVar16;
  *pcVar21 = *pcVar21 + bVar16 + CARRY1(bVar17,bVar16);
  if (*pcVar21 == '\0') {
    func_?(&TypeInfo__HackingToolDetector,&stack0xffffffdc);
    func_?(&StringLiteral_Cheating_Hacking_is_not_allowed_);
    uRam_? = 1;
  }
  pSVar2 = TM::TM__(StringLiteral_Cheating_Hacking_is_not_allowed_,(MethodInfo *)0x0);
  TypeInfo__HackingToolDetector->static_fields->CheatWarning = pSVar2;
  func_?(TypeInfo__HackingToolDetector->static_fields,pSVar2);
  TypeInfo__HackingToolDetector->static_fields->instance = (HackingToolDetector *)0x0;
  func_?(&TypeInfo__HackingToolDetector->static_fields->instance,0);
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
  if (this_00 != (BitArray *)0x0) {
    mscorlib.dll::System::Collections::BitArray::BitArray__ctor(this_00,3,(MethodInfo *)0x0);
    (this->fields).alreadyReported = this_00;
    func_?(&(this->fields).alreadyReported,this_00);
    value = (Object *)func_?(TypeInfo__System__Object);
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,unaff_EDI);
      (this->fields)._quitLock = value;
      func_?(&(this->fields)._quitLock,value);
      this_01 = (ThreadSafeQueue_1_HackingToolDetector_HackingToolReport_ *)
                func_?(TypeInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>);
      if (this_01 != (ThreadSafeQueue_1_HackingToolDetector_HackingToolReport_ *)0x0) {
        ThreadSafeQueue`1[System::Object]::ThreadSafeQueue_1_System_Object___ctor
                  ((ThreadSafeQueue_1_System_Object_ *)this_01,2,
                   MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__ThreadSafeQueue_int_
                  );
        (this->fields).detectedHackingTools = this_01;
        func_?(&(this->fields).detectedHackingTools,this_01);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                  ((Transform *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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

