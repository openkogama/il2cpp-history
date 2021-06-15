
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::HackingToolDetector+<Scan_Coroutine>c__Iterator0::
     HackingToolDetector_Scan_Coroutine_c_Iterator0_MoveNext
               (HackingToolDetector_Scan_Coroutine_c_Iterator0 *this,MethodInfo *method)

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
    pHVar3 = HackingToolDetector::HackingToolDetector_get_Instance((MethodInfo *)0x0);
    if (pHVar3 == (HackingToolDetector *)0x0) goto code_?;
    banList = (pHVar3->fields).banList;
    if ((((uint)(TypeInfo__RegistryScanner->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__RegistryScanner->_1).cctor_started == 0)) {
      func_?(TypeInfo__RegistryScanner);
    }
    RegistryScanner::RegistryScanner_StartScan(banList,(MethodInfo *)0x0);
    pHVar3 = HackingToolDetector::HackingToolDetector_get_Instance((MethodInfo *)0x0);
    if (pHVar3 == (HackingToolDetector *)0x0) goto code_?;
    ProcessScanner::ProcessScanner_Initialize((pHVar3->fields).banList,(MethodInfo *)0x0);
  }
  else if (iVar1 != 1) {
    return 0;
  }
  pHVar3 = (this->fields)._this;
  if (pHVar3 != (HackingToolDetector *)0x0) {
    bVar4 = HackingToolDetector::HackingToolDetector_get_QuitRequest(pHVar3,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
        func_?(TypeInfo__HackingToolDetector);
      }
      HackingToolDetector::HackingToolDetector_ScanForForbiddenProcesses((MethodInfo *)0x0);
      fVar2 = (this->fields)._waitDuration___0;
      this_00 = (WaitForSeconds *)func_?(TypeInfo__UnityEngine__WaitForSeconds);
      UnityEngine.CoreModule.dll::UnityEngine::WaitForSeconds::WaitForSeconds__ctor
                (this_00,fVar2,(MethodInfo *)0x0);
      (this->fields)._current = (Object *)this_00;
      if ((this->fields)._disposing == 0) {
        (this->fields)._PC = 1;
      }
      return 1;
    }
    (this->fields)._PC = -1;
    return 0;
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Void Reset() */

void Assembly-CSharp.dll::HackingToolDetector+<Scan_Coroutine>c__Iterator0::
     HackingToolDetector_Scan_Coroutine_c_Iterator0_Reset
               (HackingToolDetector_Scan_Coroutine_c_Iterator0 *this,MethodInfo *method)

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

