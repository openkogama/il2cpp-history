
/* Boolean CheckPro() */

bool Assembly-CSharp.dll::MVUtils::MVUtils_CheckPro(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Elysiox);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_engine);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_cheat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    if (cRam_? == '\0') {
      FUN_?(&::StringLiteral__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = System.dll::System::Diagnostics::Process::Process_GetProcesses_1
                       (::StringLiteral__,(MethodInfo *)0x0);
    uVar2 = 0;
    if (pPVar1 == (Process__Array *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    ppPVar5 = pPVar1->vector;
    for (; (int)uVar2 < (int)pPVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pPVar1->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      this = *ppPVar5;
      if ((this != (Process *)0x0) &&
         (bVar4 = System.dll::System::Diagnostics::Process::Process_get_HasExited
                            (this,(MethodInfo *)0x0), bVar4 == 0)) {
        pSVar6 = System.dll::System::Diagnostics::Process::Process_get_ProcessName
                           (this,(MethodInfo *)0x0);
        if ((pSVar6 == (String *)0x0) ||
           (pSVar6 = mscorlib.dll::System::String::String_ToLower(pSVar6,(MethodInfo *)0x0),
           pSVar6 == (String *)0x0)) goto code_?;
        bVar4 = mscorlib.dll::System::String::String_Contains
                          (pSVar6,StringLiteral_cheat,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pSVar6 = System.dll::System::Diagnostics::Process::Process_get_ProcessName
                             (this,(MethodInfo *)0x0);
          if ((pSVar6 == (String *)0x0) ||
             (pSVar6 = mscorlib.dll::System::String::String_ToLower(pSVar6,(MethodInfo *)0x0),
             pSVar6 == (String *)0x0)) goto code_?;
          bVar4 = mscorlib.dll::System::String::String_Contains
                            (pSVar6,StringLiteral_engine,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            return 0;
          }
        }
        pSVar6 = System.dll::System::Diagnostics::Process::Process_get_ProcessName
                           (this,(MethodInfo *)0x0);
        if ((pSVar6 == (String *)0x0) ||
           (pSVar6 = mscorlib.dll::System::String::String_ToLower(pSVar6,(MethodInfo *)0x0),
           pSVar6 == (String *)0x0)) goto code_?;
        bVar4 = mscorlib.dll::System::String::String_Contains
                          (pSVar6,StringLiteral_Elysiox,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          return 0;
        }
      }
      ppPVar5 = ppPVar5 + 1;
    }
  }
  return 1;
}

