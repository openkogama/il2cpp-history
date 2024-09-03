
/* Boolean DuplicateToken(SafeTokenHandle, SECURITY_IMPERSONATION_LEVEL, SafeTokenHandle ByRef) */

bool Assembly-CSharp.dll::CSUACSelfElevation::NativeMethods::NativeMethods_DuplicateToken
               (SafeTokenHandle *ExistingTokenHandle,
               SECURITY_IMPERSONATION_LEVEL__Enum ImpersonationLevel,
               SafeTokenHandle **DuplicateTokenHandle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CSUACSelfElevation__SafeTokenHandle);
    cRam_? = '\x01';
  }
  if (pcRam_? == (code *)0x0) {
    uStack_1 = 0xc;
    uStack_2 = 0xe;
    uStack_3 = 0;
    uStack_4 = 1;
    uStack_5 = 0xc;
    uStack_6 = 0;
    pcRam_? = (code *)func_?(&ppvStack_7);
  }
  if (ExistingTokenHandle != (SafeTokenHandle *)0x0) {
    bStack_8 = 0;
    mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_DangerousAddRef
              ((SafeHandle *)ExistingTokenHandle,&bStack_8,(MethodInfo *)0x0);
    pvStack_9 = (void *)0x0;
    ppvStack_7 = &pvStack_9;
    iVar10 = (*pcRam_?)((ExistingTokenHandle->fields)._._.handle,ImpersonationLevel);
    func_?();
    if (bStack_8 != 0) {
      mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_DangerousRelease
                ((SafeHandle *)ExistingTokenHandle,(MethodInfo *)0x0);
    }
    this = (SafeTokenHandle *)func_?(TypeInfo__CSUACSelfElevation__SafeTokenHandle);
    mscorlib.dll::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::
    SafeHandleZeroOrMinusOneIsInvalid__ctor
              ((SafeHandleZeroOrMinusOneIsInvalid *)this,1,(MethodInfo *)0x0);
    (this->fields)._._.handle = pvStack_9;
    *DuplicateTokenHandle = this;
    func_?(DuplicateTokenHandle,&pvStack_9);
    return iVar10 != 0;
  }
  uVar11 = func_?(&UNK_?,0);
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* IntPtr GetSidSubAuthority(IntPtr, UInt32) */

void * Assembly-CSharp.dll::CSUACSelfElevation::NativeMethods::NativeMethods_GetSidSubAuthority
                 (void *pSid,uint32_t nSubAuthority,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcStack_1 = pcRam_?;
    uStack_2 = 0;
    uStack_3 = 0xc;
    uStack_4 = 0x12;
    uStack_5 = 1;
    uStack_6 = 8;
    pcRam_? = (code *)func_?(&puStack_7);
  }
  pvVar8 = (void *)(*pcRam_?)(pSid,nSubAuthority);
  func_?();
  return pvVar8;
}


/* Boolean GetTokenInformation(SafeTokenHandle, TOKEN_INFORMATION_CLASS, IntPtr, Int32, Int32 ByRef)
    */

bool Assembly-CSharp.dll::CSUACSelfElevation::NativeMethods::NativeMethods_GetTokenInformation
               (SafeTokenHandle *hToken,TOKEN_INFORMATION_CLASS__Enum tokenInfoClass,
               void *pTokenInfo,int32_t tokenInfoLength,int32_t *returnLength,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    uStack_1 = 0xc;
    uStack_2 = 0x13;
    uStack_3 = 0;
    uStack_4 = 1;
    uStack_5 = 0x14;
    uStack_6 = 0;
    pcRam_? = (code *)func_?(&piStack_7);
  }
  if (hToken != (SafeTokenHandle *)0x0) {
    bStack_8 = 0;
    mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_DangerousAddRef
              ((SafeHandle *)hToken,&bStack_8,(MethodInfo *)0x0);
    piStack_7 = returnLength;
    iVar9 = (*pcRam_?)((hToken->fields)._._.handle,tokenInfoClass,pTokenInfo,tokenInfoLength);
    func_?();
    if (bStack_8 != 0) {
      mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_DangerousRelease
                ((SafeHandle *)hToken,(MethodInfo *)0x0);
    }
    return iVar9 != 0;
  }
  uVar10 = func_?(&UNK_?);
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Boolean OpenProcessToken(IntPtr, UInt32, SafeTokenHandle ByRef) */

bool Assembly-CSharp.dll::CSUACSelfElevation::NativeMethods::NativeMethods_OpenProcessToken
               (void *hProcess,uint32_t desiredAccess,SafeTokenHandle **hToken,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CSUACSelfElevation__SafeTokenHandle);
    cRam_? = '\x01';
  }
  if (pcRam_? == (code *)0x0) {
    pcStack_1 = pcRam_?;
    uStack_2 = 0;
    uStack_3 = 8;
    uStack_4 = 0x10;
    uStack_5 = 1;
    uStack_6 = 0xc;
    pcRam_? = (code *)func_?(&puStack_7);
  }
  pvStack_8 = (void *)0x0;
  iVar9 = (*pcRam_?)(hProcess,desiredAccess,&pvStack_8);
  func_?();
  this = (SafeTokenHandle *)func_?(TypeInfo__CSUACSelfElevation__SafeTokenHandle);
  mscorlib.dll::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::
  SafeHandleZeroOrMinusOneIsInvalid__ctor
            ((SafeHandleZeroOrMinusOneIsInvalid *)this,1,(MethodInfo *)0x0);
  (this->fields)._._.handle = pvStack_8;
  *hToken = this;
  func_?(hToken,&pvStack_8);
  return iVar9 != 0;
}


/* Int32 SendMessage(IntPtr, UInt32, Int32, IntPtr) */

int32_t Assembly-CSharp.dll::CSUACSelfElevation::NativeMethods::NativeMethods_SendMessage
                  (void *hWnd,uint32_t Msg,int32_t wParam,void *lParam,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcStack_1 = pcRam_?;
    uStack_2 = 0;
    uStack_3 = 6;
    uStack_4 = 0xb;
    uStack_5 = 1;
    uStack_6 = 0x10;
    pcRam_? = (code *)func_?(&puStack_7);
  }
  iVar8 = (*pcRam_?)(hWnd,Msg,wParam,lParam);
  func_?();
  return iVar8;
}

