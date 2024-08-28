
/* Void Elevate() */

void Assembly-CSharp.dll::SelfElevator::SelfElevator_Elevate(SelfElevator *this,MethodInfo *method)

{
  puStack_1 = (undefined *)0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Diagnostics__ProcessStartInfo);
    func_?(&StringLiteral_runas);
    func_?(&StringLiteral_The_process_is_already_running_a);
    cRam_? = '\x01';
  }
  this_00 = (ProcessStartInfo *)func_?(TypeInfo__System__Diagnostics__ProcessStartInfo);
  System.dll::System::Diagnostics::ProcessStartInfo::ProcessStartInfo__ctor
            (this_00,(MethodInfo *)0x0);
  if (this_00 != (ProcessStartInfo *)0x0) {
    (this_00->fields).useShellExecute = 1;
    pSVar4 = mscorlib.dll::System::Environment::Environment_get_CurrentDirectory((MethodInfo *)0x0);
    (this_00->fields).directory = pSVar4;
    func_?();
    this_01 = System.dll::System::Diagnostics::Process::Process_GetCurrentProcess((MethodInfo *)0x0)
    ;
    if (this_01 != (Process *)0x0) {
      pPVar5 = System.dll::System::Diagnostics::Process::Process_get_MainModule
                         (this_01,(MethodInfo *)0x0);
      if ((pPVar5 != (ProcessModule *)0x0) &&
         (pSVar4 = (pPVar5->fields).filename, pSVar4 != (String *)0x0)) {
        startIndex = mscorlib.dll::System::String::String_LastIndexOf(pSVar4,0x5c,(MethodInfo *)0x0)
        ;
        pSVar4 = mscorlib.dll::System::String::String_Substring(pSVar4,startIndex,(MethodInfo *)0x0)
        ;
        (this_00->fields).fileName = pSVar4;
        func_?();
        pSVar4 = StringLiteral_runas;
        ppSVar6 = &(this_00->fields).verb;
        *ppSVar6 = StringLiteral_runas;
        func_?(ppSVar6,pSVar4);
        puStack_1 = (undefined *)0x0;
        System.dll::System::Diagnostics::Process::Process_Start_1(this_00,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Application::Application_Quit_1((MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
  func_?();
  func_?();
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
                      (hToken,TOKEN_INFORMATION_CLASS__Enum_TokenIntegrityLevel,(void *)0x0,0,
                       (int32_t *)&stack0xffffffe8,(MethodInfo *)0x0);
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
      pvVar2 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_AllocHGlobal_1
                         (iVar1,(MethodInfo *)0x0);
      iVar1 = 0;
      bVar3 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
              UnsafeUtility_EnumEquals((Int32Enum__Enum)pvVar2,0,(MethodInfo *)0x0);
      if (bVar3 != 0) goto code_?;
      returnLength = (int32_t *)&stack0xffffffe8;
      ptr = (void *)0x19;
      bVar3 = CSUACSelfElevation::NativeMethods::NativeMethods_GetTokenInformation
                        ((SafeTokenHandle *)0x19,TOKEN_INFORMATION_CLASS__Enum_TokenIntegrityLevel,
                         pvVar2,iVar1,returnLength,(MethodInfo *)0x0);
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
                         (ptr,structureType,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__System__Runtime__InteropServices__Marshal);
    func_?(&TypeRef__CSUACSelfElevation__TOKEN_ELEVATION);
    func_?(&TypeInfo__CSUACSelfElevation__TOKEN_ELEVATION);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  pTStack_7 = (TOKEN_ELEVATION__Class *)0x0;
  iStack_8 = 0;
  pvStack_9 = (void *)0x0;
  uStack_1 = 1;
  this_00 = System.dll::System::Diagnostics::Process::Process_GetCurrentProcess((MethodInfo *)0x0);
  if (this_00 != (Process *)0x0) {
    pvVar10 = System.dll::System::Diagnostics::Process::Process_get_Handle(this_00,(MethodInfo *)0x0)
    ;
    bVar11 = CSUACSelfElevation::NativeMethods::NativeMethods_OpenProcessToken
                      (pvVar10,8,(SafeTokenHandle **)&pTStack_7,(MethodInfo *)0x0);
    pIVar12 = TypeRef__CSUACSelfElevation__TOKEN_ELEVATION;
    if (bVar11 == 0) goto code_?;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar13 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar12,(MethodInfo *)0x0);
    if ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iStack_8 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_SizeOf
                          (pTVar13,(MethodInfo *)0x0);
    pvStack_9 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_AllocHGlobal_1
                           (iStack_8,(MethodInfo *)0x0);
    bVar11 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_EnumEquals((Int32Enum__Enum)pvStack_9,0,(MethodInfo *)0x0);
    if (bVar11 != 0) goto code_?;
    bVar11 = CSUACSelfElevation::NativeMethods::NativeMethods_GetTokenInformation
                      ((SafeTokenHandle *)pTStack_7,TOKEN_INFORMATION_CLASS__Enum_TokenElevation,
                       pvStack_9,iStack_8,&iStack_8,(MethodInfo *)0x0);
    pvVar10 = pvStack_9;
    pIVar12 = TypeRef__CSUACSelfElevation__TOKEN_ELEVATION;
    if (bVar11 == 0) goto code_?;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar13 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar12,(MethodInfo *)0x0);
    if ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTStack_7 = (TOKEN_ELEVATION__Class *)
                 mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_PtrToStructure
                           (pvVar10,pTVar13,(MethodInfo *)0x0);
    if (pTStack_7 != (TOKEN_ELEVATION__Class *)0x0) {
      if ((((Object__Class *)(pTStack_7->_0).image)->_0).element_class ==
          (TypeInfo__CSUACSelfElevation__TOKEN_ELEVATION->_0).element_class) {
        piVar14 = (int *)func_?();
        uStack_1 = 0xffffffff;
        iVar15 = *piVar14;
        uStack_6 = iVar15 != 0;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return iVar15 != 0;
      }
      pTStack_7 = TypeInfo__CSUACSelfElevation__TOKEN_ELEVATION;
      func_?();
    }
  }
  func_?();
code_?:
  func_?();
  this_01 = (Win32Exception *)func_?();
  System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor
            (this_01,(MethodInfo *)0x0);
  func_?();
  func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  bVar11 = (*pcVar16)();
  return bVar11;
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
    func_?(&TypeInfo__System__Runtime__InteropServices__Marshal);
    func_?(&TypeInfo__CSUACSelfElevation__SafeTokenHandle);
    cRam_? = '\x01';
    pMVar5 = pMStack_4;
  }
  pMStack_4 = pMVar5;
  pFStack_6 = (FieldInfo *)0x0;
  pSStack_7 = (SafeTokenHandle__Class *)0x0;
  pIStack_8 = (Il2CppClass *)0x0;
  pIStack_9 = (Il2CppInteropData *)0x0;
  pEStack_10 = (EventInfo *)0x0;
  ppIStack_1 = (Il2CppClass **)0x1;
  this_00 = System.dll::System::Diagnostics::Process::Process_GetCurrentProcess((MethodInfo *)0x0);
  if (this_00 == (Process *)0x0) goto code_?;
  pvVar11 = System.dll::System::Diagnostics::Process::Process_get_Handle(this_00,(MethodInfo *)0x0);
  bVar12 = CSUACSelfElevation::NativeMethods::NativeMethods_OpenProcessToken
                    (pvVar11,10,(SafeTokenHandle **)&pFStack_6,(MethodInfo *)0x0);
  if (bVar12 == 0) goto code_?;
  pOVar13 = mscorlib.dll::System::Environment::Environment_get_OSVersion((MethodInfo *)0x0);
  if ((pOVar13 == (OperatingSystem_1 *)0x0) ||
     (pVVar14 = (pOVar13->fields)._version, pVVar14 == (Version *)0x0)) goto code_?;
  if ((pVVar14->fields)._Major < 6) {
code_?:
    if ((pSStack_7 != (SafeTokenHandle__Class *)0x0) ||
       (bVar12 = CSUACSelfElevation::NativeMethods::NativeMethods_DuplicateToken
                          ((SafeTokenHandle *)pFStack_6,
                           SECURITY_IMPERSONATION_LEVEL__Enum_SecurityIdentification,
                           (SafeTokenHandle **)&pSStack_7,(MethodInfo *)0x0), bVar12 != 0)) {
      ppIStack_1 = (Il2CppClass **)0xffffffff;
      func_?();
      *unaff_FS_OFFSET = ppMStack_3;
      return 0;
    }
  }
  else {
    pEStack_10 = (EventInfo *)0x4;
    if ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pIStack_8 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_AllocHGlobal_1
                           (4,(MethodInfo *)0x0);
    bVar12 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_EnumEquals((Int32Enum__Enum)pIStack_8,0,(MethodInfo *)0x0);
    if ((bVar12 == 0) &&
       (bVar12 = CSUACSelfElevation::NativeMethods::NativeMethods_GetTokenInformation
                          ((SafeTokenHandle *)pFStack_6,
                           TOKEN_INFORMATION_CLASS__Enum_TokenElevationType,pIStack_8,
                           (int32_t)pEStack_10,(int32_t *)&pEStack_10,(MethodInfo *)0x0),
       ptr_00 = pIStack_8, bVar12 != 0)) {
      if ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_finished_or_no_cctor == 0)
      {
        pMStack_4 = TypeInfo__System__Runtime__InteropServices__Marshal;
        func_?();
      }
      iVar15 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_ReadInt32
                        (ptr_00,(MethodInfo *)0x0);
      if (iVar15 == 3) {
        cb = (EventInfo *)
             UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
             UnsafeUtility_SizeOf_36((MethodInfo *)0x0);
        pEStack_10 = cb;
        if ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        pIStack_9 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_AllocHGlobal_1
                               ((int32_t)cb,(MethodInfo *)0x0);
        bVar12 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                UnsafeUtility_EnumEquals((Int32Enum__Enum)pIStack_9,0,(MethodInfo *)0x0);
        if ((bVar12 != 0) ||
           (bVar12 = CSUACSelfElevation::NativeMethods::NativeMethods_GetTokenInformation
                              ((SafeTokenHandle *)pFStack_6,
                               TOKEN_INFORMATION_CLASS__Enum_TokenLinkedToken,pIStack_9,
                               (int32_t)pEStack_10,(int32_t *)&pEStack_10,(MethodInfo *)0x0),
           ptr = pIStack_9, bVar12 == 0)) goto code_?;
        if ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        pvVar11 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_ReadIntPtr
                           (ptr,(MethodInfo *)0x0);
        pSStack_7 = TypeInfo__CSUACSelfElevation__SafeTokenHandle;
        this_01 = (SafeTokenHandle__Class *)func_?();
        System.dll::Microsoft::Win32::SafeHandles::SafeProcessHandle::SafeProcessHandle__ctor
                  ((SafeProcessHandle *)this_01,pvVar11,(MethodInfo *)0x0);
        pSStack_7 = this_01;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
  this_02 = (Win32Exception *)func_?();
  System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor
            (this_02,(MethodInfo *)0x0);
  pSStack_7 = (SafeTokenHandle__Class *)&MethodInfo__SelfElevator__IsUserInAdminGroup__;
  pSStack_7 = (SafeTokenHandle__Class *)func_?();
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  bVar12 = (*pcVar16)();
  return bVar12;
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
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor(this,6,(MethodInfo *)0x0);
  TypeInfo__SelfElevator->static_fields->bits = this;
  func_?(TypeInfo__SelfElevator->static_fields,this);
  TypeInfo__SelfElevator->static_fields->integrityLevel = 5;
  return;
}


/* SelfElevator() */

void Assembly-CSharp.dll::SelfElevator::SelfElevator__ctor(SelfElevator *this,MethodInfo *method)

{
  puStack_1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_1;
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
    in_stack_2 = (MethodInfo *)&UNK_?;
    func_?(&StringLiteral_OS_version_is_to_old_to_make_use);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Dictionary__
            );
  if (this_01 !=
      (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)0x0)
  {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32Enum]::
    Dictionary_2_System_Int32_System_Int32Enum__Add
              ((Dictionary_2_System_Int32_System_Int32Enum_ *)this_01,0,0,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32Enum]::
    Dictionary_2_System_Int32_System_Int32Enum__Add
              ((Dictionary_2_System_Int32_System_Int32Enum_ *)this_01,0x1000,1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32Enum]::
    Dictionary_2_System_Int32_System_Int32Enum__Add
              ((Dictionary_2_System_Int32_System_Int32Enum_ *)this_01,0x2000,2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32Enum]::
    Dictionary_2_System_Int32_System_Int32Enum__Add
              ((Dictionary_2_System_Int32_System_Int32Enum_ *)this_01,0x3000,3,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32Enum]::
    Dictionary_2_System_Int32_System_Int32Enum__Add
              ((Dictionary_2_System_Int32_System_Int32Enum_ *)this_01,0x4000,4,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
              );
    (this->fields).RID_to_ApplicationIntegrityLevel =
         (Dictionary_2_System_Int32_SelfElevator_ApplicationIntegrityLevel_ *)this_01;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)this,ExceptionArgument__Enum_obj,in_stack_2);
    bVar3 = SelfElevator_IsUserInAdminGroup(this,(MethodInfo *)0x0);
    if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pBVar4 = TypeInfo__SelfElevator->static_fields->bits;
    if (pBVar4 != (BitArray *)0x0) {
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
                (pBVar4,1,bVar3,(MethodInfo *)0x0);
      pBVar4 = TypeInfo__SelfElevator->static_fields->bits;
      if (pBVar4 != (BitArray *)0x0) {
        mscorlib.dll::System::Collections::BitArray::BitArray_set_Item(pBVar4,0,1,(MethodInfo *)0x0)
        ;
        if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pBVar4 = TypeInfo__SelfElevator->static_fields->bits;
        if (pBVar4 != (BitArray *)0x0) {
          mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
                    (pBVar4,3,0,(MethodInfo *)0x0);
          pBVar4 = TypeInfo__SelfElevator->static_fields->bits;
          if (pBVar4 != (BitArray *)0x0) {
            mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
                      (pBVar4,2,1,(MethodInfo *)0x0);
            pOVar5 = mscorlib.dll::System::Environment::Environment_get_OSVersion((MethodInfo *)0x0)
            ;
            if ((pOVar5 != (OperatingSystem_1 *)0x0) &&
               (pVVar6 = (pOVar5->fields)._version, pVVar6 != (Version *)0x0)) {
              if ((pVVar6->fields)._Major < 6) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_OS_version_is_to_old_to_make_use,
                           (MethodInfo *)0x0);
                MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                          (MVGameMsgType__Enum_AdminMsg,
                           StringLiteral_OS_version_is_to_old_to_make_use,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = puStack_1;
                return;
              }
              bVar3 = SelfElevator_IsProcessElevated(this,(MethodInfo *)0x0);
              if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
                bVar3 = 0x9f;
                func_?();
              }
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pBVar4 = TypeInfo__SelfElevator->static_fields->bits;
              if (pBVar4 != (BitArray *)0x0) {
                mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
                          (pBVar4,5,bVar3,(MethodInfo *)0x0);
                pBVar4 = TypeInfo__SelfElevator->static_fields->bits;
                if (pBVar4 != (BitArray *)0x0) {
                  mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
                            (pBVar4,4,1,(MethodInfo *)0x0);
                  key = SelfElevator_GetProcessIntegrityLevel(this,(MethodInfo *)0x0);
                  this_00 = (Dictionary_2_System_Int32_System_Object_ *)
                            (this->fields).RID_to_ApplicationIntegrityLevel;
                  if (this_00 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                    pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,System::Object]::
                             Dictionary_2_System_Int32_System_Object__get_Item
                                       (this_00,key,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__get_Item_int_
                                       );
                    if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    if ((TypeInfo__SelfElevator->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    TypeInfo__SelfElevator->static_fields->integrityLevel = (int32_t)pOVar7;
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
  func_?();
  func_?(&stack0xffffffe0,&UNK_?);
  func_?(&stack0xffffffdc,&UNK_?);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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

