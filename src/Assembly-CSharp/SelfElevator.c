
/* Void Elevate() */

void Assembly-CSharp.dll::SelfElevator::SelfElevator_Elevate(SelfElevator *this,MethodInfo *method)

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
  bVar4 = SelfElevator_IsRunAsAdmin(this,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_The_process_is_already_running_a,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,StringLiteral_The_process_is_already_running_a,
               (MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  this_00 = (ProcessStartInfo *)func_?();
  System.dll::System::Diagnostics::ProcessStartInfo::ProcessStartInfo__ctor
            (this_00,(MethodInfo *)0x0);
  if (this_00 != (ProcessStartInfo *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::FontData::FontData_set_richText
              ((FontData *)this_00,1,(MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::Environment::Environment_get_CurrentDirectory((MethodInfo *)0x0);
    System.dll::System::Diagnostics::ProcessStartInfo::ProcessStartInfo_set_WorkingDirectory
              (this_00,pSVar5,(MethodInfo *)0x0);
    this_01 = System.dll::System::Diagnostics::Process::Process_GetCurrentProcess((MethodInfo *)0x0)
    ;
    if (this_01 != (Process *)0x0) {
      this_02 = System.dll::System::Diagnostics::Process::Process_get_MainModule
                          (this_01,(MethodInfo *)0x0);
      if (this_02 != (ProcessModule *)0x0) {
        pSVar5 = (String *)
                 System.Core.dll::System::Linq::
                 Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                 KeyValuePair`2[System::Object,System::Object],System::Object]::
                 Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                           ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                             *)this_02,(MethodInfo *)0x0);
        if (pSVar5 != (String *)0x0) {
          startIndex = mscorlib.dll::System::String::String_LastIndexOf
                                 (pSVar5,0x5c,(MethodInfo *)0x0);
          value = (BitArray *)
                  mscorlib.dll::System::String::String_Substring
                            (pSVar5,startIndex,(MethodInfo *)0x0);
          MaterialDescription::MaterialDescription_set_SpecialProperties
                    ((MaterialDescription *)this_00,value,(MethodInfo *)0x0);
          UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
          ObjectPool_1_System_Object__set_countAll
                    ((ObjectPool_1_System_Object_ *)this_00,(int32_t)StringLiteral_runas,
                     (MethodInfo *)0x0);
          uStack_1 = 0;
          System.dll::System::Diagnostics::Process::Process_Start(this_00,(MethodInfo *)0x0);
          uStack_1 = 0xffffffff;
          UnityEngine.CoreModule.dll::UnityEngine::Application::Application_Quit_1
                    ((MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* String GetExecutableName() */

String * Assembly-CSharp.dll::SelfElevator::SelfElevator_GetExecutableName
                   (SelfElevator *this,MethodInfo *method)

{
  this_00 = System.dll::System::Diagnostics::Process::Process_GetCurrentProcess((MethodInfo *)0x0);
  if (this_00 != (Process *)0x0) {
    this_01 = System.dll::System::Diagnostics::Process::Process_get_MainModule
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (ProcessModule *)0x0) {
      pSVar1 = (String *)
               System.Core.dll::System::Linq::
               Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
               KeyValuePair`2[System::Object,System::Object],System::Object]::
               Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                         ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                           *)this_01,(MethodInfo *)0x0);
      if (pSVar1 != (String *)0x0) {
        startIndex = mscorlib.dll::System::String::String_LastIndexOf(pSVar1,0x5c,(MethodInfo *)0x0)
        ;
        pSVar1 = mscorlib.dll::System::String::String_Substring(pSVar1,startIndex,(MethodInfo *)0x0)
        ;
        return pSVar1;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* Int32 GetProcessIntegrityLevel() */

int32_t Assembly-CSharp.dll::SelfElevator::SelfElevator_GetProcessIntegrityLevel
                  (SelfElevator *this,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  pSStack_1 = (SafeTokenHandle *)0x0;
  iStack_2 = 0;
  this_00 = System.dll::System::Diagnostics::Process::Process_GetCurrentProcess((MethodInfo *)0x0);
  if (this_00 == (Process *)0x0) goto code_?;
  pvVar3 = (void *)System.Core.dll::System::Linq::
                   Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                   Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                             ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_00,
                              (MethodInfo *)0x0);
  bVar4 = CSUACSelfElevation::NativeMethods::NativeMethods_OpenProcessToken
                    (pvVar3,8,&pSStack_1,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    bVar4 = CSUACSelfElevation::NativeMethods::NativeMethods_GetTokenInformation
                      (pSStack_1,TOKEN_INFORMATION_CLASS__Enum_TokenIntegrityLevel,(void *)0x0,0,
                       &iStack_2,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      if ((((uint)(TypeInfo__System__Runtime__InteropServices__Marshal->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_started == 0)) {
        func_?();
      }
      iVar5 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_GetLastWin32Error
                        ((MethodInfo *)0x0);
      if (iVar5 != 0x7a) {
        pWVar6 = (Win32Exception *)func_?();
        System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor_1
                  (pWVar6,iVar5,(MethodInfo *)0x0);
        func_?();
        goto code_?;
      }
    }
    iVar5 = iStack_2;
    if ((((uint)(TypeInfo__System__Runtime__InteropServices__Marshal->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_started == 0)) {
      func_?();
    }
    lhs.id = (int32_t)mscorlib.dll::System::Runtime::InteropServices::Marshal::
                      Marshal_AllocHGlobal_1(iVar5,(MethodInfo *)0x0);
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::PropertyName::PropertyName_op_Equality
                      (lhs,(PropertyName)0x0,(MethodInfo *)0x0);
    if ((bVar4 == 0) &&
       (pSVar7 = pSStack_1,
       bVar4 = CSUACSelfElevation::NativeMethods::NativeMethods_GetTokenInformation
                         (pSStack_1,TOKEN_INFORMATION_CLASS__Enum_TokenIntegrityLevel,
                          (void *)lhs.id,iStack_2,&iStack_2,(MethodInfo *)0x0),
       handle = TypeRef__CSUACSelfElevation__TOKEN_MANDATORY_LABEL, bVar4 != 0)) {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      structureType =
           mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Runtime__InteropServices__Marshal->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_PtrToStructure
                ((void *)lhs.id,structureType,(MethodInfo *)0x0);
      puVar8 = (undefined4 *)func_?();
      pvVar3 = CSUACSelfElevation::NativeMethods::NativeMethods_GetSidSubAuthority
                         ((void *)*puVar8,0,(MethodInfo *)0x0);
      iVar5 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_ReadInt32
                        (pvVar3,(MethodInfo *)0x0);
      if (pSStack_1 != (SafeTokenHandle *)0x0) {
        mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_Close
                  ((SafeHandle *)pSStack_1,(MethodInfo *)0x0);
        pSStack_1 = (SafeTokenHandle *)0x0;
      }
      bVar4 = mscorlib.dll::System::IntPtr::IntPtr_op_Inequality
                        ((void *)lhs.id,(void *)0x0,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        if ((((uint)(TypeInfo__System__Runtime__InteropServices__Marshal->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_started == 0)) {
          func_?();
        }
        mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_FreeHGlobal
                  ((void *)lhs.id,(MethodInfo *)0x0);
      }
      *unaff_FS_OFFSET = pSVar7;
      return iVar5;
    }
  }
code_?:
  pWVar6 = (Win32Exception *)func_?();
  System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor(pWVar6,(MethodInfo *)0x0)
  ;
  func_?();
code_?:
  func_?();
  puStack9 = (undefined *)0x0;
  func_?();
  pcVar10 = (code *)swi(3);
  iVar5 = (*pcVar10)();
  return iVar5;
}


/* Boolean IsProcessElevated() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_IsProcessElevated
               (SelfElevator *this,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  pSVar1 = (SafeTokenHandle *)0x0;
  this_00 = System.dll::System::Diagnostics::Process::Process_GetCurrentProcess((MethodInfo *)0x0);
  if (this_00 != (Process *)0x0) {
    hProcess = (void *)System.Core.dll::System::Linq::
                       Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                       Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                 ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                                  this_00,(MethodInfo *)0x0);
    bVar2 = CSUACSelfElevation::NativeMethods::NativeMethods_OpenProcessToken
                      (hProcess,8,(SafeTokenHandle **)&stack0xffffffe4,(MethodInfo *)0x0);
    pIVar3 = TypeRef__CSUACSelfElevation__TOKEN_ELEVATION;
    if (bVar2 != 0) {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      t = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                    ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Runtime__InteropServices__Marshal->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_started == 0)) {
        pSVar1 = (SafeTokenHandle *)&UNK_?;
        func_?();
      }
      cb = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_SizeOf
                     (t,(MethodInfo *)0x0);
      lhs.id = (int32_t)mscorlib.dll::System::Runtime::InteropServices::Marshal::
                        Marshal_AllocHGlobal_1(cb,(MethodInfo *)0x0);
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PropertyName::PropertyName_op_Equality
                        (lhs,(PropertyName)0x0,(MethodInfo *)0x0);
      if ((bVar2 == 0) &&
         (bVar2 = CSUACSelfElevation::NativeMethods::NativeMethods_GetTokenInformation
                            (pSVar1,TOKEN_INFORMATION_CLASS__Enum_TokenElevation,(void *)lhs.id,cb,
                             (int32_t *)&stack0xffffffe0,(MethodInfo *)0x0),
         pIVar3 = TypeRef__CSUACSelfElevation__TOKEN_ELEVATION, bVar2 != 0)) {
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar1 = (SafeTokenHandle *)
                 mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__Runtime__InteropServices__Marshal->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_started == 0)) {
          func_?();
        }
        mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_PtrToStructure
                  ((void *)lhs.id,(Type *)pSVar1,(MethodInfo *)0x0);
        piVar4 = (int *)func_?();
        iVar5 = *piVar4;
        _UNK_? = 0xc4;
        if (pSVar1 != (SafeTokenHandle *)0x0) {
          mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_Close
                    ((SafeHandle *)pSVar1,(MethodInfo *)0x0);
        }
        puVar6 = &UNK_?;
        bVar2 = mscorlib.dll::System::IntPtr::IntPtr_op_Inequality
                          ((void *)lhs.id,(void *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if ((((uint)(TypeInfo__System__Runtime__InteropServices__Marshal->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_started == 0)) {
            func_?();
          }
          mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_FreeHGlobal
                    ((void *)lhs.id,(MethodInfo *)0x0);
        }
        *unaff_FS_OFFSET = puVar6;
        return iVar5 != 0;
      }
    }
    this_01 = (Win32Exception *)func_?();
    System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor
              (this_01,(MethodInfo *)0x0);
    func_?();
  }
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  bVar2 = (*pcVar7)();
  return bVar2;
}


/* Boolean IsRunAsAdmin() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_IsRunAsAdmin
               (SelfElevator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Security__Principal__WindowsIdentity->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__System__Security__Principal__WindowsIdentity->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Security__Principal__WindowsIdentity);
  }
  ntIdentity = mscorlib.dll::System::Security::Principal::WindowsIdentity::
               WindowsIdentity_GetCurrent((MethodInfo *)0x0);
  this_00 = (WindowsPrincipal *)
            func_?(TypeInfo__System__Security__Principal__WindowsPrincipal);
  mscorlib.dll::System::Security::Principal::WindowsPrincipal::WindowsPrincipal__ctor
            (this_00,ntIdentity,(MethodInfo *)0x0);
  if (this_00 != (WindowsPrincipal *)0x0) {
    bVar1 = (*(code *)(this_00->klass->vtable).IsInRole_2.method)(this_00);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean IsUserInAdminGroup() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_IsUserInAdminGroup
               (SelfElevator *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?();
  lhs_00.id = 0;
  lhs.id = 0;
  uStack_6._0_3_ = (uint3)(ushort)uStack_6;
  puStack_7 = (undefined *)0x0;
  uStack_1 = 0;
  puStack_4 = &stack0xffffffbc;
  this_00 = System.dll::System::Diagnostics::Process::Process_GetCurrentProcess((MethodInfo *)0x0);
  if (this_00 == (Process *)0x0) goto code_?;
  pvVar8 = (void *)System.Core.dll::System::Linq::
                   Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                   Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                             ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_00,
                              (MethodInfo *)0x0);
  bVar9 = CSUACSelfElevation::NativeMethods::NativeMethods_OpenProcessToken
                    (pvVar8,10,(SafeTokenHandle **)&stack0xffffffe0,(MethodInfo *)0x0);
  if (bVar9 == 0) goto code_?;
  this_01 = mscorlib.dll::System::Environment::Environment_get_OSVersion((MethodInfo *)0x0);
  if (this_01 == (OperatingSystem *)0x0) goto code_?;
  this_02 = (SafeTokenHandle *)
            mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                       (MethodInfo *)0x0);
  hToken = (MethodInfo *)0x0;
  if (this_02 == (SafeTokenHandle *)0x0) goto code_?;
  pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
  if ((int)pIVar10 < 6) {
code_?:
    if (this_02 == (SafeTokenHandle *)0x0) {
      bVar9 = CSUACSelfElevation::NativeMethods::NativeMethods_DuplicateToken
                        ((SafeTokenHandle *)hToken,
                         SECURITY_IMPERSONATION_LEVEL__Enum_SecurityIdentification,
                         (SafeTokenHandle **)&stack0xffffffdc,(MethodInfo *)0x0);
      if (bVar9 == 0) goto code_?;
      if (this_02 == (SafeTokenHandle *)0x0) goto code_?;
    }
    pvVar8 = mscorlib.dll::System::Runtime::InteropServices::SafeHandle::
             SafeHandle_DangerousGetHandle((SafeHandle *)this_02,(MethodInfo *)0x0);
    this_03 = (WindowsIdentity *)func_?();
    mscorlib.dll::System::Security::Principal::WindowsIdentity::WindowsIdentity__ctor
              (this_03,pvVar8,(MethodInfo *)0x0);
    puVar11 = (undefined4 *)&UNK_?;
    ntIdentity = TypeInfo__System__Security__Principal__WindowsPrincipal;
    this_04 = (WindowsPrincipal *)func_?();
    mscorlib.dll::System::Security::Principal::WindowsPrincipal::WindowsPrincipal__ctor
              (this_04,(WindowsIdentity *)ntIdentity,(MethodInfo *)0x0);
    if (this_04 != (WindowsPrincipal *)0x0) {
      uVar12 = (*(code *)(this_04->klass->vtable).IsInRole_2.method)(this_04,0x220);
      uStack_6 = (Marshal__Class *)CONCAT13(uVar12,(uint3)uStack_6);
      *puVar11 = 0x17d;
      uStack_1 = 0xffffffff;
      if (hToken != (MethodInfo *)0x0) {
        mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_Close
                  ((SafeHandle *)hToken,(MethodInfo *)0x0);
      }
      if (this_02 != (SafeTokenHandle *)0x0) {
        mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_Close
                  ((SafeHandle *)this_02,(MethodInfo *)0x0);
      }
      bVar9 = mscorlib.dll::System::IntPtr::IntPtr_op_Inequality
                        ((void *)lhs_00.id,(void *)0x0,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        if ((((uint)(TypeInfo__System__Runtime__InteropServices__Marshal->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_started == 0)) {
          func_?();
        }
        mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_FreeHGlobal
                  ((void *)lhs_00.id,(MethodInfo *)0x0);
      }
      bVar9 = mscorlib.dll::System::IntPtr::IntPtr_op_Inequality
                        ((void *)lhs.id,(void *)0x0,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        if ((((uint)(TypeInfo__System__Runtime__InteropServices__Marshal->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_started == 0)) {
          func_?();
        }
        mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_FreeHGlobal
                  ((void *)lhs.id,(MethodInfo *)0x0);
      }
      *unaff_FS_OFFSET = uStack_3;
      return uStack_6._3_1_;
    }
  }
  else {
    puStack_7 = (undefined *)0x4;
    method_00 = hToken;
    if ((((uint)(TypeInfo__System__Runtime__InteropServices__Marshal->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_started == 0)) {
      uStack_6 = TypeInfo__System__Runtime__InteropServices__Marshal;
      func_?();
      method_00 = hToken;
    }
    lhs_00.id = (int32_t)mscorlib.dll::System::Runtime::InteropServices::Marshal::
                         Marshal_AllocHGlobal_1(4,(MethodInfo *)0x0);
    bVar9 = UnityEngine.CoreModule.dll::UnityEngine::PropertyName::PropertyName_op_Equality
                      (lhs_00,(PropertyName)0x0,(MethodInfo *)0x0);
    if ((bVar9 == 0) &&
       (hToken = method_00,
       bVar9 = CSUACSelfElevation::NativeMethods::NativeMethods_GetTokenInformation
                         ((SafeTokenHandle *)method_00,
                          TOKEN_INFORMATION_CLASS__Enum_TokenElevationType,(void *)lhs_00.id,
                          (int32_t)puStack_7,(int32_t *)&puStack_7,(MethodInfo *)0x0), bVar9 != 0)
       ) {
      if ((((uint)(TypeInfo__System__Runtime__InteropServices__Marshal->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_started == 0)) {
        func_?();
      }
      iVar13 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_ReadInt32
                        ((void *)lhs_00.id,(MethodInfo *)0x0);
      if (iVar13 == 3) {
        cb = (undefined *)
             GameMeterGameCoin::GameMeterGameCoin_get_GameMeterType
                       ((GameMeterGameCoin *)0x0,method_00);
        puStack_7 = cb;
        if ((((uint)(TypeInfo__System__Runtime__InteropServices__Marshal->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Runtime__InteropServices__Marshal);
        }
        lhs.id = (int32_t)mscorlib.dll::System::Runtime::InteropServices::Marshal::
                          Marshal_AllocHGlobal_1((int32_t)cb,(MethodInfo *)0x0);
        bVar9 = UnityEngine.CoreModule.dll::UnityEngine::PropertyName::PropertyName_op_Equality
                          (lhs,(PropertyName)0x0,(MethodInfo *)0x0);
        if ((bVar9 != 0) ||
           (bVar9 = CSUACSelfElevation::NativeMethods::NativeMethods_GetTokenInformation
                              ((SafeTokenHandle *)hToken,
                               TOKEN_INFORMATION_CLASS__Enum_TokenLinkedToken,(void *)lhs.id,
                               (int32_t)puStack_7,(int32_t *)&puStack_7,(MethodInfo *)0x0),
           bVar9 == 0)) goto code_?;
        if ((((uint)(TypeInfo__System__Runtime__InteropServices__Marshal->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Runtime__InteropServices__Marshal->_1).cctor_started == 0)) {
          func_?();
        }
        pvVar8 = mscorlib.dll::System::Runtime::InteropServices::Marshal::Marshal_ReadIntPtr
                           ((void *)lhs.id,(MethodInfo *)0x0);
        this_02 = (SafeTokenHandle *)func_?();
        CSUACSelfElevation::SafeTokenHandle::SafeTokenHandle__ctor_1
                  (this_02,pvVar8,(MethodInfo *)0x0);
      }
      goto code_?;
    }
code_?:
    this_05 = (Win32Exception *)func_?();
    System.dll::System::ComponentModel::Win32Exception::Win32Exception__ctor
              (this_05,(MethodInfo *)0x0);
    func_?();
  }
code_?:
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  bVar9 = (*pcVar14)();
  return bVar9;
}


/* SelfElevator() */

void Assembly-CSharp.dll::SelfElevator::SelfElevator__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_2(this,6,(MethodInfo *)0x0);
  TypeInfo__SelfElevator->static_fields->bits = this;
  TypeInfo__SelfElevator->static_fields->integrityLevel = 5;
  return;
}


/* SelfElevator() */

void Assembly-CSharp.dll::SelfElevator::SelfElevator__ctor(SelfElevator *this,MethodInfo *method)

{
  puStack_1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  pDVar2 = (Dictionary_2_System_Int32_SelfElevator_ApplicationIntegrityLevel_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar2,
             MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Dictionary__
            );
  if (pDVar2 != (Dictionary_2_System_Int32_SelfElevator_ApplicationIntegrityLevel_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32,SelfElevator+ApplicationIntegrityLevel]::
    Dictionary_2_System_Int32_SelfElevator_ApplicationIntegrityLevel__Add
              (pDVar2,0,SelfElevator_ApplicationIntegrityLevel__Enum_Untrusted,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32,SelfElevator+ApplicationIntegrityLevel]::
    Dictionary_2_System_Int32_SelfElevator_ApplicationIntegrityLevel__Add
              (pDVar2,0x1000,SelfElevator_ApplicationIntegrityLevel__Enum_Low,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32,SelfElevator+ApplicationIntegrityLevel]::
    Dictionary_2_System_Int32_SelfElevator_ApplicationIntegrityLevel__Add
              (pDVar2,0x2000,SelfElevator_ApplicationIntegrityLevel__Enum_Medium,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32,SelfElevator+ApplicationIntegrityLevel]::
    Dictionary_2_System_Int32_SelfElevator_ApplicationIntegrityLevel__Add
              (pDVar2,0x3000,SelfElevator_ApplicationIntegrityLevel__Enum_High,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32,SelfElevator+ApplicationIntegrityLevel]::
    Dictionary_2_System_Int32_SelfElevator_ApplicationIntegrityLevel__Add
              (pDVar2,0x4000,SelfElevator_ApplicationIntegrityLevel__Enum_System,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__Add_int__SelfElevator__ApplicationIntegrityLevel_
              );
    (this->fields).RID_to_ApplicationIntegrityLevel = pDVar2;
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,(MethodInfo *)this);
    bVar3 = SelfElevator_IsUserInAdminGroup(this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
      func_?();
    }
    pBVar4 = TypeInfo__SelfElevator->static_fields->bits;
    if (pBVar4 != (BitArray *)0x0) {
      mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar4,1,bVar3,(MethodInfo *)0x0);
      pBVar4 = TypeInfo__SelfElevator->static_fields->bits;
      if (pBVar4 != (BitArray *)0x0) {
        mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar4,0,1,(MethodInfo *)0x0);
        bVar3 = SelfElevator_IsRunAsAdmin(this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
          func_?();
        }
        pBVar4 = TypeInfo__SelfElevator->static_fields->bits;
        if (pBVar4 != (BitArray *)0x0) {
          mscorlib.dll::System::Collections::BitArray::BitArray_Set
                    (pBVar4,3,bVar3,(MethodInfo *)0x0);
          pBVar4 = TypeInfo__SelfElevator->static_fields->bits;
          if (pBVar4 != (BitArray *)0x0) {
            mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar4,2,1,(MethodInfo *)0x0);
            this_00 = mscorlib.dll::System::Environment::Environment_get_OSVersion
                                ((MethodInfo *)0x0);
            if ((this_00 != (OperatingSystem *)0x0) &&
               (this_01 = (Collection_1_VoxelHit_ *)
                          mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                     this_00,(MethodInfo *)0x0),
               this_01 != (Collection_1_VoxelHit_ *)0x0)) {
              pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
              if ((int)pIVar5 < 6) {
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                          ((Object *)StringLiteral_OS_version_is_to_old_to_make_use,
                           (MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                          (MVGameMsgType__Enum_AdminMsg,
                           StringLiteral_OS_version_is_to_old_to_make_use,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = puStack_1;
                return;
              }
              bVar3 = SelfElevator_IsProcessElevated(this,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
                func_?();
              }
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
                func_?();
              }
              pBVar4 = TypeInfo__SelfElevator->static_fields->bits;
              if (pBVar4 != (BitArray *)0x0) {
                mscorlib.dll::System::Collections::BitArray::BitArray_Set
                          (pBVar4,5,bVar3,(MethodInfo *)0x0);
                pBVar4 = TypeInfo__SelfElevator->static_fields->bits;
                if (pBVar4 != (BitArray *)0x0) {
                  mscorlib.dll::System::Collections::BitArray::BitArray_Set
                            (pBVar4,4,1,(MethodInfo *)0x0);
                  key = SelfElevator_GetProcessIntegrityLevel(this,(MethodInfo *)0x0);
                  pDVar2 = (this->fields).RID_to_ApplicationIntegrityLevel;
                  if (pDVar2 != (Dictionary_2_System_Int32_SelfElevator_ApplicationIntegrityLevel_ *
                                )0x0) {
                    SVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,SelfElevator+ApplicationIntegrityLevel]::
                            Dictionary_2_System_Int32_SelfElevator_ApplicationIntegrityLevel__get_Item
                                      (pDVar2,key,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_SelfElevator::ApplicationIntegrityLevel>__get_Item_int_
                                      );
                    if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0)
                       && ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
                      pSStack7 = TypeInfo__SelfElevator;
                      func_?();
                    }
                    if (cRam_? == '\0') {
                      pSStack7 = (SelfElevator__Class *)_UNK_?;
                      func_?();
                      cRam_? = '\x01';
                    }
                    if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0)
                       && ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
                      pSStack7 = TypeInfo__SelfElevator;
                      func_?();
                    }
                    TypeInfo__SelfElevator->static_fields->integrityLevel = SVar6;
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
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean get_InAdminGroup() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_get_InAdminGroup(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
    func_?(TypeInfo__SelfElevator);
  }
  this = TypeInfo__SelfElevator->static_fields->bits;
  if (this != (BitArray *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::BitArray::BitArray_Get(this,1,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean get_InAdminGroupSet() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_get_InAdminGroupSet(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
    func_?(TypeInfo__SelfElevator);
  }
  this = TypeInfo__SelfElevator->static_fields->bits;
  if (this != (BitArray *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::BitArray::BitArray_Get(this,0,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* SelfElevator+ApplicationIntegrityLevel get_IntegrityLevel() */

SelfElevator_ApplicationIntegrityLevel__Enum
Assembly-CSharp.dll::SelfElevator::SelfElevator_get_IntegrityLevel(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
    func_?(TypeInfo__SelfElevator);
  }
  return TypeInfo__SelfElevator->static_fields->integrityLevel;
}


/* Boolean get_IsElevated() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_get_IsElevated(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
    func_?(TypeInfo__SelfElevator);
  }
  this = TypeInfo__SelfElevator->static_fields->bits;
  if (this != (BitArray *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::BitArray::BitArray_Get(this,5,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean get_IsElevatedSet() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_get_IsElevatedSet(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
    func_?(TypeInfo__SelfElevator);
  }
  this = TypeInfo__SelfElevator->static_fields->bits;
  if (this != (BitArray *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::BitArray::BitArray_Get(this,4,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean get_IsRunningAsAdmin() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_get_IsRunningAsAdmin(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
    func_?(TypeInfo__SelfElevator);
  }
  this = TypeInfo__SelfElevator->static_fields->bits;
  if (this != (BitArray *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::BitArray::BitArray_Get(this,3,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean get_IsRunningAsAdminSet() */

bool Assembly-CSharp.dll::SelfElevator::SelfElevator_get_IsRunningAsAdminSet(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
    func_?(TypeInfo__SelfElevator);
  }
  this = TypeInfo__SelfElevator->static_fields->bits;
  if (this != (BitArray *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::BitArray::BitArray_Get(this,2,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void set_InAdminGroup(Boolean) */

void Assembly-CSharp.dll::SelfElevator::SelfElevator_set_InAdminGroup(bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
    func_?(TypeInfo__SelfElevator);
  }
  pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
  if (pBVar1 != (BitArray *)0x0) {
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar1,1,value,(MethodInfo *)0x0);
    pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
    if (pBVar1 != (BitArray *)0x0) {
      mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar1,0,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_IntegrityLevel(SelfElevator+ApplicationIntegrityLevel) */

void Assembly-CSharp.dll::SelfElevator::SelfElevator_set_IntegrityLevel
               (SelfElevator_ApplicationIntegrityLevel__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
    func_?(TypeInfo__SelfElevator);
  }
  pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
  if (pBVar1 != (BitArray *)0x0) {
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar1,5,value,(MethodInfo *)0x0);
    pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
    if (pBVar1 != (BitArray *)0x0) {
      mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar1,4,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_IsRunningAsAdmin(Boolean) */

void Assembly-CSharp.dll::SelfElevator::SelfElevator_set_IsRunningAsAdmin
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SelfElevator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SelfElevator->_1).cctor_started == 0)) {
    func_?(TypeInfo__SelfElevator);
  }
  pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
  if (pBVar1 != (BitArray *)0x0) {
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar1,3,value,(MethodInfo *)0x0);
    pBVar1 = TypeInfo__SelfElevator->static_fields->bits;
    if (pBVar1 != (BitArray *)0x0) {
      mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar1,2,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

