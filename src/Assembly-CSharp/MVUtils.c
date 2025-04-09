
/* Boolean CheckPro() */

bool Assembly-CSharp.dll::MVUtils::MVUtils_CheckPro(MethodInfo *method)

{
  puStack_1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_1;
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Elysiox);
    func_?(&StringLiteral_engine);
    func_?(&StringLiteral_cheat);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pPVar2 = System.dll::System::Diagnostics::Process::Process_GetProcesses((MethodInfo *)0x0);
    uVar3 = 0;
    if (pPVar2 == (Process__Array *)0x0) {
code_?:
      func_?();
      func_?(&stack0xffffffe4);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    ppPVar6 = pPVar2->vector;
    while( true ) {
      if ((int)pPVar2->max_length <= (int)uVar3) break;
      if (pPVar2->max_length <= uVar3) {
        func_?();
        goto code_?;
      }
      this = *ppPVar6;
      if (this != (Process *)0x0) {
        bVar5 = System.dll::System::Diagnostics::Process::Process_get_HasExited
                          (this,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          pSVar7 = System.dll::System::Diagnostics::Process::Process_get_ProcessName
                             (this,(MethodInfo *)0x0);
          if (pSVar7 == (String *)0x0) goto code_?;
          pSVar7 = mscorlib.dll::System::String::String_ToLower(pSVar7,(MethodInfo *)0x0);
          if (pSVar7 == (String *)0x0) goto code_?;
          pPVar2 = (Process__Array *)StringLiteral_cheat;
          bVar5 = mscorlib.dll::System::String::String_Contains
                            (pSVar7,StringLiteral_cheat,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            pSVar7 = System.dll::System::Diagnostics::Process::Process_get_ProcessName
                               (this,(MethodInfo *)0x0);
            if (pSVar7 == (String *)0x0) goto code_?;
            pSVar7 = mscorlib.dll::System::String::String_ToLower(pSVar7,(MethodInfo *)0x0);
            if (pSVar7 == (String *)0x0) goto code_?;
            bVar5 = mscorlib.dll::System::String::String_Contains
                              (pSVar7,StringLiteral_engine,(MethodInfo *)0x0);
            if (bVar5 != 0) goto code_?;
          }
          pSVar7 = System.dll::System::Diagnostics::Process::Process_get_ProcessName
                             (this,(MethodInfo *)0x0);
          if (pSVar7 == (String *)0x0) goto code_?;
          pSVar7 = mscorlib.dll::System::String::String_ToLower(pSVar7,(MethodInfo *)0x0);
          if (pSVar7 == (String *)0x0) goto code_?;
          bVar5 = mscorlib.dll::System::String::String_Contains
                            (pSVar7,StringLiteral_Elysiox,(MethodInfo *)0x0);
          if (bVar5 != 0) {
code_?:
            *unaff_FS_OFFSET = puStack_1;
            return 0;
          }
        }
      }
      uVar3 = uVar3 + 1;
      ppPVar6 = ppPVar6 + 1;
    }
  }
  *unaff_FS_OFFSET = puStack_1;
  return 1;
}

