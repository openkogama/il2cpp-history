
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
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  puStack_3 = &stack0xffffffc8;
  uVar4 = 0;
  do {
    uStack_5 = 0xffffffff;
    uStack_6 = uVar4;
    if (banList == (ApplicationDesc__Array *)0x0) {
code_?:
      func_?();
      pAStack_7 = banList->klass;
      func_?(&pAStack_7,&UNK_?);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((int)banList->max_length <= (int)uVar4) {
      *unaff_FS_OFFSET = uStack_2;
      return;
    }
    uStack_5 = 0;
    if (banList->max_length <= uVar4) {
      func_?();
      goto code_?;
    }
    pAVar9 = banList->vector[uVar4];
    if (pAVar9 == (ApplicationDesc *)0x0) goto code_?;
    strictComparison = (pAVar9->fields).strictComparison;
    _bStack_1c = CONCAT31(uStack_10,strictComparison);
    ProcessScanner_AddToBanList
              ((pAVar9->fields)._ExeCertSubjectName_k__BackingField,strictComparison,
               (MethodInfo *)0x0);
    uVar4 = uVar4 + 1;
  } while( true );
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
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
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
  if (-1 < (int)uVar13) {
    if (banList != (ApplicationDesc__Array *)0x0) {
      if (uVar13 < banList->max_length) {
        pAVar14 = banList->vector[uVar13];
        if (pAVar14 != (ApplicationDesc *)0x0) {
          if ((pAVar14->fields).strictComparison == 0) {
            if (pcRam_? == (code *)0x0) {
              pcStack_15 = pcRam_?;
              pcStack_16 = pcRam_?;
              uStack_17 = 0;
              uStack_18 = 0xb;
              uStack_19 = 0x10;
              uStack_20 = 1;
              pcRam_? = (code *)func_?(&puStack_21);
            }
            uVar22 = (*pcRam_?)();
            pSVar23 = (String *)func_?(uVar22);
            func_?(uVar22);
            report = (HackingToolDetector_HackingToolReport *)
                     func_?(TypeInfo__HackingToolDetector__HackingToolReport);
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)report,ExceptionArgument__Enum_obj,unaff_EDI);
            (report->fields).kind = 1;
            (report->fields).app = pAVar14;
            func_?();
            (report->fields).exactFind = pSVar23;
          }
          else {
            report = (HackingToolDetector_HackingToolReport *)
                     func_?(TypeInfo__HackingToolDetector__HackingToolReport);
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)report,ExceptionArgument__Enum_obj,unaff_EDI);
            (report->fields).kind = 0;
            (report->fields).app = pAVar14;
          }
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
      }
    }
    func_?();
    pcVar24 = (code *)swi(3);
    (*pcVar24)();
    return;
  }
  if (uVar13 == 0xfffffffd) {
    pSVar23 = StringLiteral_NativeFunc_error__eError_Process;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
      pSVar23 = StringLiteral_NativeFunc_error__eError_Process;
    }
  }
  else if (uVar13 == 0xfffffffe) {
    pSVar23 = StringLiteral_NativeFunc_error__eError_CreateT;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
      pSVar23 = StringLiteral_NativeFunc_error__eError_CreateT;
    }
  }
  else {
    if (uVar13 == 0xffffffff) goto code_?;
    pSVar23 = StringLiteral_NativeFunc_error_code__UNKNOWN;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
      pSVar23 = StringLiteral_NativeFunc_error_code__UNKNOWN;
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)pSVar23,(MethodInfo *)0x0);
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return;
}

