
/* Void AddToBanList(String, Boolean) */

void Assembly-CSharp.dll::ProcessScanner::ProcessScanner_AddToBanList
               (String *certificateSerialNumber,bool strictComparison,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    uStack_1 = 0xb;
    uStack_2 = 0xc;
    uStack_3 = 0;
    uStack_4 = 2;
    uStack_5 = 8;
    uStack_6 = 0;
    pcRam_? = (code *)func_?(&puStack_7);
    if (pcRam_? == (code *)0x0) {
      uVar8 = func_?(&UNK_?,0,0);
      func_?(uVar8);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  uVar8 = func_?(certificateSerialNumber);
  (*pcRam_?)(uVar8,strictComparison);
  func_?(uVar8);
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::ProcessScanner::ProcessScanner_Destroy(MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcStack_1 = pcRam_?;
    pcStack_2 = pcRam_?;
    uStack_3 = 0;
    uStack_4 = 0xb;
    uStack_5 = 7;
    uStack_6 = 2;
    pcRam_? = (code *)func_?(&puStack_7);
    if (pcRam_? == (code *)0x0) {
      uVar8 = func_?(&UNK_?,0,0);
      func_?(uVar8);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  (*pcRam_?)();
  return;
}


/* String GetLastExactFind() */

String * Assembly-CSharp.dll::ProcessScanner::ProcessScanner_GetLastExactFind(MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcStack_1 = pcRam_?;
    pcStack_2 = pcRam_?;
    uStack_3 = 0;
    uStack_4 = 0xb;
    uStack_5 = 0x10;
    uStack_6 = 1;
    pcRam_? = (code *)func_?(&puStack_7);
    if (pcRam_? == (code *)0x0) {
      uVar8 = func_?(&UNK_?,0,0);
      func_?(uVar8);
      pcVar9 = (code *)swi(3);
      pSVar10 = (String *)(*pcVar9)();
      return pSVar10;
    }
  }
  uVar8 = (*pcRam_?)();
  pSVar10 = (String *)func_?(uVar8);
  func_?(uVar8);
  return pSVar10;
}


/* Void Initialize(ApplicationDesc[]) */

void Assembly-CSharp.dll::ProcessScanner::ProcessScanner_Initialize
               (ApplicationDesc__Array *banList,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?();
  puVar6 = (undefined4 *)0x0;
  puStack_4 = &stack0xffffffac;
  do {
    puStack_7 = puVar6;
    if (banList == (ApplicationDesc__Array *)0x0) {
code_?:
      uVar8 = 0;
code_?:
      func_?(uVar8);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((int)banList->max_length <= (int)puVar6) {
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    uStack_1 = 0;
    if ((undefined4 *)banList->max_length <= puVar6) {
      uVar8 = func_?();
      func_?(uVar8,0,0);
code_?:
      uVar8 = func_?();
      func_?(uVar8);
code_?:
      func_?();
      pIStack_10 = (IKogamaSetting__Class *)0x0;
      func_?();
      auStack_11[0] = *puVar6;
      func_?(auStack_11);
      goto code_?;
    }
    uVar8 = 0;
    if ((KogamaSettingNumericBase_1_System_Single_ *)banList->vector[(int)puVar6] ==
        (KogamaSettingNumericBase_1_System_Single_ *)0x0) goto code_?;
    pIVar12 = (IKogamaSetting__Class *)
             MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)banList->vector[(int)puVar6],
                        (MethodInfo *)0x0);
    if ((undefined4 *)banList->max_length <= puVar6) goto code_?;
    if ((CrossPlatformInputManager_VirtualButton *)banList->vector[(int)puVar6] ==
        (CrossPlatformInputManager_VirtualButton *)0x0) goto code_?;
    bStack_13 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton::
                CrossPlatformInputManager_VirtualButton_get_matchWithInputManager
                          ((CrossPlatformInputManager_VirtualButton *)banList->vector[(int)puVar6],
                           (MethodInfo *)0x0);
    if (pcRam_? == (code *)0x0) {
      pIStack_10 = (IKogamaSetting__Class *)&pIStack_10;
      pMStack_14 = (MonitorData *)0xb;
      uStack_15 = 0xc;
      uStack_16 = 0;
      uStack_17 = 2;
      uStack_18 = 8;
      uStack_19 = 0;
      pcRam_? = (code *)func_?();
      if (pcRam_? != (code *)0x0) goto code_?;
      goto code_?;
    }
code_?:
    pIStack_10 = pIVar12;
    func_?();
    pIStack_10 = (IKogamaSetting__Class *)(uint)bStack_13;
    (*pcRam_?)();
    func_?();
    uStack_1 = 0xffffffff;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  } while( true );
}


/* Int32 ScanForForbiddenProcesses() */

int32_t Assembly-CSharp.dll::ProcessScanner::ProcessScanner_ScanForForbiddenProcesses
                  (MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcStack_1 = pcRam_?;
    pcStack_2 = pcRam_?;
    uStack_3 = 0;
    uStack_4 = 0xb;
    uStack_5 = 0x19;
    uStack_6 = 2;
    pcRam_? = (code *)func_?(&puStack_7);
    if (pcRam_? == (code *)0x0) {
      uVar8 = func_?(&UNK_?,0,0);
      func_?(uVar8);
      pcVar9 = (code *)swi(3);
      iVar10 = (*pcVar9)();
      return iVar10;
    }
  }
  iVar10 = (*pcRam_?)();
  return iVar10;
}


/* Void StartScan(ApplicationDesc[]) */

void Assembly-CSharp.dll::ProcessScanner::ProcessScanner_StartScan
               (ApplicationDesc__Array *banList,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  uStack_1 = 0;
  if (pcRam_? != (code *)0x0) {
code_?:
    uVar4 = (*pcRam_?)();
    if ((int)uVar4 < 0) {
      if (uVar4 == 0xfffffffd) {
        pSVar5 = StringLiteral_NativeFunc_error__eError_Process;
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
          pSVar5 = StringLiteral_NativeFunc_error__eError_Process;
        }
      }
      else if (uVar4 == 0xfffffffe) {
        pSVar5 = StringLiteral_NativeFunc_error__eError_CreateT;
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
          pSVar5 = StringLiteral_NativeFunc_error__eError_CreateT;
        }
      }
      else {
        if (uVar4 == 0xffffffff) goto code_?;
        pSVar5 = StringLiteral_NativeFunc_error_code__UNKNOWN;
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
          pSVar5 = StringLiteral_NativeFunc_error_code__UNKNOWN;
        }
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar5,(MethodInfo *)0x0);
      goto code_?;
    }
    if (banList == (ApplicationDesc__Array *)0x0) goto code_?;
    if (banList->max_length <= uVar4) goto code_?;
    if ((CrossPlatformInputManager_VirtualButton *)banList->vector[uVar4] ==
        (CrossPlatformInputManager_VirtualButton *)0x0) goto code_?;
    bVar6 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton::
            CrossPlatformInputManager_VirtualButton_get_matchWithInputManager
                      ((CrossPlatformInputManager_VirtualButton *)banList->vector[uVar4],
                       (MethodInfo *)0x0);
    if (bVar6 == 0) {
      if (banList->max_length <= uVar4) goto code_?;
      pAVar7 = banList->vector[uVar4];
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
        if (pcRam_? == (code *)0x0) goto code_?;
      }
      (*pcRam_?)();
      pSVar5 = (String *)func_?();
      func_?();
      this = (HackingToolDetector_HackingToolReport *)func_?();
      HackingToolDetector+HackingToolReport::HackingToolDetector_HackingToolReport__ctor_1
                (this,pAVar7,pSVar5,(MethodInfo *)0x0);
    }
    else {
      if (banList->max_length <= uVar4) goto code_?;
      pAVar7 = banList->vector[uVar4];
      this = (HackingToolDetector_HackingToolReport *)func_?();
      HackingToolDetector+HackingToolReport::HackingToolDetector_HackingToolReport__ctor
                (this,pAVar7,(MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
      func_?();
    }
    HackingToolDetector::HackingToolDetector_Report(this,(MethodInfo *)0x0);
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  pcRam_? = (code *)func_?(&puStack_8);
  if (pcRam_? != (code *)0x0) goto code_?;
  uVar9 = func_?(&UNK_?);
  func_?(uVar9,0,0);
code_?:
  uVar9 = func_?();
  func_?(uVar9,0,0);
code_?:
  uVar9 = func_?();
  func_?(uVar9);
code_?:
  uVar9 = func_?();
  func_?(uVar9);
code_?:
  uVar9 = func_?();
  func_?(uVar9);
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

