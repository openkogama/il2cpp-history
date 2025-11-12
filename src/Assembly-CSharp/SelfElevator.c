
/* Void Elevate() */

void Assembly-CSharp.dll::SelfElevator::SelfElevator_Elevate(SelfElevator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Diagnostics__ProcessStartInfo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_runas);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_The_process_is_already_running_a);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (ProcessStartInfo *)FUN_?();
  (pPVar1->fields).useShellExecute = 1;
  pSVar2 = mscorlib.dll::System::IO::Directory::Directory_InsecureGetCurrentDirectory
                     ((MethodInfo *)0x0);
  (pPVar1->fields).directory = pSVar2;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&(pPVar1->fields).directory >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pPVar8 = System.dll::System::Diagnostics::Process::Process_GetCurrentProcess((MethodInfo *)0x0);
  if (pPVar8 != (Process *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Diagnostics__Process);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    iVar9 = (pPVar8->fields).processId;
    iVar10 = GetCurrentProcessId();
    if (iVar9 == iVar10) {
      if (TypeInfo__System__Diagnostics__Process->static_fields->current_main_module ==
          (ProcessModule *)0x0) {
        pPVar11 = System.dll::System::Diagnostics::Process::Process_get_Modules
                            (pPVar8,(MethodInfo *)0x0);
        if (pPVar11 == (ProcessModuleCollection *)0x0) goto code_?;
        pPVar12 = System.dll::System::Diagnostics::ProcessModuleCollection::
                  ProcessModuleCollection_get_Item(pPVar11,0,(MethodInfo *)0x0);
        TypeInfo__System__Diagnostics__Process->static_fields->current_main_module = pPVar12;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)TypeInfo__System__Diagnostics__Process->static_fields >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
      }
      pPVar12 = TypeInfo__System__Diagnostics__Process->static_fields->current_main_module;
    }
    else {
      pPVar11 = System.dll::System::Diagnostics::Process::Process_get_Modules
                          (pPVar8,(MethodInfo *)0x0);
      if (pPVar11 == (ProcessModuleCollection *)0x0) goto code_?;
      pPVar12 = System.dll::System::Diagnostics::ProcessModuleCollection::
                ProcessModuleCollection_get_Item(pPVar11,0,(MethodInfo *)0x0);
    }
    if ((pPVar12 != (ProcessModule *)0x0) &&
       (pSVar2 = (pPVar12->fields).filename, pSVar2 != (String *)0x0)) {
      startIndex = mscorlib.dll::System::SpanHelpers::SpanHelpers_LastIndexOf
                             (&(pSVar2->fields)._firstChar,0x5c,(pSVar2->fields)._stringLength,
                              (MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Substring_1
                         (pSVar2,startIndex,(pSVar2->fields)._stringLength - startIndex,
                          (MethodInfo *)0x0);
      (pPVar1->fields).fileName = pSVar2;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&pPVar1->fields >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      iVar9 = iRam_?;
      (pPVar1->fields).verb = StringLiteral_runas;
      if (iVar9 != 0) {
        uVar3 = (uint)((ulonglong)&(pPVar1->fields).verb >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Diagnostics__Process);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar8 = (Process *)FUN_?(TypeInfo__System__Diagnostics__Process);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__ComponentModel__Component);
        LOCK();
        UNLOCK();
        FUN_?(&::StringLiteral__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__ComponentModel__Component->_1).field_0x1c == 0) {
        FUN_?();
      }
      (pPVar8->fields).machineName = ::StringLiteral__;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&(pPVar8->fields).machineName >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      iVar9 = iRam_?;
      (pPVar8->fields).outputStreamReadMode = 0;
      (pPVar8->fields).errorStreamReadMode = 0;
      (pPVar8->fields).m_processAccess = 0x1f0fff;
      (pPVar8->fields).startInfo = pPVar1;
      if (iVar9 != 0) {
        uVar3 = (uint)((ulonglong)&(pPVar8->fields).startInfo >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      System.dll::System::Diagnostics::Process::Process_Start(pPVar8,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Application::Application_Quit_1((MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* String GetExecutableName() */

String * Assembly-CSharp.dll::SelfElevator::SelfElevator_GetExecutableName
                   (SelfElevator *this,MethodInfo *method)

{
  this_00 = System.dll::System::Diagnostics::Process::Process_GetCurrentProcess((MethodInfo *)0x0);
  if (this_00 != (Process *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Diagnostics__Process);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    iVar1 = (this_00->fields).processId;
    iVar2 = GetCurrentProcessId();
    if (iVar1 == iVar2) {
      if (TypeInfo__System__Diagnostics__Process->static_fields->current_main_module ==
          (ProcessModule *)0x0) {
        pPVar3 = System.dll::System::Diagnostics::Process::Process_get_Modules
                           (this_00,(MethodInfo *)0x0);
        if (pPVar3 == (ProcessModuleCollection *)0x0) goto code_?;
        pPVar4 = System.dll::System::Diagnostics::ProcessModuleCollection::
                 ProcessModuleCollection_get_Item(pPVar3,0,(MethodInfo *)0x0);
        TypeInfo__System__Diagnostics__Process->static_fields->current_main_module = pPVar4;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)TypeInfo__System__Diagnostics__Process->static_fields >> 0xc);
          puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar6;
            LOCK();
            uVar8 = *puVar6;
            if (uVar7 == uVar8) {
              *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar8);
        }
      }
      pPVar4 = TypeInfo__System__Diagnostics__Process->static_fields->current_main_module;
    }
    else {
      pPVar3 = System.dll::System::Diagnostics::Process::Process_get_Modules
                         (this_00,(MethodInfo *)0x0);
      if (pPVar3 == (ProcessModuleCollection *)0x0) goto code_?;
      pPVar4 = System.dll::System::Diagnostics::ProcessModuleCollection::
               ProcessModuleCollection_get_Item(pPVar3,0,(MethodInfo *)0x0);
    }
    if ((pPVar4 != (ProcessModule *)0x0) &&
       (pSVar9 = (pPVar4->fields).filename, pSVar9 != (String *)0x0)) {
      iVar10 = mscorlib.dll::System::SpanHelpers::SpanHelpers_LastIndexOf
                        (&(pSVar9->fields)._firstChar,0x5c,(pSVar9->fields)._stringLength,
                         (MethodInfo *)0x0);
      iVar1 = (pSVar9->fields)._stringLength - iVar10;
      if (iVar10 < 0) {
        uVar11 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
        pAVar12 = (ArgumentOutOfRangeException *)func_?(uVar11);
        pSVar9 = (String *)func_?(&StringLiteral_StartIndex_cannot_be_less_than_z);
        pSVar13 = (String *)func_?(&StringLiteral_startIndex);
        mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                  (pAVar12,pSVar13,pSVar9,(MethodInfo *)0x0);
        uVar11 = func_?(&MethodInfo__System__String__Substring_int__int_);
        FUN_?(pAVar12,uVar11);
        pcVar14 = (code *)swi(3);
        pSVar9 = (String *)(*pcVar14)();
        return pSVar9;
      }
      if ((pSVar9->fields)._stringLength < iVar10) {
        uVar11 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
        pAVar12 = (ArgumentOutOfRangeException *)func_?(uVar11);
        pSVar9 = (String *)func_?(&StringLiteral_startIndex_cannot_be_larger_than);
        pSVar13 = (String *)func_?(&StringLiteral_startIndex);
        mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                  (pAVar12,pSVar13,pSVar9,(MethodInfo *)0x0);
        uVar11 = func_?(&MethodInfo__System__String__Substring_int__int_);
        FUN_?(pAVar12,uVar11);
        pcVar14 = (code *)swi(3);
        pSVar9 = (String *)(*pcVar14)();
        return pSVar9;
      }
      if (iVar1 < 0) {
        uVar11 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
        pAVar12 = (ArgumentOutOfRangeException *)func_?(uVar11);
        pSVar9 = (String *)func_?(&StringLiteral_Length_cannot_be_less_than_zero_);
        pSVar13 = (String *)func_?(&StringLiteral_length);
        mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                  (pAVar12,pSVar13,pSVar9,(MethodInfo *)0x0);
        uVar11 = func_?(&MethodInfo__System__String__Substring_int__int_);
        FUN_?(pAVar12,uVar11);
        pcVar14 = (code *)swi(3);
        pSVar9 = (String *)(*pcVar14)();
        return pSVar9;
      }
      if ((pSVar9->fields)._stringLength - iVar1 < iVar10) {
        uVar11 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
        pAVar12 = (ArgumentOutOfRangeException *)func_?(uVar11);
        pSVar9 = (String *)func_?(&StringLiteral_Index_and_length_must_refer_to_a);
        pSVar13 = (String *)func_?(&StringLiteral_length);
        mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                  (pAVar12,pSVar13,pSVar9,(MethodInfo *)0x0);
        uVar11 = func_?(&MethodInfo__System__String__Substring_int__int_);
        FUN_?(pAVar12,uVar11);
        pcVar14 = (code *)swi(3);
        pSVar9 = (String *)(*pcVar14)();
        return pSVar9;
      }
      if (iVar1 == 0) {
        return (String *)**(undefined8 **)(lRam_? + 0xb8);
      }
      if ((iVar10 == 0) && (iVar1 == (pSVar9->fields)._stringLength)) {
        return pSVar9;
      }
      pSVar13 = (String *)FUN_?(iVar1,iVar10,iVar1,0,unaff_RDI);
      if (pSVar13 == (String *)0x0) {
        FUN_?();
        pcVar14 = (code *)swi(3);
        pSVar9 = (String *)(*pcVar14)();
        return pSVar9;
      }
      dest = &(pSVar13->fields)._firstChar;
      src = &(pSVar9->fields)._firstChar + iVar10;
      uVar5 = iVar1 * 2;
      if (((ulonglong)((longlong)dest - (longlong)src) < (ulonglong)uVar5) ||
         ((ulonglong)((longlong)src - (longlong)dest) < (ulonglong)uVar5)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)dest,(uint8_t *)src,uVar5,(MethodInfo *)0x0);
      }
      return pSVar13;
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar14)();
  return pSVar9;
}


/* Int32 GetProcessIntegrityLevel() */

int32_t Assembly-CSharp.dll::SelfElevator::SelfElevator_GetProcessIntegrityLevel
                  (SelfElevator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Runtime__InteropServices__Marshal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__CSUACSelfElevation__TOKEN_MANDATORY_LABEL);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSStack_1 = (SafeHandle *)0x0;
  auStackX_20[0] = 0;
  alStack_2[0] = 0;
  alStack_2[1] = 0;
  ppSStack_3 = &pSStack_1;
  plStack_4 = alStack_2;
  puStack_5 = auStackX_20;
  this_00 = System.dll::System::Diagnostics::Process::Process_GetCurrentProcess((MethodInfo *)0x0);
  if (this_00 == (Process *)0x0) goto code_?;
  hProcess = System.dll::System::Diagnostics::Process::Process_get_Handle(this_00,(MethodInfo *)0x0)
  ;
  bVar6 = CSUACSelfElevation::NativeMethods::NativeMethods_OpenProcessToken
                    (hProcess,8,(SafeTokenHandle **)&pSStack_1,(MethodInfo *)0x0);
  pSVar7 = pSStack_1;
  if (bVar6 != 0) {
    if (pcRam_? == (code *)0x0) {
      uStack_8 = 0xc;
      uStack_9 = 0x13;
      uStack_10 = 0;
      uStack_11 = 1;
      uStack_12 = 0x20;
      uStack_13 = 0;
      pcRam_? = (code *)FUN_?(&puStack_14);
    }
    if (pSVar7 == (SafeHandle *)0x0) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
code_?:
      uVar15 = func_?(&TypeInfo__System__ComponentModel__Win32Exception);
      this_01 = (SocketException *)func_?(uVar15);
      System.dll::System::Net::Sockets::SocketException::SocketException__ctor_3
                (this_01,unaff_EDI,(MethodInfo *)0x0);
      uVar15 = func_?(&MethodInfo__SelfElevator__GetProcessIntegrityLevel__);
      FUN_?(this_01,uVar15);
code_?:
      uVar15 = func_?(&UNK_?);
      plVar16 = (longlong *)FUN_?(uVar15,0);
code_?:
      FUN_?(plVar16);
code_?:
      FUN_?();
code_?:
      uVar15 = func_?(&TypeInfo__System__ComponentModel__Win32Exception);
      pWVar17 = (Win32Exception *)func_?(uVar15);
      System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor
                (pWVar17,(MethodInfo *)0x0);
      func_?(&MethodInfo__SelfElevator__GetProcessIntegrityLevel__);
      FUN_?(pWVar17);
    }
    else {
      auStackX_18[0] = auStackX_18[0] & 0xffffff00;
      mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_DangerousAddRef
                (pSVar7,(bool *)auStackX_18,(MethodInfo *)0x0);
      iVar18 = (*pcRam_?)((pSVar7->fields).handle,0x19,0,0,auStackX_20);
      uVar19 = GetLastError();
      FUN_?(uVar19);
      if ((char)auStackX_18[0] != '\0') {
        mscorlib.dll::System::Runtime::InteropServices::SafeHandle::
        SafeHandle_DangerousReleaseInternal(pSVar7,0,(MethodInfo *)0x0);
      }
      if (iVar18 == 0) {
        if (*(int *)&(TypeInfo__System__Runtime__InteropServices__Marshal->_1).field_0x1c == 0) {
          FUN_?();
        }
        unaff_EDI = mscorlib.dll::System::Runtime::InteropServices::Marshal::
                    Marshal_GetLastWin32Error((MethodInfo *)0x0);
        if (unaff_EDI != 0x7a) goto code_?;
      }
      if (*(int *)&(TypeInfo__System__Runtime__InteropServices__Marshal->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Runtime__InteropServices__Marshal);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__Runtime__InteropServices__Marshal->_1).field_0x1c == 0) {
        FUN_?();
      }
      alStack_2[0] = GlobalAlloc(0);
      pSVar7 = pSStack_1;
      if (alStack_2[0] != 0) {
        if (pcRam_? == (code *)0x0) {
          uStack_8 = 0xc;
          uStack_9 = 0x13;
          uStack_10 = 0;
          uStack_11 = 1;
          uStack_12 = 0x20;
          uStack_13 = 0;
          pcRam_? = (code *)FUN_?(&puStack_14);
        }
        if (pSVar7 == (SafeHandle *)0x0) goto code_?;
        auStackX_18[0] = auStackX_18[0] & 0xffffff00;
        mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_DangerousAddRef
                  (pSVar7,(bool *)auStackX_18,(MethodInfo *)0x0);
        iVar18 = (*pcRam_?)((pSVar7->fields).handle);
        uVar19 = GetLastError();
        FUN_?(uVar19);
        if ((char)auStackX_18[0] != '\0') {
          mscorlib.dll::System::Runtime::InteropServices::SafeHandle::
          SafeHandle_DangerousReleaseInternal(pSVar7,0,(MethodInfo *)0x0);
        }
        lVar20 = alStack_2[0];
        handle = TypeRef__CSUACSelfElevation__TOKEN_MANDATORY_LABEL;
        if (iVar18 != 0) {
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          mscorlib.dll::System::Type::Type_GetTypeFromHandle
                    ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__System__Runtime__InteropServices__Marshal->_1).field_0x1c == 0) {
            FUN_?();
          }
          plVar16 = (longlong *)FUN_?(lVar20);
          if (plVar16 != (longlong *)0x0) {
            if (*(Il2CppClass **)(*plVar16 + 0x40) ==
                (TypeInfo__CSUACSelfElevation__TOKEN_MANDATORY_LABEL->_0).element_class) {
              lVar20 = plVar16[2];
              if (pcRam_? == (code *)0x0) {
                uStack_8 = 0xc;
                uStack_9 = 0x12;
                uStack_10 = 0;
                uStack_11 = 1;
                uStack_12 = 0xc;
                uStack_13 = 0;
                pcRam_? = (code *)FUN_?(&puStack_14);
              }
              src = (uint *)(*pcRam_?)(lVar20,0);
              uVar19 = GetLastError();
              FUN_?(uVar19);
              auStackX_18[0] = 0;
              if (((ulonglong)src & 3) == 0) {
                uVar21 = *src;
              }
              else {
                mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                          ((uint8_t *)auStackX_18,(uint8_t *)src,4,(MethodInfo *)0x0);
                uVar21 = auStackX_18[0];
              }
              FUN_?(&ppSStack_3);
              return uVar21;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
    uVar15 = func_?(&TypeInfo__System__ComponentModel__Win32Exception);
    pWVar17 = (Win32Exception *)func_?(uVar15);
    System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor
              (pWVar17,(MethodInfo *)0x0);
    func_?(&MethodInfo__SelfElevator__GetProcessIntegrityLevel__);
    FUN_?(pWVar17);
  }
  uVar15 = func_?(&TypeInfo__System__ComponentModel__Win32Exception);
  pWVar17 = (Win32Exception *)func_?(uVar15);
  System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor
            (pWVar17,(MethodInfo *)0x0);
  uVar15 = func_?(&MethodInfo__SelfElevator__GetProcessIntegrityLevel__);
  FUN_?(pWVar17,uVar15);
code_?:
  FUN_?();
  FUN_?();
  pcVar22 = (code *)swi(3);
  iVar23 = (*pcVar22)();
  return iVar23;
}


/* Boolean IsProcessElevated() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_IsProcessElevated
               (SelfElevator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Runtime__InteropServices__Marshal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__CSUACSelfElevation__TOKEN_ELEVATION);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStackX_20 = 0;
  pWVar1 = (Win32Exception *)0x0;
  pSStack_2 = (SafeHandle *)0x0;
  auStack_3[0] = 0;
  alStack_4[0] = 0;
  alStack_4[1] = 0;
  ppSStack_5 = &pSStack_2;
  plStack_6 = alStack_4;
  puStack_7 = auStack_3;
  this_01 = System.dll::System::Diagnostics::Process::Process_GetCurrentProcess((MethodInfo *)0x0);
  if (this_01 == (Process *)0x0) goto code_?;
  hProcess = System.dll::System::Diagnostics::Process::Process_get_Handle(this_01,(MethodInfo *)0x0)
  ;
  bVar8 = CSUACSelfElevation::NativeMethods::NativeMethods_OpenProcessToken
                    (hProcess,8,(SafeTokenHandle **)&pSStack_2,(MethodInfo *)0x0);
  pIVar9 = TypeRef__CSUACSelfElevation__TOKEN_ELEVATION;
  if (bVar8 != 0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pIVar9 != (Il2CppType *)0x0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar10 = FUN_?(pIVar9,1);
      pWVar1 = (Win32Exception *)FUN_?(lVar10 + 0x20);
    }
    if (*(int *)&(TypeInfo__System__Runtime__InteropServices__Marshal->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pWVar1 == (Win32Exception *)0x0) {
      uVar11 = FUN_?(&UNK_?);
      FUN_?(uVar11,0);
code_?:
      uVar11 = func_?(&UNK_?);
      plVar12 = (longlong *)FUN_?(uVar11,0);
code_?:
      FUN_?(plVar12);
code_?:
      FUN_?();
code_?:
      uVar11 = func_?(&TypeInfo__System__ComponentModel__Win32Exception);
      pWVar1 = (Win32Exception *)func_?(uVar11);
      System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor
                (pWVar1,(MethodInfo *)0x0);
      func_?(&MethodInfo__SelfElevator__IsProcessElevated__);
      FUN_?(pWVar1);
code_?:
      uVar11 = func_?(&TypeInfo__System__ComponentModel__Win32Exception);
      pWVar1 = (Win32Exception *)func_?(uVar11);
      System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor
                (pWVar1,(MethodInfo *)0x0);
      uVar11 = func_?(&MethodInfo__SelfElevator__IsProcessElevated__);
      FUN_?(pWVar1,uVar11);
code_?:
      uVar11 = FUN_?(auStack_13,(pWVar1->fields)._._._._className,2);
      uVar11 = func_?(uVar11);
      FUN_?(&puStack_14,&UNK_?,uVar11);
      func_?(auStack_13);
      uVar11 = func_?(&puStack_14);
      uVar11 = FUN_?(0,uVar11);
      FUN_?(uVar11,0);
    }
    else {
      lVar10 = FUN_?((pWVar1->fields)._._._._className,1);
      if (((*(int *)(lVar10 + 0x108) != -1) && ((*(byte *)(lVar10 + 0x135) & 4) == 0)) &&
         (*(char *)((longlong)&((pWVar1->fields)._._._._className)->monitor + 2) != '\x0e')) {
        auStack_3[0] = *(undefined4 *)(lVar10 + 0x108);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Runtime__InteropServices__Marshal);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__System__Runtime__InteropServices__Marshal->_1).field_0x1c == 0) {
          FUN_?();
        }
        lVar10 = GlobalAlloc(0);
        this_00 = pSStack_2;
        uVar15 = auStack_3[0];
        alStack_4[0] = lVar10;
        if (lVar10 != 0) {
          if (pcRam_? == (code *)0x0) {
            uStack_16 = 0xc;
            uStack_17 = 0x13;
            uStack_18 = 0;
            uStack_19 = 1;
            uStack_20 = 0x20;
            uStack_21 = 0;
            pcRam_? = (code *)FUN_?(&puStack_14);
          }
          if (this_00 == (SafeHandle *)0x0) goto code_?;
          abStackX_18[0] = 0;
          mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_DangerousAddRef
                    (this_00,abStackX_18,(MethodInfo *)0x0);
          iVar22 = (*pcRam_?)((this_00->fields).handle,0x14,lVar10,uVar15,auStack_3);
          uVar15 = GetLastError();
          FUN_?(uVar15);
          if (abStackX_18[0] != 0) {
            mscorlib.dll::System::Runtime::InteropServices::SafeHandle::
            SafeHandle_DangerousReleaseInternal(this_00,0,(MethodInfo *)0x0);
          }
          lVar10 = alStack_4[0];
          pIVar9 = TypeRef__CSUACSelfElevation__TOKEN_ELEVATION;
          if (iVar22 != 0) {
            if (*(int *)(lRam_? + 0xe4) == 0) {
              FUN_?();
            }
            mscorlib.dll::System::Type::Type_GetTypeFromHandle
                      ((RuntimeTypeHandle)pIVar9,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__System__Runtime__InteropServices__Marshal->_1).field_0x1c == 0)
            {
              FUN_?();
            }
            plVar12 = (longlong *)FUN_?(lVar10);
            if (plVar12 != (longlong *)0x0) {
              if (*(Il2CppClass **)(*plVar12 + 0x40) ==
                  (TypeInfo__CSUACSelfElevation__TOKEN_ELEVATION->_0).element_class) {
                bVar23 = (int)plVar12[2] != 0;
                uStackX_20 = bVar23;
                FUN_?(&ppSStack_5);
                return bVar23;
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      if ((*(longlong *)(lVar10 + 0x60) == 0) && ((*(byte *)(lVar10 + 0x135) & 0x10) == 0))
      goto code_?;
    }
    uVar11 = FUN_?(&UNK_?);
    FUN_?(uVar11);
  }
  uVar11 = func_?(&TypeInfo__System__ComponentModel__Win32Exception);
  pWVar1 = (Win32Exception *)func_?(uVar11);
  System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor(pWVar1,(MethodInfo *)0x0)
  ;
  uVar11 = func_?(&MethodInfo__SelfElevator__IsProcessElevated__);
  FUN_?(pWVar1,uVar11);
code_?:
  FUN_?();
  FUN_?();
  pcVar24 = (code *)swi(3);
  bVar8 = (*pcVar24)();
  return bVar8;
}


/* Boolean IsUserInAdminGroup() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_IsUserInAdminGroup
               (SelfElevator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Runtime__InteropServices__Marshal);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSStack_1 = (SafeHandle *)0x0;
  lStack_2 = 0;
  pvStack_3 = (void *)0x0;
  puStack_4 = (ulonglong *)0x0;
  auStackX_20[0] = 0;
  uStack_5 = 0;
  ppSStack_6 = &pSStack_1;
  plStack_7 = &lStack_2;
  ppvStack_8 = &pvStack_3;
  ppuStack_9 = &puStack_4;
  this_00 = System.dll::System::Diagnostics::Process::Process_GetCurrentProcess((MethodInfo *)0x0);
  if (this_00 == (Process *)0x0) goto code_?;
  pvVar10 = System.dll::System::Diagnostics::Process::Process_get_Handle(this_00,(MethodInfo *)0x0);
  bVar11 = CSUACSelfElevation::NativeMethods::NativeMethods_OpenProcessToken
                    (pvVar10,10,(SafeTokenHandle **)&pSStack_1,(MethodInfo *)0x0);
  if (bVar11 != 0) {
    pOVar12 = mscorlib.dll::System::Environment::Environment_get_OSVersion((MethodInfo *)0x0);
    if (pOVar12 != (OperatingSystem_1 *)0x0) {
      pVVar13 = (pOVar12->fields)._version;
      if (pVVar13 != (Version *)0x0) {
        if ((pVVar13->fields)._Major < 6) goto code_?;
        auStackX_20[0] = 4;
        if (*(int *)&(TypeInfo__System__Runtime__InteropServices__Marshal->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Runtime__InteropServices__Marshal);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__System__Runtime__InteropServices__Marshal->_1).field_0x1c == 0) {
          FUN_?();
        }
        pvVar10 = (void *)GlobalAlloc(0);
        pSVar14 = pSStack_1;
        uVar15 = auStackX_20[0];
        pvStack_3 = pvVar10;
        if (pvVar10 == (void *)0x0) {
code_?:
          uVar16 = func_?(&TypeInfo__System__ComponentModel__Win32Exception);
          pWVar17 = (Win32Exception *)func_?(uVar16);
          System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor
                    (pWVar17,(MethodInfo *)0x0);
          func_?(&MethodInfo__SelfElevator__IsUserInAdminGroup__);
          FUN_?(pWVar17);
code_?:
          uVar16 = func_?(&UNK_?);
          FUN_?(uVar16);
        }
        else {
          if (pcRam_? == (code *)0x0) {
            uStack_18 = 0xc;
            uStack_19 = 0x13;
            uStack_20 = 0;
            uStack_21 = 1;
            uStack_22 = 0x20;
            uStack_23 = 0;
            pcRam_? = (code *)FUN_?(&puStack_24);
          }
          if (pSVar14 == (SafeHandle *)0x0) {
            uVar16 = func_?(&UNK_?);
            FUN_?(uVar16);
code_?:
            uVar16 = func_?(&UNK_?);
            FUN_?(uVar16);
code_?:
            uVar16 = func_?(&TypeInfo__System__ComponentModel__Win32Exception);
            pWVar17 = (Win32Exception *)func_?(uVar16);
            System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor
                      (pWVar17,(MethodInfo *)0x0);
            func_?(&MethodInfo__SelfElevator__IsUserInAdminGroup__);
            FUN_?(pWVar17);
code_?:
            uVar16 = func_?(&TypeInfo__System__ComponentModel__Win32Exception);
            pWVar17 = (Win32Exception *)func_?(uVar16);
            System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor
                      (pWVar17,(MethodInfo *)0x0);
            func_?(&MethodInfo__SelfElevator__IsUserInAdminGroup__);
            FUN_?(pWVar17);
code_?:
            uVar16 = func_?(&TypeInfo__System__ComponentModel__Win32Exception);
            pWVar17 = (Win32Exception *)func_?(uVar16);
            System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor
                      (pWVar17,(MethodInfo *)0x0);
            func_?(&MethodInfo__SelfElevator__IsUserInAdminGroup__);
            FUN_?(pWVar17);
            goto code_?;
          }
          uStackX_18 = uStackX_18 & 0xffffffffffffff00;
          mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_DangerousAddRef
                    (pSVar14,(bool *)&uStackX_18,(MethodInfo *)0x0);
          iVar25 = (*pcRam_?)((pSVar14->fields).handle,0x12,pvVar10,uVar15,auStackX_20);
          uVar15 = GetLastError();
          FUN_?(uVar15);
          if ((char)uStackX_18 != '\0') {
            mscorlib.dll::System::Runtime::InteropServices::SafeHandle::
            SafeHandle_DangerousReleaseInternal(pSVar14,0,(MethodInfo *)0x0);
          }
          pvVar10 = pvStack_3;
          if (iVar25 == 0) goto code_?;
          if (*(int *)&(TypeInfo__System__Runtime__InteropServices__Marshal->_1).field_0x1c == 0) {
            FUN_?();
          }
          iVar26 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_ReadInt32
                            (pvVar10,(MethodInfo *)0x0);
          if (iVar26 == 3) {
            auStackX_20[0] = 8;
            if (*(int *)&(TypeInfo__System__Runtime__InteropServices__Marshal->_1).field_0x1c == 0)
            {
              FUN_?();
            }
            puStack_4 = mscorlib.dll::System::Runtime::InteropServices::Marshal::
                         Marshal_AllocHGlobal_1(8,(MethodInfo *)0x0);
            pSVar14 = pSStack_1;
            if (puStack_4 == (ulonglong *)0x0) goto code_?;
            if (pcRam_? == (code *)0x0) {
              uStack_18 = 0xc;
              uStack_19 = 0x13;
              uStack_20 = 0;
              uStack_21 = 1;
              uStack_22 = 0x20;
              uStack_23 = 0;
              pcRam_? = (code *)FUN_?(&puStack_24);
            }
            if (pSVar14 == (SafeHandle *)0x0) goto code_?;
            uStackX_18 = uStackX_18 & 0xffffffffffffff00;
            mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_DangerousAddRef
                      (pSVar14,(bool *)&uStackX_18,(MethodInfo *)0x0);
            iVar25 = (*pcRam_?)((pSVar14->fields).handle);
            uVar15 = GetLastError();
            FUN_?(uVar15);
            if ((char)uStackX_18 != '\0') {
              mscorlib.dll::System::Runtime::InteropServices::SafeHandle::
              SafeHandle_DangerousReleaseInternal(pSVar14,0,(MethodInfo *)0x0);
            }
            puVar27 = puStack_4;
            if (iVar25 == 0) goto code_?;
            if (*(int *)&(TypeInfo__System__Runtime__InteropServices__Marshal->_1).field_0x1c == 0)
            {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Runtime__InteropServices__Marshal);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__System__Runtime__InteropServices__Marshal->_1).field_0x1c == 0)
            {
              FUN_?();
            }
            uStackX_18 = 0;
            if (((ulonglong)puVar27 & 7) == 0) {
              uVar28 = *puVar27;
            }
            else {
              mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                        ((uint8_t *)&uStackX_18,(uint8_t *)puVar27,8,(MethodInfo *)0x0);
              uVar28 = uStackX_18;
            }
            lVar29 = FUN_?(TypeInfo__CSUACSelfElevation__SafeTokenHandle);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__GC);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            *(undefined4 *)(lVar29 + 0x18) = 4;
            *(undefined2 *)(lVar29 + 0x1c) = 0x101;
            *(ulonglong *)(lVar29 + 0x10) = uVar28;
            lStack_2 = lVar29;
          }
code_?:
          pSVar14 = pSStack_1;
          if (lStack_2 != 0) {
code_?:
            FUN_?(&ppSStack_6);
            return 0;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CSUACSelfElevation__SafeTokenHandle);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pcRam_? == (code *)0x0) {
            uStack_18 = 0xc;
            uStack_19 = 0xe;
            uStack_20 = 0;
            uStack_21 = 1;
            uStack_22 = 0x14;
            uStack_23 = 0;
            pcRam_? = (code *)FUN_?(&puStack_24);
          }
          if (pSVar14 == (SafeHandle *)0x0) goto code_?;
          uStackX_18 = uStackX_18 & 0xffffffffffffff00;
          mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_DangerousAddRef
                    (pSVar14,(bool *)&uStackX_18,(MethodInfo *)0x0);
          uStack_30 = 0;
          iVar25 = (*pcRam_?)((pSVar14->fields).handle);
          uVar15 = GetLastError();
          FUN_?(uVar15);
          if ((char)uStackX_18 != '\0') {
            mscorlib.dll::System::Runtime::InteropServices::SafeHandle::
            SafeHandle_DangerousReleaseInternal(pSVar14,0,(MethodInfo *)0x0);
          }
          lVar29 = FUN_?(TypeInfo__CSUACSelfElevation__SafeTokenHandle);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__GC);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          *(undefined8 *)(lVar29 + 0x10) = 0;
          *(undefined4 *)(lVar29 + 0x18) = 4;
          *(undefined2 *)(lVar29 + 0x1c) = 0x101;
          *(undefined8 *)(lVar29 + 0x10) = uStack_30;
          if (iRam_? != 0) {
            uVar31 = (uint)((ulonglong)&lStack_2 >> 0xc);
            puVar27 = (ulonglong *)((ulonglong)((uVar31 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar32 = *puVar27;
              LOCK();
              uVar28 = *puVar27;
              if (uVar32 == uVar28) {
                *puVar27 = uVar32 | 1L << (uVar31 & 0x3f);
              }
              UNLOCK();
            } while (uVar32 != uVar28);
          }
          lStack_2 = lVar29;
          if (iVar25 != 0) goto code_?;
        }
        uVar16 = func_?(&TypeInfo__System__ComponentModel__Win32Exception);
        pWVar17 = (Win32Exception *)func_?(uVar16);
        System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor
                  (pWVar17,(MethodInfo *)0x0);
        func_?(&MethodInfo__SelfElevator__IsUserInAdminGroup__);
        FUN_?(pWVar17);
      }
      FUN_?();
    }
    FUN_?();
  }
  uVar16 = func_?(&TypeInfo__System__ComponentModel__Win32Exception);
  pWVar17 = (Win32Exception *)func_?(uVar16);
  System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor
            (pWVar17,(MethodInfo *)0x0);
  uVar16 = func_?(&MethodInfo__SelfElevator__IsUserInAdminGroup__);
  FUN_?(pWVar17,uVar16);
code_?:
  FUN_?();
  FUN_?();
  pcVar33 = (code *)swi(3);
  bVar11 = (*pcVar33)();
  return bVar11;
}


/* SelfElevator() */

void Assembly-CSharp.dll::SelfElevator::SelfElevator__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Collections__BitArray);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SelfElevator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (BitArray *)FUN_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_1(this,6,0,(MethodInfo *)0x0);
  TypeInfo__SelfElevator->static_fields->bits = this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__SelfElevator->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  TypeInfo__SelfElevator->static_fields->integrityLevel = 5;
  return;
}


/* SelfElevator() */

void Assembly-CSharp.dll::SelfElevator::SelfElevator__ctor(SelfElevator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SelfElevator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OS_version_is_to_old_to_make_use);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32_SelfElevator_ApplicationIntegrityLevel_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>
                         );
  pEVar1 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32]::
            EqualityComparer_1_System_Int32__get_Default
                      (MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Dictionary__
                       ->klass->rgctx_data->method->klass->rgctx_data[3].method);
  if ((pEVar1 != (EqualityComparer_1_System_Int32_ *)0x0) &&
     ((this_01->fields)._comparer = (IEqualityComparer_1_System_Int32_ *)0x0,
     iRam_? != 0)) {
    uVar2 = (uint)((ulonglong)&(this_01->fields)._comparer >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pMVar7 = (MethodInfo *)0xADDR;
  if (this_01 == (Dictionary_2_System_Int32_SelfElevator_ApplicationIntegrityLevel_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    uVar8 = func_?(pMVar7->klass->rgctx_data,0xe);
    key_00 = (Object *)func_?(uVar8);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              (key_00,(MethodInfo *)0x0);
code_?:
    FUN_?();
  }
  else {
    uVar8 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32Enum]::
    Dictionary_2_System_Int32_System_Int32Enum__TryInsert
              ((Dictionary_2_System_Int32_System_Int32Enum_ *)this_01,0,0,
               (InsertionBehavior__Enum)uVar8,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
               ->klass->rgctx_data[0x22].method);
    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32Enum]::
    Dictionary_2_System_Int32_System_Int32Enum__TryInsert
              ((Dictionary_2_System_Int32_System_Int32Enum_ *)this_01,0x1000,1,
               (InsertionBehavior__Enum)uVar8,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
               ->klass->rgctx_data[0x22].method);
    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32Enum]::
    Dictionary_2_System_Int32_System_Int32Enum__TryInsert
              ((Dictionary_2_System_Int32_System_Int32Enum_ *)this_01,0x2000,2,
               (InsertionBehavior__Enum)uVar8,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
               ->klass->rgctx_data[0x22].method);
    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32Enum]::
    Dictionary_2_System_Int32_System_Int32Enum__TryInsert
              ((Dictionary_2_System_Int32_System_Int32Enum_ *)this_01,0x3000,3,
               (InsertionBehavior__Enum)uVar8,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
               ->klass->rgctx_data[0x22].method);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32Enum]::
    Dictionary_2_System_Int32_System_Int32Enum__TryInsert
              ((Dictionary_2_System_Int32_System_Int32Enum_ *)this_01,0x4000,4,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
               ->klass->rgctx_data[0x22].method);
    (this->fields).RID_to_ApplicationIntegrityLevel = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    bVar9 = SelfElevator_IsUserInAdminGroup(this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__SelfElevator);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
      FUN_?();
    }
    pBVar10 = TypeInfo__SelfElevator->static_fields->bits;
    if (pBVar10 == (BitArray *)0x0) goto code_?;
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar10,1,bVar9,(MethodInfo *)0x0);
    pBVar10 = TypeInfo__SelfElevator->static_fields->bits;
    if (pBVar10 == (BitArray *)0x0) goto code_?;
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar10,0,1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__SelfElevator);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
      FUN_?();
    }
    pBVar10 = TypeInfo__SelfElevator->static_fields->bits;
    if (pBVar10 == (BitArray *)0x0) goto code_?;
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar10,3,0,(MethodInfo *)0x0);
    pBVar10 = TypeInfo__SelfElevator->static_fields->bits;
    if (pBVar10 == (BitArray *)0x0) goto code_?;
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar10,2,1,(MethodInfo *)0x0);
    pOVar11 = mscorlib.dll::System::Environment::Environment_get_OSVersion((MethodInfo *)0x0);
    if ((pOVar11 == (OperatingSystem_1 *)0x0) ||
       (pVVar12 = (pOVar11->fields)._version, pVVar12 == (Version *)0x0)) goto code_?;
    if ((pVVar12->fields)._Major < 6) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_OS_version_is_to_old_to_make_use,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,StringLiteral_OS_version_is_to_old_to_make_use,
                 (MethodInfo *)0x0);
      return;
    }
    bVar9 = SelfElevator_IsProcessElevated(this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__SelfElevator);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
      FUN_?();
    }
    pBVar10 = TypeInfo__SelfElevator->static_fields->bits;
    if (pBVar10 == (BitArray *)0x0) goto code_?;
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar10,5,bVar9,(MethodInfo *)0x0);
    pBVar10 = TypeInfo__SelfElevator->static_fields->bits;
    if (pBVar10 == (BitArray *)0x0) goto code_?;
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar10,4,1,(MethodInfo *)0x0);
    key = SelfElevator_GetProcessIntegrityLevel(this,(MethodInfo *)0x0);
    pMVar7 = 
    MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__get_Item_int_
    ;
    this_00 = (Dictionary_2_System_Int32_System_Single_ *)
              (this->fields).RID_to_ApplicationIntegrityLevel;
    if (this_00 == (Dictionary_2_System_Int32_System_Single_ *)0x0) goto code_?;
    uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
             ::Dictionary_2_System_Int32_System_Single__FindEntry
                       (this_00,key,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__get_Item_int_
                        ->klass->rgctx_data[0x21].method);
    if ((int)uVar2 < 0) goto code_?;
    pDVar13 = (this_00->fields)._entries;
    if (pDVar13 != (Dictionary_2_TKey_TValue_Entry_System_Int32_System_Single___Array *)0x0) {
      if (uVar2 < (uint)pDVar13->max_length) {
        fVar14 = pDVar13->vector[(int)uVar2].value;
        if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__SelfElevator);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
          FUN_?();
        }
        TypeInfo__SelfElevator->static_fields->integrityLevel = (int32_t)fVar14;
        return;
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean get_InAdminGroup() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_get_InAdminGroup(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SelfElevator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SelfElevator);
  }
  pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
  if (pBVar1 == (BitArray *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pBVar1->fields).m_length < 2) {
    auStackX_10[0] = 1;
    actualValue = (Object *)func_?(uRam_?,auStackX_10,0);
    uVar4 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this = (ArgumentOutOfRangeException *)func_?(uVar4);
    message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
    paramName = (String *)func_?(&StringLiteral_index);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
              (this,paramName,actualValue,message,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__System__Collections__BitArray__Get_int_);
    FUN_?(this,uVar4);
  }
  else {
    pIVar5 = (pBVar1->fields).m_array;
    if (pIVar5 == (Int32__Array *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if ((int)pIVar5->max_length != 0) {
      return (pIVar5->vector[0] & 2U) != 0;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_InAdminGroupSet() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_get_InAdminGroupSet(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SelfElevator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SelfElevator);
  }
  pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
  if (pBVar1 == (BitArray *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pBVar1->fields).m_length < 1) {
    auStackX_10[0] = 0;
    actualValue = (Object *)func_?(uRam_?,auStackX_10,0);
    uVar4 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this = (ArgumentOutOfRangeException *)func_?(uVar4);
    message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
    paramName = (String *)func_?(&StringLiteral_index);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
              (this,paramName,actualValue,message,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__System__Collections__BitArray__Get_int_);
    FUN_?(this,uVar4);
  }
  else {
    pIVar5 = (pBVar1->fields).m_array;
    if (pIVar5 == (Int32__Array *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if ((int)pIVar5->max_length != 0) {
      return (pIVar5->vector[0] & 1U) != 0;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* SelfElevator+ApplicationIntegrityLevel get_IntegrityLevel() */

SelfElevator_ApplicationIntegrityLevel__Enum
Assembly-CSharp.dll::SelfElevator::SelfElevator_get_IntegrityLevel(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SelfElevator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SelfElevator);
  }
  return TypeInfo__SelfElevator->static_fields->integrityLevel;
}


/* Boolean get_IsElevated() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_get_IsElevated(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SelfElevator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SelfElevator);
  }
  pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
  if (pBVar1 == (BitArray *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pBVar1->fields).m_length < 6) {
    auStackX_10[0] = 5;
    actualValue = (Object *)func_?(uRam_?,auStackX_10,0);
    uVar4 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this = (ArgumentOutOfRangeException *)func_?(uVar4);
    message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
    paramName = (String *)func_?(&StringLiteral_index);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
              (this,paramName,actualValue,message,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__System__Collections__BitArray__Get_int_);
    FUN_?(this,uVar4);
  }
  else {
    pIVar5 = (pBVar1->fields).m_array;
    if (pIVar5 == (Int32__Array *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if ((int)pIVar5->max_length != 0) {
      return (pIVar5->vector[0] & 0x20U) != 0;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsElevatedSet() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_get_IsElevatedSet(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SelfElevator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SelfElevator);
  }
  pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
  if (pBVar1 == (BitArray *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pBVar1->fields).m_length < 5) {
    auStackX_10[0] = 4;
    actualValue = (Object *)func_?(uRam_?,auStackX_10,0);
    uVar4 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this = (ArgumentOutOfRangeException *)func_?(uVar4);
    message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
    paramName = (String *)func_?(&StringLiteral_index);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
              (this,paramName,actualValue,message,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__System__Collections__BitArray__Get_int_);
    FUN_?(this,uVar4);
  }
  else {
    pIVar5 = (pBVar1->fields).m_array;
    if (pIVar5 == (Int32__Array *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if ((int)pIVar5->max_length != 0) {
      return (pIVar5->vector[0] & 0x10U) != 0;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsRunningAsAdmin() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_get_IsRunningAsAdmin(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SelfElevator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SelfElevator);
  }
  pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
  if (pBVar1 == (BitArray *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pBVar1->fields).m_length < 4) {
    auStackX_10[0] = 3;
    actualValue = (Object *)func_?(uRam_?,auStackX_10,0);
    uVar4 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this = (ArgumentOutOfRangeException *)func_?(uVar4);
    message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
    paramName = (String *)func_?(&StringLiteral_index);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
              (this,paramName,actualValue,message,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__System__Collections__BitArray__Get_int_);
    FUN_?(this,uVar4);
  }
  else {
    pIVar5 = (pBVar1->fields).m_array;
    if (pIVar5 == (Int32__Array *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if ((int)pIVar5->max_length != 0) {
      return (pIVar5->vector[0] & 8U) != 0;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsRunningAsAdminSet() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_get_IsRunningAsAdminSet(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SelfElevator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SelfElevator);
  }
  pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
  if (pBVar1 == (BitArray *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pBVar1->fields).m_length < 3) {
    auStackX_10[0] = 2;
    actualValue = (Object *)func_?(uRam_?,auStackX_10,0);
    uVar4 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this = (ArgumentOutOfRangeException *)func_?(uVar4);
    message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
    paramName = (String *)func_?(&StringLiteral_index);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
              (this,paramName,actualValue,message,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__System__Collections__BitArray__Get_int_);
    FUN_?(this,uVar4);
  }
  else {
    pIVar5 = (pBVar1->fields).m_array;
    if (pIVar5 == (Int32__Array *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if ((int)pIVar5->max_length != 0) {
      return (pIVar5->vector[0] & 4U) != 0;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void set_InAdminGroup(Boolean) */

void Assembly-CSharp.dll::SelfElevator::SelfElevator_set_InAdminGroup(bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SelfElevator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SelfElevator);
  }
  pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
  if (pBVar1 != (BitArray *)0x0) {
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar1,1,value,(MethodInfo *)0x0);
    pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
    if (pBVar1 != (BitArray *)0x0) {
      if ((pBVar1->fields).m_length < 1) {
        auStackX_10[0] = 0;
        actualValue = (Object *)func_?(uRam_?,auStackX_10,1,0);
        uVar2 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
        this = (ArgumentOutOfRangeException *)func_?(uVar2);
        message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
        paramName = (String *)func_?(&StringLiteral_index);
        mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
                  (this,paramName,actualValue,message,(MethodInfo *)0x0);
        uVar2 = func_?(&MethodInfo__System__Collections__BitArray__Set_int__bool_);
        FUN_?(this,uVar2);
      }
      else {
        pIVar3 = (pBVar1->fields).m_array;
        if (pIVar3 == (Int32__Array *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((int)pIVar3->max_length != 0) {
          pIVar3->vector[0] = pIVar3->vector[0] | 1;
          piVar5 = &(pBVar1->fields)._version;
          *piVar5 = *piVar5 + 1;
          return;
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_IntegrityLevel(SelfElevator+ApplicationIntegrityLevel) */

void Assembly-CSharp.dll::SelfElevator::SelfElevator_set_IntegrityLevel
               (SelfElevator_ApplicationIntegrityLevel__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SelfElevator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SelfElevator);
  }
  TypeInfo__SelfElevator->static_fields->integrityLevel = value;
  return;
}


/* Void set_IsElevated(Boolean) */

void Assembly-CSharp.dll::SelfElevator::SelfElevator_set_IsElevated(bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SelfElevator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SelfElevator);
  }
  pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
  if (pBVar1 != (BitArray *)0x0) {
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar1,5,value,(MethodInfo *)0x0);
    pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
    if (pBVar1 != (BitArray *)0x0) {
      if ((pBVar1->fields).m_length < 5) {
        auStackX_10[0] = 4;
        actualValue = (Object *)func_?(uRam_?,auStackX_10,1,0);
        uVar2 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
        this = (ArgumentOutOfRangeException *)func_?(uVar2);
        message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
        paramName = (String *)func_?(&StringLiteral_index);
        mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
                  (this,paramName,actualValue,message,(MethodInfo *)0x0);
        uVar2 = func_?(&MethodInfo__System__Collections__BitArray__Set_int__bool_);
        FUN_?(this,uVar2);
      }
      else {
        pIVar3 = (pBVar1->fields).m_array;
        if (pIVar3 == (Int32__Array *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((int)pIVar3->max_length != 0) {
          pIVar3->vector[0] = pIVar3->vector[0] | 0x10;
          piVar5 = &(pBVar1->fields)._version;
          *piVar5 = *piVar5 + 1;
          return;
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_IsRunningAsAdmin(Boolean) */

void Assembly-CSharp.dll::SelfElevator::SelfElevator_set_IsRunningAsAdmin
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SelfElevator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SelfElevator->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SelfElevator);
  }
  pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
  if (pBVar1 != (BitArray *)0x0) {
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar1,3,value,(MethodInfo *)0x0);
    pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
    if (pBVar1 != (BitArray *)0x0) {
      if ((pBVar1->fields).m_length < 3) {
        auStackX_10[0] = 2;
        actualValue = (Object *)func_?(uRam_?,auStackX_10,1,0);
        uVar2 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
        this = (ArgumentOutOfRangeException *)func_?(uVar2);
        message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
        paramName = (String *)func_?(&StringLiteral_index);
        mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
                  (this,paramName,actualValue,message,(MethodInfo *)0x0);
        uVar2 = func_?(&MethodInfo__System__Collections__BitArray__Set_int__bool_);
        FUN_?(this,uVar2);
      }
      else {
        pIVar3 = (pBVar1->fields).m_array;
        if (pIVar3 == (Int32__Array *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((int)pIVar3->max_length != 0) {
          pIVar3->vector[0] = pIVar3->vector[0] | 4;
          piVar5 = &(pBVar1->fields)._version;
          *piVar5 = *piVar5 + 1;
          return;
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

