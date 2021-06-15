
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::HackingToolDetector+<HandleReports>c__Iterator1::
     HackingToolDetector_HandleReports_c_Iterator1_MoveNext
               (HackingToolDetector_HandleReports_c_Iterator1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
      func_?(TypeInfo__HackingToolDetector);
    }
    fVar2 = HackingToolDetector::HackingToolDetector_get_WaitTime((MethodInfo *)0x0);
    (this->fields)._waitDuration___0 = fVar2;
    pWVar3 = (WaitForSeconds *)func_?(TypeInfo__UnityEngine__WaitForSeconds);
    UnityEngine.CoreModule.dll::UnityEngine::WaitForSeconds::WaitForSeconds__ctor
              (pWVar3,1.0,(MethodInfo *)0x0);
    (this->fields)._current = (Object *)pWVar3;
    if ((this->fields)._disposing == 0) {
      (this->fields)._PC = 1;
    }
    return 1;
  }
  if ((iVar1 != 1) && (iVar1 != 2)) {
    return 0;
  }
  pHVar4 = (this->fields)._this;
  if (pHVar4 != (HackingToolDetector *)0x0) {
    bVar5 = HackingToolDetector::HackingToolDetector_get_QuitRequest(pHVar4,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      (this->fields)._PC = -1;
      return 0;
    }
    pHVar4 = (this->fields)._this;
    if (pHVar4 != (HackingToolDetector *)0x0) {
      while (pTVar6 = (pHVar4->fields).detectedHackingTools,
            pTVar6 != (ThreadSafeQueue_1_HackingToolDetector_HackingToolReport_ *)0x0) {
        iVar7 = ThreadSafeQueue`1[HackingToolDetector+HackingToolReport]::
                ThreadSafeQueue_1_HackingToolDetector_HackingToolReport__get_Count
                          (pTVar6,
                           MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__get_Count__
                          );
        if (iVar7 < 1) {
          fVar2 = (this->fields)._waitDuration___0;
          pWVar3 = (WaitForSeconds *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::WaitForSeconds::WaitForSeconds__ctor
                    (pWVar3,fVar2,(MethodInfo *)0x0);
          (this->fields)._current = (Object *)pWVar3;
          if ((this->fields)._disposing != 0) {
            return 1;
          }
          (this->fields)._PC = 2;
          return 1;
        }
        pHVar4 = (this->fields)._this;
        if ((pHVar4 == (HackingToolDetector *)0x0) ||
           (pTVar6 = (pHVar4->fields).detectedHackingTools,
           pTVar6 == (ThreadSafeQueue_1_HackingToolDetector_HackingToolReport_ *)0x0)) break;
        obj = (Dictionary_2_System_String_System_Object_ *)
              ThreadSafeQueue`1[HackingToolDetector+HackingToolReport]::
              ThreadSafeQueue_1_HackingToolDetector_HackingToolReport__Dequeue
                        (pTVar6,
                         MethodInfo__ThreadSafeQueue<HackingToolDetector::HackingToolReport>__Dequeue__
                        );
        pHVar4 = (this->fields)._this;
        if ((pHVar4 == (HackingToolDetector *)0x0) ||
           (this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_
                       *)(pHVar4->fields).onHackToolDetected,
           this_00 ==
           (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0))
        break;
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  (this_00,obj,
                   MethodInfo__System__Action<HackingToolDetector::HackingToolReport>__Invoke_HackingToolDetector__HackingToolReport_
                  );
        pHVar4 = (this->fields)._this;
        if (pHVar4 == (HackingToolDetector *)0x0) break;
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  bVar5 = (*pcVar8)();
  return bVar5;
}


/* Void Reset() */

void Assembly-CSharp.dll::HackingToolDetector+<HandleReports>c__Iterator1::
     HackingToolDetector_HandleReports_c_Iterator1_Reset
               (HackingToolDetector_HandleReports_c_Iterator1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

