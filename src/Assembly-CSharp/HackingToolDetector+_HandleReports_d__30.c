
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::HackingToolDetector+<HandleReports>d__30::
     HackingToolDetector_HandleReports_d_30_MoveNext
               (HackingToolDetector_HandleReports_d_30 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HackingToolDetector);
    func_?(&MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__Dequeue__)
    ;
    func_?(&
                    MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__get_Count__
                   );
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__HackingToolDetector);
    }
    fVar2 = HackingToolDetector::HackingToolDetector_get_WaitTime((MethodInfo *)0x0);
    (this->fields)._waitDuration_5__2 = fVar2;
    pSVar3 = (SubscribableVariableBase_1_System_Single_ *)
             func_?(TypeInfo__UnityEngine__WaitForSeconds);
    if (pSVar3 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
      SubscribableVariableBase`1[System::Single]::SubscribableVariableBase_1_System_Single___ctor
                (pSVar3,1.0,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)pSVar3;
      func_?(&(this->fields).__2__current,pSVar3);
      (this->fields).__1__state = 1;
      return 1;
    }
  }
  else {
    if ((iVar1 != 1) && (iVar1 != 2)) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (this_00 != (HackingToolDetector *)0x0) {
      bVar4 = HackingToolDetector::HackingToolDetector_get_QuitRequest(this_00,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return 0;
      }
      while (pTVar5 = (this_00->fields).detectedHackingTools,
            pTVar5 != (ThreadSafeQueue_1_HackingToolDetector_HackingToolReport_ *)0x0) {
        iVar6 = ThreadSafeQueue`1[System::Object]::ThreadSafeQueue_1_System_Object__get_Count
                          ((ThreadSafeQueue_1_System_Object_ *)pTVar5,
                           MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__get_Count__
                          );
        if (iVar6 < 1) {
          fVar2 = (this->fields)._waitDuration_5__2;
          pSVar3 = (SubscribableVariableBase_1_System_Single_ *)func_?();
          if (pSVar3 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
            SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single___ctor(pSVar3,fVar2,(MethodInfo *)0x0);
            (this->fields).__2__current = (Object *)pSVar3;
            func_?(&(this->fields).__2__current,pSVar3);
            (this->fields).__1__state = 2;
            return 1;
          }
          break;
        }
        pTVar5 = (this_00->fields).detectedHackingTools;
        if (pTVar5 == (ThreadSafeQueue_1_HackingToolDetector_HackingToolReport_ *)0x0) break;
        ThreadSafeQueue`1[System::Object]::ThreadSafeQueue_1_System_Object__Dequeue
                  ((ThreadSafeQueue_1_System_Object_ *)pTVar5,
                   MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__Dequeue__);
        pAVar7 = (this_00->fields).onHackToolDetected;
        if (pAVar7 == (Action_1_HackingToolDetector_HackingToolReport_ *)0x0) break;
        (*(pAVar7->fields)._._.invoke_impl)();
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar4 = (*pcVar8)();
  return bVar4;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::HackingToolDetector+<HandleReports>d__30::
     HackingToolDetector_HandleReports_d_30_System_Collections_IEnumerator_Reset
               (HackingToolDetector_HandleReports_d_30 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__HackingToolDetector___HandleReports_d__30__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

