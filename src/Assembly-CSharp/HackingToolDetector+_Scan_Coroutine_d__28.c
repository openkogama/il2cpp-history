
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::HackingToolDetector+<Scan_Coroutine>d__28::
     HackingToolDetector_Scan_Coroutine_d_28_MoveNext
               (HackingToolDetector_Scan_Coroutine_d_28 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pHVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar3 = HackingToolDetector::HackingToolDetector_get_WaitTime((MethodInfo *)0x0);
    (this->fields)._waitDuration_5__2 = fVar3;
    lVar4 = FUN_?();
    if (lVar4 == 0) goto code_?;
    ProcessScanner::ProcessScanner_Initialize
              (*(ApplicationDesc__Array **)(lVar4 + 0x38),(MethodInfo *)0x0);
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  if (pHVar2 != (HackingToolDetector *)0x0) {
    bVar5 = HackingToolDetector::HackingToolDetector_get_QuitRequest(pHVar2,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      return 0;
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
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__HackingToolDetector);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
      FUN_?();
    }
    pHVar2 = TypeInfo__HackingToolDetector->static_fields->instance;
    if (pHVar2 != (HackingToolDetector *)0x0) {
      ProcessScanner::ProcessScanner_StartScan((pHVar2->fields).banList,(MethodInfo *)0x0);
      fVar3 = (this->fields)._waitDuration_5__2;
      pOVar6 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
      bVar7 = iRam_? != 0;
      *(float *)&pOVar6[1].klass = fVar3;
      (this->fields).__2__current = pOVar6;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      (this->fields).__1__state = 1;
      return 1;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar5 = (*pcVar12)();
  return bVar5;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::HackingToolDetector+<Scan_Coroutine>d__28::
     HackingToolDetector_Scan_Coroutine_d_28_System_Collections_IEnumerator_Reset
               (HackingToolDetector_Scan_Coroutine_d_28 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__HackingToolDetector___Scan_Coroutine_d__28__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

