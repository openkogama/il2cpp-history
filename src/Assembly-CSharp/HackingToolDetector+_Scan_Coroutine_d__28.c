
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::HackingToolDetector+<Scan_Coroutine>d__28::
     HackingToolDetector_Scan_Coroutine_d_28_MoveNext
               (HackingToolDetector_Scan_Coroutine_d_28 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HackingToolDetector);
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pHVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__HackingToolDetector);
    }
    fVar3 = HackingToolDetector::HackingToolDetector_get_WaitTime((MethodInfo *)0x0);
    (this->fields)._waitDuration_5__2 = fVar3;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__HackingToolDetector);
      cRam_? = '\x01';
    }
    if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__HackingToolDetector);
    }
    pHVar4 = TypeInfo__HackingToolDetector->static_fields->instance;
    if (pHVar4 == (HackingToolDetector *)0x0) goto code_?;
    ProcessScanner::ProcessScanner_Initialize((pHVar4->fields).banList,(MethodInfo *)0x0);
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
    if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__HackingToolDetector);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__HackingToolDetector);
      cRam_? = '\x01';
    }
    if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__HackingToolDetector);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__HackingToolDetector);
      cRam_? = '\x01';
    }
    if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__HackingToolDetector);
    }
    pHVar2 = TypeInfo__HackingToolDetector->static_fields->instance;
    if (pHVar2 != (HackingToolDetector *)0x0) {
      ProcessScanner::ProcessScanner_StartScan((pHVar2->fields).banList,(MethodInfo *)0x0);
      fVar3 = (this->fields)._waitDuration_5__2;
      this_00 = (SubscribableVariable_1_System_Single_ *)
                func_?(TypeInfo__UnityEngine__WaitForSeconds);
      SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                (this_00,fVar3,(MethodInfo *)0x0);
      ppOVar6 = &(this->fields).__2__current;
      *ppOVar6 = (Object *)this_00;
      func_?(ppOVar6,this_00);
      (this->fields).__1__state = 1;
      return 1;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
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
  func_?(&
                  MethodInfo__HackingToolDetector___Scan_Coroutine_d__28__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

