
/* IEnumerator HandleReports() */

IEnumerator *
Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_HandleReports
          (HackingToolDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__HackingToolDetector___HandleReports_c__Iterator1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void Initialize(ApplicationDesc[]) */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_Initialize
               (ApplicationDesc__Array *banList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
    func_?(TypeInfo__HackingToolDetector);
  }
  pHVar1 = TypeInfo__HackingToolDetector->static_fields->instance;
  if (pHVar1 != (HackingToolDetector *)0x0) {
    (pHVar1->fields).banList = banList;
    this = (MethodInfo *)TypeInfo__HackingToolDetector->static_fields->instance;
    if (this != (MethodInfo *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__HackingToolDetector___Scan_Coroutine_c__Iterator0;
      pSVar2 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)method_00);
      if (pSVar2 != (ScaleAnimationBase *)0x0) {
        (pSVar2->fields).state = (int32_t)this;
        method_01 = this;
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,(IEnumerator *)pSVar2,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pSVar2 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,method_01);
        if (pSVar2 != (ScaleAnimationBase *)0x0) {
          (pSVar2->fields).state = (int32_t)this;
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                    ((MonoBehaviour *)this,(IEnumerator *)pSVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitiateDetection() */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_InitiateDetection
               (HackingToolDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__HackingToolDetector___Scan_Coroutine_c__Iterator0;
  pSVar1 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_00);
  if (pSVar1 != (ScaleAnimationBase *)0x0) {
    (pSVar1->fields).state = (int32_t)this;
    method_01 = (MethodInfo *)this;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)pSVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pSVar1 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,method_01);
    if (pSVar1 != (ScaleAnimationBase *)0x0) {
      (pSVar1->fields).state = (int32_t)this;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)pSVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InjectionDetectedCallback(String) */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_InjectionDetectedCallback
               (HackingToolDetector *this,String *msg,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Concat_2
                      (StringLiteral_Injection_detector__,msg,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  HackingToolDetector_set_QuitRequest(this,1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
    func_?();
  }
  TypeInfo__HackingToolDetector->static_fields->instance = (HackingToolDetector *)0x0;
  return;
}


/* Void Report(HackingToolDetector+HackingToolReport) */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_Report
               (HackingToolDetector_HackingToolReport *report,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
    func_?(TypeInfo__HackingToolDetector);
  }
  pHVar1 = TypeInfo__HackingToolDetector->static_fields->instance;
  if ((pHVar1 != (HackingToolDetector *)0x0) &&
     (this = (pHVar1->fields).detectedHackingTools,
     this != (ThreadSafeQueue_1_HackingToolDetector_HackingToolReport_ *)0x0)) {
    ThreadSafeQueue`1[HackingToolDetector+HackingToolReport]::
    ThreadSafeQueue_1_HackingToolDetector_HackingToolReport__Enqueue
              (this,report,
               MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__Enqueue_HackingToolDetector__HackingToolReport_
              );
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ScanForForbiddenProcesses() */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_ScanForForbiddenProcesses
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
    func_?(TypeInfo__HackingToolDetector);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
    func_?(TypeInfo__HackingToolDetector);
  }
  pHVar1 = TypeInfo__HackingToolDetector->static_fields->instance;
  if (pHVar1 != (HackingToolDetector *)0x0) {
    ProcessScanner::ProcessScanner_StartScan((pHVar1->fields).banList,(MethodInfo *)0x0);
    return;
  }
  func_?();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__HackingToolDetector___Scan_Coroutine_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void Start() */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_Start
               (HackingToolDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
    func_?(TypeInfo__HackingToolDetector);
  }
  x = TypeInfo__HackingToolDetector->static_fields->instance;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__HackingToolDetector->static_fields->instance = this;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<HackingToolDetector::HackingToolReport>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__HackingToolDetector__TemporaryReportHandler_HackingToolDetector__HackingToolReport_
               ,
               MethodInfo__System__Action<HackingToolDetector::HackingToolReport>__Action_System__Object__void__
              );
    (this->fields).onHackToolDetected = (Action_1_HackingToolDetector_HackingToolReport_ *)this_00;
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_There_s_already_a_HackingToolDet,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    pOStack2 = (Object_1__Class *)_UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    pOStack2 = TypeInfo__UnityEngine__Object;
    func_?();
  }
  pcVar3 = pcRam_?;
  if (pcRam_? == (code *)0x0) {
    pcVar3 = (code *)func_?();
    if (pcVar3 == (code *)0x0) {
      pOStack2 = (Object_1__Class *)0x0;
      func_?();
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcRam_? = pcVar3;
  pOStack2 = (Object_1__Class *)0x0;
  (*pcRam_?)();
  return;
}


/* Void TemporaryReportHandler(HackingToolDetector+HackingToolReport) */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_TemporaryReportHandler
               (HackingToolDetector *this,HackingToolDetector_HackingToolReport *a,
               MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pSVar3 = StringLiteral_Report_default_label_have_been_h;
  index = 2;
  a = a;
  if (a != (HackingToolDetector_HackingToolReport *)0x0) {
    switch((a->fields).kind) {
    case 0:
      unaff_ESI = (String__Array *)func_?();
      if (unaff_ESI == (String__Array *)0x0) break;
      func_?();
      if (unaff_ESI->max_length == 0) goto code_?;
      unaff_ESI->vector[0] = StringLiteral_Running_process__;
      pKVar4 = (KogamaSettingNumericBase_1_System_Single_ *)(a->fields).app;
      if (pKVar4 == (KogamaSettingNumericBase_1_System_Single_ *)0x0) break;
      pSVar3 = (String *)
               MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting(pKVar4,(MethodInfo *)0x0)
      ;
      func_?();
      if (unaff_ESI->max_length < 2) goto code_?;
      unaff_ESI->vector[1] = pSVar3;
      func_?();
      if (unaff_ESI->max_length < 3) goto code_?;
      unaff_ESI->vector[2] = StringLiteral___associated_with__;
      pAVar5 = (a->fields).app;
      if (pAVar5 == (ApplicationDesc *)0x0) break;
      a = (HackingToolDetector_HackingToolReport *)
          mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
          Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pAVar5,(MethodInfo *)0x0);
      func_?();
      if (unaff_ESI->max_length < 4) goto code_?;
      unaff_ESI->vector[3] = (String *)a;
      func_?();
      if (4 < unaff_ESI->max_length) {
        unaff_ESI->vector[4] = StringLiteral___detected_;
code_?:
        index = 0;
        if (((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) {
          uVar6 = (TypeInfo__System__String->_1).cctor_started;
code_?:
          if (uVar6 == 0) {
            func_?();
          }
        }
code_?:
        unaff_ESI = (String__Array *)
                    mscorlib.dll::System::String::String_Concat_6(unaff_ESI,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    case 1:
      unaff_ESI = (String__Array *)func_?();
      if (unaff_ESI == (String__Array *)0x0) break;
      func_?();
      if (unaff_ESI->max_length == 0) goto code_?;
      unaff_ESI->vector[0] = StringLiteral_Running_process__;
      pKVar4 = (KogamaSettingNumericBase_1_System_Single_ *)(a->fields).app;
      if (pKVar4 == (KogamaSettingNumericBase_1_System_Single_ *)0x0) break;
      pSVar3 = (String *)
               MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting(pKVar4,(MethodInfo *)0x0)
      ;
      func_?();
      if (unaff_ESI->max_length < 2) goto code_?;
      unaff_ESI->vector[1] = pSVar3;
      func_?();
      if (unaff_ESI->max_length < 3) goto code_?;
      unaff_ESI->vector[2] = StringLiteral___associated_with__;
      pAVar5 = (a->fields).app;
      if (pAVar5 == (ApplicationDesc *)0x0) break;
      pSVar3 = (String *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pAVar5,(MethodInfo *)0x0);
      func_?();
      if (unaff_ESI->max_length < 4) goto code_?;
      unaff_ESI->vector[3] = pSVar3;
      func_?();
      if (unaff_ESI->max_length < 5) goto code_?;
      unaff_ESI->vector[4] = StringLiteral___detected_as__;
      a = (HackingToolDetector_HackingToolReport *)(a->fields).exactFind;
      func_?();
      if (unaff_ESI->max_length < 6) goto code_?;
      unaff_ESI->vector[5] = (String *)a;
      func_?();
      if (6 < unaff_ESI->max_length) {
        unaff_ESI->vector[6] = ::StringLiteral__;
        goto code_?;
      }
      goto code_?;
    case 2:
      unaff_ESI = (String__Array *)func_?();
      if (unaff_ESI == (String__Array *)0x0) break;
      func_?();
      if (unaff_ESI->max_length == 0) goto code_?;
      unaff_ESI->vector[0] = StringLiteral_Registry_key__;
      pCVar7 = (Collection_1_VoxelHit_ *)(a->fields).foundKey;
      if (pCVar7 == (Collection_1_VoxelHit_ *)0x0) break;
      pSVar3 = (String *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(pCVar7,(MethodInfo *)0x0);
      func_?();
      if (unaff_ESI->max_length < 2) goto code_?;
      unaff_ESI->vector[1] = pSVar3;
      func_?();
      if (unaff_ESI->max_length < 3) goto code_?;
      unaff_ESI->vector[2] = StringLiteral___associated_with__;
      pAVar5 = (a->fields).app;
      if (pAVar5 == (ApplicationDesc *)0x0) break;
      a = (HackingToolDetector_HackingToolReport *)
          mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
          Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pAVar5,(MethodInfo *)0x0);
      func_?();
      if (unaff_ESI->max_length < 4) goto code_?;
      unaff_ESI->vector[3] = (String *)a;
      func_?();
      if (4 < unaff_ESI->max_length) {
        unaff_ESI->vector[4] = StringLiteral___detected_;
code_?:
        index = 1;
        if (((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) {
          uVar6 = (TypeInfo__System__String->_1).cctor_started;
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    case 3:
      goto code_?;
    case 4:
      goto code_?;
    default:
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar3,(MethodInfo *)0x0);
      unaff_ESI = (String__Array *)pSVar3;
code_?:
      if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
        func_?();
      }
      pBVar8 = (this->fields).alreadyReported;
      a = (HackingToolDetector_HackingToolReport *)this;
      if (pBVar8 != (BitArray *)0x0) {
        bVar9 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                          (pBVar8,index,(MethodInfo *)0x0);
        if (bVar9 != 0) {
code_?:
          return;
        }
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)unaff_ESI,(MethodInfo *)0x0);
        arg1 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        unaff_ESI = (String__Array *)
                    mscorlib.dll::System::String::String_Concat
                              ((Object *)StringLiteral_cheatDetected_ReportCategory_,arg1,
                               (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
          func_?();
        }
        uVar1 = 0x1030;
        StatHatWrapper::StatHatWrapper_Count((String *)unaff_ESI,1,(MethodInfo *)0x0);
        pBVar8 = (this->fields).alreadyReported;
        if (pBVar8 != (BitArray *)0x0) {
          mscorlib.dll::System::Collections::BitArray::BitArray_Set
                    (pBVar8,index,1,(MethodInfo *)0x0);
          if (index != 0) {
            return;
          }
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_Application_quit_,(MethodInfo *)0x0);
          CheatHandling::CheatHandling_CheatSoftwareRunningDetected((MethodInfo *)0x0);
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
code_?:
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
code_?:
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
code_?:
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
code_?:
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
  goto code_?;
code_?:
  unaff_ESI = (String__Array *)func_?();
  if (unaff_ESI == (String__Array *)0x0) goto code_?;
  func_?();
  if (unaff_ESI->max_length == 0) goto code_?;
  unaff_ESI->vector[0] = StringLiteral_Registry_key__;
  pCVar7 = (Collection_1_VoxelHit_ *)(a->fields).foundKey;
  if (pCVar7 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
  pSVar3 = (String *)
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items(pCVar7,(MethodInfo *)0x0);
  func_?();
  if (unaff_ESI->max_length < 2) goto code_?;
  unaff_ESI->vector[1] = pSVar3;
  func_?();
  if (unaff_ESI->max_length < 3) goto code_?;
  unaff_ESI->vector[2] = StringLiteral___associated_with__;
  pAVar5 = (a->fields).app;
  if (pAVar5 == (ApplicationDesc *)0x0) goto code_?;
  pSVar3 = (String *)
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pAVar5,(MethodInfo *)0x0);
  func_?();
  if (unaff_ESI->max_length < 4) goto code_?;
  unaff_ESI->vector[3] = pSVar3;
  func_?();
  if (unaff_ESI->max_length < 5) goto code_?;
  unaff_ESI->vector[4] = StringLiteral___detected_as__;
  a = (HackingToolDetector_HackingToolReport *)(a->fields).exactFind;
  func_?();
  if (5 < unaff_ESI->max_length) {
    unaff_ESI->vector[5] = (String *)a;
    func_?();
    if (unaff_ESI->max_length < 7) goto code_?;
    unaff_ESI->vector[6] = ::StringLiteral__;
    goto code_?;
  }
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  cVar10 = '\0';
  *(byte *)&((HackingToolDetector *)a)->klass =
       *(byte *)&((HackingToolDetector *)a)->klass ^ extraout_DL;
  uVar11 = CONCAT22(uVar1,in_CS);
  pbVar12 = (byte *)func_?(uVar11,&stack0xffffffdc);
  pcVar13 = (char *)((int)unaff_ESI[0x373939].vector + 0x37);
  *pcVar13 = *pcVar13 + extraout_CH + cVar10;
  *pbVar12 = *pbVar12 ^ (byte)uVar11;
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* HackingToolDetector() */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Cheating_Hacking_is_not_allowed_,(MethodInfo *)0x0);
  TypeInfo__HackingToolDetector->static_fields->CheatWarning = pSVar1;
  TypeInfo__HackingToolDetector->static_fields->instance = (HackingToolDetector *)0x0;
  return;
}


/* HackingToolDetector() */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector__ctor
               (HackingToolDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_2(this_00,3,(MethodInfo *)0x0);
  (this->fields).alreadyReported = this_00;
  method_00 = TypeInfo__System__Object;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  (this->fields)._quitLock = (Object *)this_01;
  this_02 = (ThreadSafeQueue_1_HackingToolDetector_HackingToolReport_ *)
            func_?(TypeInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>);
  ThreadSafeQueue`1[HackingToolDetector+HackingToolReport]::
  ThreadSafeQueue_1_HackingToolDetector_HackingToolReport___ctor
            (this_02,2,
             MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__ThreadSafeQueue_int_
            );
  (this->fields).detectedHackingTools = this_02;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_InstallTracesDetected() */

bool Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_get_InstallTracesDetected
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
    func_?(TypeInfo__HackingToolDetector);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
    func_?(TypeInfo__HackingToolDetector);
  }
  pHVar1 = TypeInfo__HackingToolDetector->static_fields->instance;
  if ((pHVar1 != (HackingToolDetector *)0x0) &&
     (this = (pHVar1->fields).alreadyReported, this != (BitArray *)0x0)) {
    bVar2 = mscorlib.dll::System::Collections::BitArray::BitArray_Get(this,1,(MethodInfo *)0x0);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* HackingToolDetector get_Instance() */

HackingToolDetector *
Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
    func_?(TypeInfo__HackingToolDetector);
  }
  return TypeInfo__HackingToolDetector->static_fields->instance;
}


/* Boolean get_ProcessDetected() */

bool Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_get_ProcessDetected
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
    func_?(TypeInfo__HackingToolDetector);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
    func_?(TypeInfo__HackingToolDetector);
  }
  pHVar1 = TypeInfo__HackingToolDetector->static_fields->instance;
  if ((pHVar1 != (HackingToolDetector *)0x0) &&
     (this = (pHVar1->fields).alreadyReported, this != (BitArray *)0x0)) {
    bVar2 = mscorlib.dll::System::Collections::BitArray::BitArray_Get(this,0,(MethodInfo *)0x0);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean get_QuitRequest() */

bool Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_get_QuitRequest
               (HackingToolDetector *this,MethodInfo *method)

{
  func_?();
  obj = (this->fields)._quitLock;
  mscorlib.dll::System::Threading::Monitor::Monitor_Enter(obj,(MethodInfo *)0x0);
  bVar1 = (this->fields)._quitRequest;
  mscorlib.dll::System::Threading::Monitor::Monitor_Exit(obj,(MethodInfo *)0x0);
  return bVar1;
}


/* Single get_WaitTime() */

float Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_get_WaitTime(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
    func_?(TypeInfo__HackingToolDetector);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
    func_?(TypeInfo__HackingToolDetector);
  }
  pHVar1 = TypeInfo__HackingToolDetector->static_fields->instance;
  if ((pHVar1 != (HackingToolDetector *)0x0) &&
     (pHVar2 = (pHVar1->fields).sharedProperties, pHVar2 != (HackingToolDetectorSO *)0x0)) {
    return 1.0 / (pHVar2->fields).scanFrequency;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Void set_QuitRequest(Boolean) */

void Assembly-CSharp.dll::HackingToolDetector::HackingToolDetector_set_QuitRequest
               (HackingToolDetector *this,bool value,MethodInfo *method)

{
  func_?();
  obj = (this->fields)._quitLock;
  mscorlib.dll::System::Threading::Monitor::Monitor_Enter(obj,(MethodInfo *)0x0);
  (this->fields)._quitRequest = value;
  mscorlib.dll::System::Threading::Monitor::Monitor_Exit(obj,(MethodInfo *)0x0);
  return;
}

