
/* Boolean CheckPro() */

bool Assembly-CSharp.dll::MVUtils::MVUtils_CheckPro(MVUtils *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = System.dll::System::Diagnostics::Process::Process_GetProcesses((MethodInfo *)0x0);
  uVar2 = 0;
  if (pPVar1 == (Process__Array *)0x0) {
code_?:
    func_?(0);
  }
  else {
    ppPVar3 = pPVar1->vector;
    while( true ) {
      if ((int)pPVar1->max_length <= (int)uVar2) {
        return 1;
      }
      if (pPVar1->max_length <= uVar2) break;
      this_00 = *ppPVar3;
      if (((this_00 == (Process *)0x0) ||
          (pSVar4 = System.dll::System::Diagnostics::Process::Process_get_ProcessName
                              (this_00,(MethodInfo *)0x0), pSVar4 == (String *)0x0)) ||
         (pSVar4 = mscorlib.dll::System::String::String_ToLower(pSVar4,(MethodInfo *)0x0),
         pSVar4 == (String *)0x0)) goto code_?;
      pPVar1 = (Process__Array *)StringLiteral_cheat;
      bVar5 = mscorlib.dll::System::String::String_Contains
                        (pSVar4,StringLiteral_cheat,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        pSVar4 = System.dll::System::Diagnostics::Process::Process_get_ProcessName
                           (this_00,(MethodInfo *)0x0);
        if ((pSVar4 == (String *)0x0) ||
           (pSVar4 = mscorlib.dll::System::String::String_ToLower(pSVar4,(MethodInfo *)0x0),
           pSVar4 == (String *)0x0)) goto code_?;
        bVar5 = mscorlib.dll::System::String::String_Contains
                          (pSVar4,StringLiteral_engine,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          return 0;
        }
      }
      pSVar4 = System.dll::System::Diagnostics::Process::Process_get_ProcessName
                         (this_00,(MethodInfo *)0x0);
      if ((pSVar4 == (String *)0x0) ||
         (pSVar4 = mscorlib.dll::System::String::String_ToLower(pSVar4,(MethodInfo *)0x0),
         pSVar4 == (String *)0x0)) goto code_?;
      bVar5 = mscorlib.dll::System::String::String_Contains
                        (pSVar4,StringLiteral_Elysiox,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        return 0;
      }
      uVar2 = uVar2 + 1;
      ppPVar3 = ppPVar3 + 1;
    }
  }
  uVar6 = func_?(0,0);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* Void Update() */

void Assembly-CSharp.dll::MVUtils::MVUtils_Update(MVUtils *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                    ((MethodInfo *)0x0);
  if ((this->fields).CheckProInterval + (this->fields).Last < fVar1) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    bVar2 = cRam_? == '\0';
    (this->fields).Last = fVar1;
    if (bVar2) {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pPVar3 = System.dll::System::Diagnostics::Process::Process_GetProcesses((MethodInfo *)0x0);
    uVar4 = 0;
    if (pPVar3 == (Process__Array *)0x0) {
code_?:
      func_?(0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ppPVar6 = pPVar3->vector;
    for (; (int)uVar4 < (int)pPVar3->max_length; uVar4 = uVar4 + 1) {
      if (pPVar3->max_length <= uVar4) {
        uVar7 = func_?(0,0);
        func_?(uVar7);
        goto code_?;
      }
      this_00 = *ppPVar6;
      if (((this_00 == (Process *)0x0) ||
          (pSVar8 = System.dll::System::Diagnostics::Process::Process_get_ProcessName
                              (this_00,(MethodInfo *)0x0), pSVar8 == (String *)0x0)) ||
         (pSVar8 = mscorlib.dll::System::String::String_ToLower(pSVar8,(MethodInfo *)0x0),
         pPVar3 = (Process__Array *)StringLiteral_cheat, pSVar8 == (String *)0x0))
      goto code_?;
      bVar9 = mscorlib.dll::System::String::String_Contains
                        (pSVar8,StringLiteral_cheat,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        pSVar8 = System.dll::System::Diagnostics::Process::Process_get_ProcessName
                           (this_00,(MethodInfo *)0x0);
        if ((pSVar8 == (String *)0x0) ||
           (pSVar8 = mscorlib.dll::System::String::String_ToLower(pSVar8,(MethodInfo *)0x0),
           pSVar8 == (String *)0x0)) goto code_?;
        bVar9 = mscorlib.dll::System::String::String_Contains
                          (pSVar8,StringLiteral_engine,(MethodInfo *)0x0);
        if (bVar9 != 0) {
          return;
        }
      }
      pSVar8 = System.dll::System::Diagnostics::Process::Process_get_ProcessName
                         (this_00,(MethodInfo *)0x0);
      if ((pSVar8 == (String *)0x0) ||
         (pSVar8 = mscorlib.dll::System::String::String_ToLower(pSVar8,(MethodInfo *)0x0),
         pSVar8 == (String *)0x0)) goto code_?;
      bVar9 = mscorlib.dll::System::String::String_Contains
                        (pSVar8,StringLiteral_Elysiox,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        return;
      }
      ppPVar6 = ppPVar6 + 1;
    }
  }
  return;
}

