
/* Void Elevate() */

void Assembly-CSharp.dll::SelfElevator::SelfElevator_Elevate(SelfElevator *this,MethodInfo *method)

{
  puStack_1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_1;
  puStack_2 = &stack0xffffffd8;
  puVar3 = &stack0xffffffd8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Diagnostics__ProcessStartInfo);
    func_?(&StringLiteral_runas);
    func_?(&StringLiteral_The_process_is_already_running_a);
    cRam_? = '\x01';
    puVar3 = puStack_2;
  }
  puStack_2 = puVar3;
  this_00 = (ProcessStartInfo *)func_?(TypeInfo__System__Diagnostics__ProcessStartInfo);
  if (this_00 != (ProcessStartInfo *)0x0) {
    System.dll::System::Diagnostics::ProcessStartInfo::ProcessStartInfo__ctor
              (this_00,(MethodInfo *)0x0);
    (this_00->fields).useShellExecute = 1;
    pSVar4 = mscorlib.dll::System::Environment::Environment_get_CurrentDirectory((MethodInfo *)0x0);
    (this_00->fields).directory = pSVar4;
    func_?(&(this_00->fields).directory,pSVar4);
    this_01 = System.dll::System::Diagnostics::Process::Process_GetCurrentProcess((MethodInfo *)0x0)
    ;
    if (this_01 != (Process *)0x0) {
      pPVar5 = System.dll::System::Diagnostics::Process::Process_get_MainModule
                         (this_01,(MethodInfo *)0x0);
      if ((pPVar5 != (ProcessModule *)0x0) &&
         (pSVar4 = (pPVar5->fields).filename, unaff_EDI = (undefined4 *)0x0, pSVar4 != (String *)0x0
         )) {
        startIndex = mscorlib.dll::System::String::String_LastIndexOf(pSVar4,0x5c,(MethodInfo *)0x0)
        ;
        pSVar4 = mscorlib.dll::System::String::String_Substring(pSVar4,startIndex,(MethodInfo *)0x0)
        ;
        (this_00->fields).fileName = pSVar4;
        func_?(&this_00->fields,pSVar4);
        pSVar4 = StringLiteral_runas;
        (this_00->fields).verb = StringLiteral_runas;
        func_?(&(this_00->fields).verb,pSVar4);
        System.dll::System::Diagnostics::Process::Process_Start_1(this_00,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Application::Application_Quit_1((MethodInfo *)0x0);
        *unaff_FS_OFFSET = puStack_1;
        return;
      }
    }
  }
  func_?();
  uStack_6 = *unaff_EDI;
  func_?(&uStack_6,&UNK_?);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* String GetExecutableName() */

String * Assembly-CSharp.dll::SelfElevator::SelfElevator_GetExecutableName
                   (SelfElevator *this,MethodInfo *method)

{
  this_00 = System.dll::System::Diagnostics::Process::Process_GetCurrentProcess((MethodInfo *)0x0);
  if (this_00 != (Process *)0x0) {
    pPVar1 = System.dll::System::Diagnostics::Process::Process_get_MainModule
                       (this_00,(MethodInfo *)0x0);
    if (pPVar1 != (ProcessModule *)0x0) {
      pSVar2 = (pPVar1->fields).filename;
      if (pSVar2 != (String *)0x0) {
        startIndex = mscorlib.dll::System::String::String_LastIndexOf(pSVar2,0x5c,(MethodInfo *)0x0)
        ;
        pSVar2 = mscorlib.dll::System::String::String_Substring(pSVar2,startIndex,(MethodInfo *)0x0)
        ;
        return pSVar2;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* Int32 GetProcessIntegrityLevel() */

int32_t Assembly-CSharp.dll::SelfElevator::SelfElevator_GetProcessIntegrityLevel
                  (SelfElevator *this,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IntPtr);
    func_?(&TypeInfo__System__Runtime__InteropServices__Marshal);
    func_?(&TypeRef__CSUACSelfElevation__TOKEN_MANDATORY_LABEL);
    func_?(&TypeInfo__CSUACSelfElevation__TOKEN_MANDATORY_LABEL);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  hToken = (SafeTokenHandle *)0x0;
  iVar1 = 0;
  this_00 = System.dll::System::Diagnostics::Process::Process_GetCurrentProcess((MethodInfo *)0x0);
  if (this_00 != (Process *)0x0) {
    pvVar2 = System.dll::System::Diagnostics::Process::Process_get_Handle(this_00,(MethodInfo *)0x0)
    ;
    bVar3 = CSUACSelfElevation::NativeMethods::NativeMethods_OpenProcessToken
                      (pvVar2,8,(SafeTokenHandle **)&stack0xffffffe4,(MethodInfo *)0x0);
    if (bVar3 == 0) goto code_?;
    bVar3 = CSUACSelfElevation::NativeMethods::NativeMethods_GetTokenInformation
                      (hToken,TOKEN_INFORMATION_CLASS__Enum_TokenIntegrityLevel,
                       TypeInfo__System__IntPtr->static_fields->Zero,0,(int32_t *)&stack0xffffffe8,
                       (MethodInfo *)0x0);
    if (bVar3 == 0) {
      if ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      error = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_GetLastWin32Error
                        ((MethodInfo *)0x0);
      if (error == 0x7a) goto code_?;
      func_?();
      pWVar4 = (Win32Exception *)func_?();
      func_?();
      System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor_1
                (pWVar4,error,(MethodInfo *)0x0);
      func_?();
      func_?();
    }
    else {
code_?:
      if ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      left = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_AllocHGlobal_1
                       (iVar1,(MethodInfo *)0x0);
      iVar1 = 0;
      bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                        (left,TypeInfo__System__IntPtr->static_fields->Zero,(MethodInfo *)0x0);
      if (bVar3 != 0) goto code_?;
      returnLength = (int32_t *)&stack0xffffffe8;
      pvVar2 = (void *)0x19;
      bVar3 = CSUACSelfElevation::NativeMethods::NativeMethods_GetTokenInformation
                        ((SafeTokenHandle *)0x19,TOKEN_INFORMATION_CLASS__Enum_TokenIntegrityLevel,
                         left,iVar1,returnLength,(MethodInfo *)0x0);
      handle = TypeRef__CSUACSelfElevation__TOKEN_MANDATORY_LABEL;
      if (bVar3 == 0) goto code_?;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      structureType =
           mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      if ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      pOVar5 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_PtrToStructure
                         (pvVar2,structureType,(MethodInfo *)0x0);
      if (pOVar5 == (Object *)0x0) goto code_?;
      if ((pOVar5->klass->_0).element_class ==
          (TypeInfo__CSUACSelfElevation__TOKEN_MANDATORY_LABEL->_0).element_class) {
        puVar6 = (undefined4 *)func_?();
        pvVar2 = CSUACSelfElevation::NativeMethods::NativeMethods_GetSidSubAuthority
                           ((void *)*puVar6,0,(MethodInfo *)0x0);
        iVar1 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_ReadInt32
                          (pvVar2,(MethodInfo *)0x0);
        func_?();
        *unaff_FS_OFFSET = returnLength;
        return iVar1;
      }
    }
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  pWVar4 = (Win32Exception *)func_?();
  func_?();
  System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor(pWVar4,(MethodInfo *)0x0)
  ;
  func_?();
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  iVar1 = (*pcVar7)();
  return iVar1;
}


/* Boolean IsProcessElevated() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_IsProcessElevated
               (SelfElevator *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IntPtr);
    func_?(&TypeInfo__System__Runtime__InteropServices__Marshal);
    func_?(&TypeRef__CSUACSelfElevation__TOKEN_ELEVATION);
    func_?(&TypeInfo__CSUACSelfElevation__TOKEN_ELEVATION);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pTStack_6 = (TOKEN_ELEVATION__Class *)0x0;
  iStack_7 = 0;
  uStack_8 = 0;
  ppOStack_9 = TypeInfo__System__IntPtr->static_fields->Zero;
  uStack_1 = 1;
  this_00 = System.dll::System::Diagnostics::Process::Process_GetCurrentProcess((MethodInfo *)0x0);
  if (this_00 != (Process *)0x0) {
    hProcess = System.dll::System::Diagnostics::Process::Process_get_Handle
                         (this_00,(MethodInfo *)0x0);
    bVar10 = CSUACSelfElevation::NativeMethods::NativeMethods_OpenProcessToken
                      (hProcess,8,(SafeTokenHandle **)&pTStack_6,(MethodInfo *)0x0);
    pIVar11 = TypeRef__CSUACSelfElevation__TOKEN_ELEVATION;
    if (bVar10 == 0) goto code_?;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar12 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar11,(MethodInfo *)0x0);
    if ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iStack_7 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_SizeOf
                          (pTVar12,(MethodInfo *)0x0);
    ppOStack_9 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_AllocHGlobal_1
                            (iStack_7,(MethodInfo *)0x0);
    bVar10 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      (ppOStack_9,TypeInfo__System__IntPtr->static_fields->Zero,(MethodInfo *)0x0);
    if (bVar10 != 0) goto code_?;
    bVar10 = CSUACSelfElevation::NativeMethods::NativeMethods_GetTokenInformation
                      ((SafeTokenHandle *)pTStack_6,TOKEN_INFORMATION_CLASS__Enum_TokenElevation,
                       ppOStack_9,iStack_7,&iStack_7,(MethodInfo *)0x0);
    ptr = ppOStack_9;
    pIVar11 = TypeRef__CSUACSelfElevation__TOKEN_ELEVATION;
    if (bVar10 == 0) goto code_?;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar12 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar11,(MethodInfo *)0x0);
    if ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTStack_6 = (TOKEN_ELEVATION__Class *)
                 mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_PtrToStructure
                           (ptr,pTVar12,(MethodInfo *)0x0);
    if (pTStack_6 != (TOKEN_ELEVATION__Class *)0x0) {
      if ((((Object__Class *)(pTStack_6->_0).image)->_0).element_class ==
          (TypeInfo__CSUACSelfElevation__TOKEN_ELEVATION->_0).element_class) {
        piVar13 = (int *)func_?();
        uStack_1 = 0xffffffff;
        iVar14 = *piVar13;
        uStack_8 = iVar14 != 0;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return iVar14 != 0;
      }
      pTStack_6 = TypeInfo__CSUACSelfElevation__TOKEN_ELEVATION;
      func_?();
    }
  }
  func_?();
code_?:
  func_?();
  this_01 = (Win32Exception *)func_?();
  func_?();
  System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor
            (this_01,(MethodInfo *)0x0);
  func_?();
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  bVar10 = (*pcVar15)();
  return bVar10;
}


/* Boolean IsUserInAdminGroup() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_IsUserInAdminGroup
               (SelfElevator *this,MethodInfo *method)

{
  ppIStack_1 = (Il2CppClass **)0xffffffff;
  ppIStack_2 = (Il2CppClass **)&DAT_?;
  ppMStack_3 = (MethodInfo **)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &ppMStack_3;
  pMStack_4 = (Marshal__Class *)&stack0xffffffa4;
  pMVar5 = (Marshal__Class *)&stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IntPtr);
    func_?(&TypeInfo__System__Runtime__InteropServices__Marshal);
    func_?(&TypeInfo__CSUACSelfElevation__SafeTokenHandle);
    cRam_? = '\x01';
    pMVar5 = pMStack_4;
  }
  pMStack_4 = pMVar5;
  pSStack_6 = (SafeTokenHandle__Class *)0x0;
  this_02 = (SafeTokenHandle *)0x0;
  pEStack_7 = (EventInfo *)0x0;
  ppIStack_1 = (Il2CppClass **)0x1;
  this_00 = System.dll::System::Diagnostics::Process::Process_GetCurrentProcess((MethodInfo *)0x0);
  if (this_00 != (Process *)0x0) {
    pvVar8 = System.dll::System::Diagnostics::Process::Process_get_Handle(this_00,(MethodInfo *)0x0)
    ;
    bVar9 = CSUACSelfElevation::NativeMethods::NativeMethods_OpenProcessToken
                      (pvVar8,10,(SafeTokenHandle **)&pSStack_6,(MethodInfo *)0x0);
    if (bVar9 == 0) goto code_?;
    pOVar10 = mscorlib.dll::System::Environment::Environment_get_OSVersion((MethodInfo *)0x0);
    if ((pOVar10 != (OperatingSystem_1 *)0x0) &&
       (pVVar11 = (pOVar10->fields)._version, pVVar11 != (Version *)0x0)) {
      if (5 < (pVVar11->fields)._Major) {
        pEStack_7 = (EventInfo *)0x4;
        if ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        left = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_AllocHGlobal_1
                         (4,(MethodInfo *)0x0);
        bVar9 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                          (left,TypeInfo__System__IntPtr->static_fields->Zero,(MethodInfo *)0x0);
        if ((bVar9 != 0) ||
           (bVar9 = CSUACSelfElevation::NativeMethods::NativeMethods_GetTokenInformation
                              ((SafeTokenHandle *)pSStack_6,
                               TOKEN_INFORMATION_CLASS__Enum_TokenElevationType,left,
                               (int32_t)pEStack_7,(int32_t *)&pEStack_7,(MethodInfo *)0x0),
           bVar9 == 0)) goto code_?;
        if ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_finished_or_no_cctor ==
            0) {
          pMStack_4 = TypeInfo__System__Runtime__InteropServices__Marshal;
          func_?();
        }
        iVar12 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_ReadInt32
                          (left,(MethodInfo *)0x0);
        if (iVar12 == 3) {
          cb = (EventInfo *)
               UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
               UnsafeUtility_SizeOf_10((MethodInfo *)0x0);
          pEStack_7 = cb;
          if ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_finished_or_no_cctor
              == 0) {
            func_?();
          }
          left_00 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_AllocHGlobal_1
                              ((int32_t)cb,(MethodInfo *)0x0);
          bVar9 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                            ((Object **)left_00,TypeInfo__System__IntPtr->static_fields->Zero,
                             (MethodInfo *)0x0);
          if ((bVar9 != 0) ||
             (bVar9 = CSUACSelfElevation::NativeMethods::NativeMethods_GetTokenInformation
                                ((SafeTokenHandle *)pSStack_6,
                                 TOKEN_INFORMATION_CLASS__Enum_TokenLinkedToken,left_00,
                                 (int32_t)pEStack_7,(int32_t *)&pEStack_7,(MethodInfo *)0x0),
             bVar9 == 0)) goto code_?;
          if ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_finished_or_no_cctor
              == 0) {
            func_?();
          }
          pvVar8 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_ReadIntPtr
                             (left_00,(MethodInfo *)0x0);
          pSStack_6 = TypeInfo__CSUACSelfElevation__SafeTokenHandle;
          this_02 = (SafeTokenHandle *)func_?();
          if (this_02 == (SafeTokenHandle *)0x0) goto code_?;
          System.dll::Microsoft::Win32::SafeHandles::SafeProcessHandle::SafeProcessHandle__ctor
                    ((SafeProcessHandle *)this_02,pvVar8,(MethodInfo *)0x0);
        }
      }
      if ((this_02 != (SafeTokenHandle *)0x0) ||
         (bVar9 = CSUACSelfElevation::NativeMethods::NativeMethods_DuplicateToken
                            ((SafeTokenHandle *)pSStack_6,
                             SECURITY_IMPERSONATION_LEVEL__Enum_SecurityIdentification,
                             (SafeTokenHandle **)&stack0xffffffd8,(MethodInfo *)0x0), bVar9 != 0)) {
        ppIStack_1 = (Il2CppClass **)0xffffffff;
        func_?();
        *unaff_FS_OFFSET = ppMStack_3;
        return 0;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  this_01 = (Win32Exception *)func_?();
  func_?();
  System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor
            (this_01,(MethodInfo *)0x0);
  pSStack_6 = (SafeTokenHandle__Class *)&MethodInfo__SelfElevator__IsUserInAdminGroup__;
  pSStack_6 = (SafeTokenHandle__Class *)func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  bVar9 = (*pcVar13)();
  return bVar9;
}


/* SelfElevator() */

void Assembly-CSharp.dll::SelfElevator::SelfElevator__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__BitArray);
    func_?(&TypeInfo__SelfElevator);
    cRam_? = '\x01';
  }
  this = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
  if (this != (BitArray *)0x0) {
    mscorlib.dll::System::Collections::BitArray::BitArray__ctor(this,6,(MethodInfo *)0x0);
    TypeInfo__SelfElevator->static_fields->bits = this;
    func_?(TypeInfo__SelfElevator->static_fields,this);
    TypeInfo__SelfElevator->static_fields->integrityLevel = 5;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* SelfElevator() */

void Assembly-CSharp.dll::SelfElevator::SelfElevator__ctor(SelfElevator *this,MethodInfo *method)

{
  puStack_1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_1;
  pSStack_2 = (SelfElevator__Class *)&stack0xffffffbc;
  pSVar3 = (SelfElevator__Class *)&stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__get_Item_int_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>
                   );
    func_?(&TypeInfo__SelfElevator);
    func_?(&StringLiteral_OS_version_is_to_old_to_make_use);
    cRam_? = '\x01';
    pSVar3 = pSStack_2;
  }
  pSStack_2 = pSVar3;
  this_01 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>
                           );
  if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Dictionary__
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_01,(Object *)0x0,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_01,(Object *)0x1000,(Object *)0x1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_01,(Object *)0x2000,(Object *)0x2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_01,(Object *)0x3000,(Object *)0x3,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_01,(Object *)0x4000,(Object *)0x4,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
              );
    (this->fields).RID_to_ApplicationIntegrityLevel =
         (Dictionary_2_System_Int32_SelfElevator_ApplicationIntegrityLevel_ *)this_01;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,in_stack_4);
    bVar5 = SelfElevator_IsUserInAdminGroup(this,(MethodInfo *)0x0);
    puStack_6 = (undefined *)CONCAT31(puStack_6._1_3_,bVar5);
    if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SelfElevator);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__SelfElevator);
      cRam_? = '\x01';
    }
    if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SelfElevator);
    }
    pBVar7 = TypeInfo__SelfElevator->static_fields->bits;
    if (pBVar7 != (BitArray *)0x0) {
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
                (pBVar7,1,(bool)puStack_6,(MethodInfo *)0x0);
      pBVar7 = TypeInfo__SelfElevator->static_fields->bits;
      if (pBVar7 != (BitArray *)0x0) {
        mscorlib.dll::System::Collections::BitArray::BitArray_set_Item(pBVar7,0,1,(MethodInfo *)0x0)
        ;
        if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__SelfElevator);
          cRam_? = '\x01';
        }
        if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SelfElevator);
        }
        pBVar7 = TypeInfo__SelfElevator->static_fields->bits;
        if (pBVar7 != (BitArray *)0x0) {
          mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
                    (pBVar7,3,0,(MethodInfo *)0x0);
          pBVar7 = TypeInfo__SelfElevator->static_fields->bits;
          if (pBVar7 != (BitArray *)0x0) {
            mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
                      (pBVar7,2,1,(MethodInfo *)0x0);
            pOVar8 = mscorlib.dll::System::Environment::Environment_get_OSVersion((MethodInfo *)0x0)
            ;
            if ((pOVar8 != (OperatingSystem_1 *)0x0) &&
               (pVVar9 = (pOVar8->fields)._version, pVVar9 != (Version *)0x0)) {
              if ((pVVar9->fields)._Major < 6) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                          ((Object *)StringLiteral_OS_version_is_to_old_to_make_use,
                           (MethodInfo *)0x0);
                MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                          (MVGameMsgType__Enum_AdminMsg,
                           StringLiteral_OS_version_is_to_old_to_make_use,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = puStack_1;
                return;
              }
              bVar5 = SelfElevator_IsProcessElevated(this,(MethodInfo *)0x0);
              puStack_6 = (undefined *)CONCAT31(puStack_6._1_3_,bVar5);
              if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
                pDStack_10 = (Dictionary_2_System_Object_System_Object___Class *)
                             TypeInfo__SelfElevator;
                func_?();
              }
              if (cRam_? == '\0') {
                func_?(&TypeInfo__SelfElevator);
                cRam_? = '\x01';
              }
              if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__SelfElevator);
              }
              pBVar7 = TypeInfo__SelfElevator->static_fields->bits;
              if (pBVar7 != (BitArray *)0x0) {
                mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
                          (pBVar7,5,(bool)puStack_6,(MethodInfo *)0x0);
                pBVar7 = TypeInfo__SelfElevator->static_fields->bits;
                if (pBVar7 != (BitArray *)0x0) {
                  mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
                            (pBVar7,4,1,(MethodInfo *)0x0);
                  key = SelfElevator_GetProcessIntegrityLevel(this,(MethodInfo *)0x0);
                  this_00 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                            (this->fields).RID_to_ApplicationIntegrityLevel;
                  if (this_00 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
                    pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32Enum,System::Object]::
                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                       (this_00,key,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__get_Item_int_
                                       );
                    if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
                      pSStack_2 = TypeInfo__SelfElevator;
                      func_?();
                    }
                    if (cRam_? == '\0') {
                      pSStack_2 = (SelfElevator__Class *)&TypeInfo__SelfElevator;
                      func_?();
                      cRam_? = '\x01';
                    }
                    if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
                      pSStack_2 = TypeInfo__SelfElevator;
                      func_?();
                    }
                    TypeInfo__SelfElevator->static_fields->integrityLevel = (int32_t)pOVar11;
                    *unaff_FS_OFFSET = puStack_1;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pDStack_10 = this_01->klass;
  func_?(&pDStack_10,&UNK_?);
  func_?(&stack0xffffffe0,&UNK_?);
  func_?(&stack0xffffffdc,&UNK_?);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean get_InAdminGroup() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_get_InAdminGroup(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__SelfElevator->static_fields->bits;
  if (this != (BitArray *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::BitArray::BitArray_get_Item(this,1,(MethodInfo *)0x0)
    ;
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean get_InAdminGroupSet() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_get_InAdminGroupSet(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__SelfElevator->static_fields->bits;
  if (this != (BitArray *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::BitArray::BitArray_get_Item(this,0,(MethodInfo *)0x0)
    ;
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* SelfElevator+ApplicationIntegrityLevel get_IntegrityLevel() */

SelfElevator_ApplicationIntegrityLevel__Enum
Assembly-CSharp.dll::SelfElevator::SelfElevator_get_IntegrityLevel(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SelfElevator);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SelfElevator);
  }
  return TypeInfo__SelfElevator->static_fields->integrityLevel;
}


/* Boolean get_IsElevated() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_get_IsElevated(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__SelfElevator->static_fields->bits;
  if (this != (BitArray *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::BitArray::BitArray_get_Item(this,5,(MethodInfo *)0x0)
    ;
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean get_IsElevatedSet() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_get_IsElevatedSet(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__SelfElevator->static_fields->bits;
  if (this != (BitArray *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::BitArray::BitArray_get_Item(this,4,(MethodInfo *)0x0)
    ;
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean get_IsRunningAsAdmin() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_get_IsRunningAsAdmin(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__SelfElevator->static_fields->bits;
  if (this != (BitArray *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::BitArray::BitArray_get_Item(this,3,(MethodInfo *)0x0)
    ;
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean get_IsRunningAsAdminSet() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_get_IsRunningAsAdminSet(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__SelfElevator->static_fields->bits;
  if (this != (BitArray *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::BitArray::BitArray_get_Item(this,2,(MethodInfo *)0x0)
    ;
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void set_InAdminGroup(Boolean) */

void Assembly-CSharp.dll::SelfElevator::SelfElevator_set_InAdminGroup(bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
  if (pBVar1 != (BitArray *)0x0) {
    mscorlib.dll::System::Collections::BitArray::BitArray_set_Item(pBVar1,1,value,(MethodInfo *)0x0)
    ;
    pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
    if (pBVar1 != (BitArray *)0x0) {
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Item(pBVar1,0,1,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_IntegrityLevel(SelfElevator+ApplicationIntegrityLevel) */

void Assembly-CSharp.dll::SelfElevator::SelfElevator_set_IntegrityLevel
               (SelfElevator_ApplicationIntegrityLevel__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SelfElevator);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SelfElevator);
    TypeInfo__SelfElevator->static_fields->integrityLevel = value;
    return;
  }
  TypeInfo__SelfElevator->static_fields->integrityLevel = value;
  return;
}


/* Void set_IsElevated(Boolean) */

void Assembly-CSharp.dll::SelfElevator::SelfElevator_set_IsElevated(bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
  if (pBVar1 != (BitArray *)0x0) {
    mscorlib.dll::System::Collections::BitArray::BitArray_set_Item(pBVar1,5,value,(MethodInfo *)0x0)
    ;
    pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
    if (pBVar1 != (BitArray *)0x0) {
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Item(pBVar1,4,1,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_IsRunningAsAdmin(Boolean) */

void Assembly-CSharp.dll::SelfElevator::SelfElevator_set_IsRunningAsAdmin
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
  if (pBVar1 != (BitArray *)0x0) {
    mscorlib.dll::System::Collections::BitArray::BitArray_set_Item(pBVar1,3,value,(MethodInfo *)0x0)
    ;
    pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
    if (pBVar1 != (BitArray *)0x0) {
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Item(pBVar1,2,1,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

