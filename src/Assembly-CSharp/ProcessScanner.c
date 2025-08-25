
/* Void AddToBanList(String, Boolean) */

void Assembly-CSharp.dll::ProcessScanner::ProcessScanner_AddToBanList
               (String *certificateSerialNumber,bool strictComparison,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    uStack_1 = 0xb;
    uStack_2 = 0xc;
    uStack_3 = 0;
    uStack_4 = 2;
    uStack_5 = 8;
    uStack_6 = 0;
    pcRam_? = (code *)func_?(&puStack_7);
  }
  uVar8 = func_?(certificateSerialNumber);
  (*pcRam_?)(uVar8,strictComparison);
  func_?(uVar8);
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::ProcessScanner::ProcessScanner_Destroy(MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcStack_1 = pcRam_?;
    pcStack_2 = pcRam_?;
    uStack_3 = 0;
    uStack_4 = 0xb;
    uStack_5 = 7;
    uStack_6 = 2;
    pcRam_? = (code *)func_?(&puStack_7);
  }
  (*pcRam_?)();
  return;
}


/* String GetLastExactFind() */

String * Assembly-CSharp.dll::ProcessScanner::ProcessScanner_GetLastExactFind(MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcStack_1 = pcRam_?;
    pcStack_2 = pcRam_?;
    uStack_3 = 0;
    uStack_4 = 0xb;
    uStack_5 = 0x10;
    uStack_6 = 1;
    pcRam_? = (code *)func_?(&puStack_7);
  }
  uVar8 = (*pcRam_?)();
  pSVar9 = (String *)func_?(uVar8);
  func_?(uVar8);
  return pSVar9;
}


/* Void Initialize(ApplicationDesc[]) */

void Assembly-CSharp.dll::ProcessScanner::ProcessScanner_Initialize
               (ApplicationDesc__Array *banList,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffc8;
  uStack_5 = 0;
  puVar6 = &stack0xffffffc8;
  if (banList != (ApplicationDesc__Array *)0x0) {
    while( true ) {
      uVar7 = uStack_5;
      if ((int)banList->max_length <= (int)uStack_5) {
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      uStack_1 = 0;
      if (banList->max_length <= uStack_5) break;
      pAVar8 = banList->vector[uStack_5];
      puVar6 = puStack_4;
      if (pAVar8 == (ApplicationDesc *)0x0) goto code_?;
      if (banList->max_length <= uStack_5) goto code_?;
      if (pAVar8 == (ApplicationDesc *)0x0) goto code_?;
      strictComparison = (pAVar8->fields).strictComparison;
      _bStack_1c = CONCAT31(uStack_9,strictComparison);
      ProcessScanner_AddToBanList
                ((pAVar8->fields)._ExeCertSubjectName_k__BackingField,strictComparison,
                 (MethodInfo *)0x0);
      uStack_5 = uVar7 + 1;
    }
    func_?();
code_?:
    func_?();
    puVar6 = puStack_4;
  }
code_?:
  puStack_4 = puVar6;
  func_?();
  pAStack_10 = banList->klass;
  func_?(&pAStack_10,&UNK_?);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Int32 ScanForForbiddenProcesses() */

int32_t Assembly-CSharp.dll::ProcessScanner::ProcessScanner_ScanForForbiddenProcesses
                  (MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcStack_1 = pcRam_?;
    pcStack_2 = pcRam_?;
    uStack_3 = 0;
    uStack_4 = 0xb;
    uStack_5 = 0x19;
    uStack_6 = 2;
    pcRam_? = (code *)func_?(&puStack_7);
  }
  iVar8 = (*pcRam_?)();
  return iVar8;
}


/* Void StartScan(ApplicationDesc[]) */

void Assembly-CSharp.dll::ProcessScanner::ProcessScanner_StartScan
               (ApplicationDesc__Array *banList,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__HackingToolDetector);
    func_?(&TypeInfo__HackingToolDetector__HackingToolReport);
    func_?(&StringLiteral_NativeFunc_error__eError_Process);
    func_?(&StringLiteral_NativeFunc_error_code__UNKNOWN);
    func_?(&StringLiteral_NativeFunc_error__eError_CreateT);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_1 = 0;
  if (pcRam_? == (code *)0x0) {
    pcStack_6 = pcRam_?;
    pcStack_7 = pcRam_?;
    uStack_8 = 0;
    uStack_9 = 0xb;
    uStack_10 = 0x19;
    uStack_11 = 2;
    pcRam_? = (code *)func_?(&puStack_12);
  }
  uVar13 = (*pcRam_?)();
  if ((int)uVar13 < 0) {
    if (uVar13 == 0xfffffffd) {
      pSVar14 = StringLiteral_NativeFunc_error__eError_Process;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
        pSVar14 = StringLiteral_NativeFunc_error__eError_Process;
      }
    }
    else if (uVar13 == 0xfffffffe) {
      pSVar14 = StringLiteral_NativeFunc_error__eError_CreateT;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
        pSVar14 = StringLiteral_NativeFunc_error__eError_CreateT;
      }
    }
    else {
      if (uVar13 == 0xffffffff) goto code_?;
      pSVar14 = StringLiteral_NativeFunc_error_code__UNKNOWN;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
        pSVar14 = StringLiteral_NativeFunc_error_code__UNKNOWN;
      }
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar14,(MethodInfo *)0x0);
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  if (banList == (ApplicationDesc__Array *)0x0) goto code_?;
  if (uVar13 < banList->max_length) {
    if (banList->vector[uVar13] == (ApplicationDesc *)0x0) goto code_?;
    if ((banList->vector[uVar13]->fields).strictComparison == 0) {
      if (uVar13 < banList->max_length) {
        pAVar15 = banList->vector[uVar13];
        if (pcRam_? == (code *)0x0) {
          pcStack_6 = pcRam_?;
          pcStack_7 = pcRam_?;
          uStack_8 = 0;
          uStack_9 = 0xb;
          uStack_10 = 0x10;
          uStack_11 = 1;
          pcRam_? = (code *)func_?(&puStack_12);
        }
        uVar16 = (*pcRam_?)();
        pSVar14 = (String *)func_?(uVar16);
        func_?(uVar16);
        report = (HackingToolDetector_HackingToolReport *)
                 func_?(TypeInfo__HackingToolDetector__HackingToolReport);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)report,ExceptionArgument__Enum_obj,unaff_EDI);
        (report->fields).kind = 1;
        (report->fields).app = pAVar15;
        func_?();
        (report->fields).exactFind = pSVar14;
        goto code_?;
      }
      goto code_?;
    }
    if (uVar13 < banList->max_length) {
      pAVar15 = banList->vector[uVar13];
      report = (HackingToolDetector_HackingToolReport *)
               func_?(TypeInfo__HackingToolDetector__HackingToolReport);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)report,ExceptionArgument__Enum_obj,unaff_EDI);
      (report->fields).kind = 0;
      (report->fields).app = pAVar15;
code_?:
      func_?();
      if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      HackingToolDetector::HackingToolDetector_Report(report,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  else {
    func_?();
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

