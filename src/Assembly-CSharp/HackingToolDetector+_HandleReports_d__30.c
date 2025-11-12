
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::HackingToolDetector+<HandleReports>d__30::
     HackingToolDetector_HandleReports_d_30_MoveNext
               (HackingToolDetector_HandleReports_d_30 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__Dequeue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar2 = HackingToolDetector::HackingToolDetector_get_WaitTime((MethodInfo *)0x0);
    (this->fields)._waitDuration_5__2 = fVar2;
    pOVar3 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
    bVar4 = iRam_? != 0;
    *(undefined4 *)&pOVar3[1].klass = 0x3f800000;
    (this->fields).__2__current = pOVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
  if ((iVar1 != 1) && (iVar1 != 2)) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (this_00 != (HackingToolDetector *)0x0) {
    bVar9 = HackingToolDetector::HackingToolDetector_get_QuitRequest(this_00,(MethodInfo *)0x0);
    if (bVar9 != 0) {
      return 0;
    }
    while (pTVar10 = (this_00->fields).detectedHackingTools,
          pTVar10 != (ThreadSafeQueue_1_HackingToolDetector_HackingToolReport_ *)0x0) {
      iVar11 = ThreadSafeQueue`1[System::Object]::ThreadSafeQueue_1_System_Object__get_Count
                        ((ThreadSafeQueue_1_System_Object_ *)pTVar10,
                         MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__get_Count__
                        );
      if (iVar11 < 1) {
        fVar2 = (this->fields)._waitDuration_5__2;
        pOVar3 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
        *(float *)&pOVar3[1].klass = fVar2;
        (this->fields).__2__current = pOVar3;
        func_?(&(this->fields).__2__current);
        (this->fields).__1__state = 2;
        return 1;
      }
      pTVar10 = (this_00->fields).detectedHackingTools;
      if (pTVar10 == (ThreadSafeQueue_1_HackingToolDetector_HackingToolReport_ *)0x0) break;
      pOVar3 = ThreadSafeQueue`1[System::Object]::ThreadSafeQueue_1_System_Object__Dequeue
                         ((ThreadSafeQueue_1_System_Object_ *)pTVar10,
                          MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__Dequeue__
                         );
      pAVar12 = (this_00->fields).onHackToolDetected;
      if (pAVar12 == (Action_1_HackingToolDetector_HackingToolReport_ *)0x0) break;
      (*(pAVar12->fields)._._.invoke_impl)
                ((pAVar12->fields)._._.method_code,pOVar3,(pAVar12->fields)._._.method);
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar9 = (*pcVar13)();
  return bVar9;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::HackingToolDetector+<HandleReports>d__30::
     HackingToolDetector_HandleReports_d_30_System_Collections_IEnumerator_Reset
               (HackingToolDetector_HandleReports_d_30 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__HackingToolDetector___HandleReports_d__30__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

