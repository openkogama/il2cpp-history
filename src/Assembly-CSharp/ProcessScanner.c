
/* Void AddToBanList(String, Boolean) */

void Assembly-CSharp.dll::ProcessScanner::ProcessScanner_AddToBanList
               (String *certificateSerialNumber,bool strictComparison,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    uStack_1 = 0xb;
    uStack_2 = 0xc;
    uStack_3 = 0;
    uStack_4 = 2;
    uStack_5 = 0xc;
    uStack_6 = 0;
    pcRam_? = (code *)FUN_?(&puStack_7);
  }
  lVar8 = FUN_?(certificateSerialNumber);
  (*pcRam_?)(lVar8,strictComparison);
  if (lVar8 != 0) {
    CoTaskMemFree(lVar8);
  }
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::ProcessScanner::ProcessScanner_Destroy(MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    uStack_1 = 0xb;
    uStack_2 = 7;
    uStack_3 = 0;
    uStack_4 = 0;
    uStack_5 = 2;
    pcRam_? = (code *)FUN_?(&puStack_6);
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)();
  return;
}


/* String GetLastExactFind() */

String * Assembly-CSharp.dll::ProcessScanner::ProcessScanner_GetLastExactFind(MethodInfo *method)

{
  pSVar1 = (String *)0x0;
  if (pcRam_? == (code *)0x0) {
    uStack_2 = 0xb;
    uStack_3 = 0x10;
    uStack_4 = 0;
    uStack_5 = 1;
    uStack_6 = 0;
    pcRam_? = (code *)FUN_?(&puStack_7);
  }
  lVar8 = (*pcRam_?)();
  if (lVar8 != 0) {
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (*(char *)(lVar8 + lVar9) != '\0');
    pSVar1 = (String *)FUN_?(lVar8);
    CoTaskMemFree(lVar8);
  }
  return pSVar1;
}


/* Void Initialize(ApplicationDesc[]) */

void Assembly-CSharp.dll::ProcessScanner::ProcessScanner_Initialize
               (ApplicationDesc__Array *banList,MethodInfo *method)

{
  uVar1 = 0;
  if (banList != (ApplicationDesc__Array *)0x0) {
    while( true ) {
      if ((int)banList->max_length <= (int)uVar1) {
        return;
      }
      if ((uint)banList->max_length <= uVar1) break;
      if (banList->vector[(int)uVar1] == (ApplicationDesc *)0x0) goto code_?;
      if ((uint)banList->max_length <= uVar1) goto code_?;
      if (banList->vector[(int)uVar1] == (ApplicationDesc *)0x0) goto code_?;
      ProcessScanner_AddToBanList
                ((banList->vector[(int)uVar1]->fields)._ExeCertSubjectName_k__BackingField,
                 (banList->vector[(int)uVar1]->fields).strictComparison,(MethodInfo *)0x0);
      uVar1 = uVar1 + 1;
    }
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Int32 ScanForForbiddenProcesses() */

int32_t Assembly-CSharp.dll::ProcessScanner::ProcessScanner_ScanForForbiddenProcesses
                  (MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    uStack_1 = 0xb;
    uStack_2 = 0x19;
    uStack_3 = 0;
    uStack_4 = 0;
    uStack_5 = 2;
    pcRam_? = (code *)FUN_?(&puStack_6);
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar7 = (*pcRam_?)();
  return iVar7;
}


/* Void StartScan(ApplicationDesc[]) */

void Assembly-CSharp.dll::ProcessScanner::ProcessScanner_StartScan
               (ApplicationDesc__Array *banList,MethodInfo *method)

{
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
  pSVar1 = (String *)0x0;
  if (pcRam_? == (code *)0x0) {
    uStack_2 = 0xb;
    uStack_3 = 0x19;
    uStack_4 = 0;
    uStack_5 = 2;
    uStack_6 = 0;
    pcRam_? = (code *)FUN_?(&puStack_7);
  }
  uVar8 = (*pcRam_?)();
  if ((int)uVar8 < 0) {
    if (uVar8 == 0xfffffffd) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_NativeFunc_error__eError_Process,(MethodInfo *)0x0);
      return;
    }
    if (uVar8 != 0xfffffffe) {
      if (uVar8 == 0xffffffff) {
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
  if (banList == (ApplicationDesc__Array *)0x0) goto code_?;
  if (uVar8 < (uint)banList->max_length) {
    pAVar9 = banList->vector[(int)uVar8];
    if (pAVar9 != (ApplicationDesc *)0x0) {
      uVar10 = (uint)banList->max_length;
      if ((pAVar9->fields).strictComparison == 0) {
        if (uVar8 < uVar10) {
          if (pcRam_? == (code *)0x0) {
            uStack_2 = 0xb;
            uStack_3 = 0x10;
            uStack_4 = 0;
            uStack_5 = 1;
            uStack_6 = 0;
            pcRam_? = (code *)FUN_?(&puStack_7);
          }
          lVar11 = (*pcRam_?)();
          if (lVar11 != 0) {
            lVar12 = -1;
            do {
              lVar12 = lVar12 + 1;
            } while (*(char *)(lVar11 + lVar12) != '\0');
            pSVar1 = (String *)FUN_?(lVar11);
            CoTaskMemFree(lVar11);
          }
          pHVar13 = (HackingToolDetector_HackingToolReport *)
                    FUN_?(TypeInfo__HackingToolDetector__HackingToolReport);
          (pHVar13->fields).kind = 1;
          (pHVar13->fields).app = pAVar9;
          if (iRam_? != 0) {
            uVar8 = (uint)((ulonglong)&(pHVar13->fields).app >> 0xc);
            lVar11 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
            do {
              uVar14 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar15 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar16 = uVar14 == *puVar15;
              if (bVar16) {
                *puVar15 = uVar14 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar16);
          }
          iVar17 = iRam_?;
          (pHVar13->fields).exactFind = pSVar1;
          if (iVar17 != 0) {
            uVar8 = (uint)((ulonglong)&(pHVar13->fields).exactFind >> 0xc);
            lVar11 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
            do {
              uVar14 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar15 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar16 = uVar14 == *puVar15;
              if (bVar16) {
                *puVar15 = uVar14 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar16);
          }
          if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
            FUN_?();
          }
          HackingToolDetector::HackingToolDetector_Report(pHVar13,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      if (uVar8 < uVar10) {
        pHVar13 = (HackingToolDetector_HackingToolReport *)
                  FUN_?(TypeInfo__HackingToolDetector__HackingToolReport);
        (pHVar13->fields).kind = 0;
        (pHVar13->fields).app = pAVar9;
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)&(pHVar13->fields).app >> 0xc);
          lVar11 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
          do {
            uVar14 = *(ulonglong *)(lVar11 + 0xADDR);
            puVar15 = (ulonglong *)(lVar11 + 0xADDR);
            LOCK();
            bVar16 = uVar14 == *puVar15;
            if (bVar16) {
              *puVar15 = uVar14 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar16);
        }
        if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
          FUN_?();
        }
        HackingToolDetector::HackingToolDetector_Report(pHVar13,(MethodInfo *)0x0);
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
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

