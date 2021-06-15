
/* Boolean DuplicateToken(SafeTokenHandle, SECURITY_IMPERSONATION_LEVEL, SafeTokenHandle ByRef) */

bool Assembly-CSharp.dll::CSUACSelfElevation::NativeMethods::NativeMethods_DuplicateToken
               (SafeTokenHandle *ExistingTokenHandle,
               SECURITY_IMPERSONATION_LEVEL__Enum ImpersonationLevel,
               SafeTokenHandle **DuplicateTokenHandle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    if (pcRam_? == (code *)0x0) {
      uVar8 = func_?(&UNK_?,0,0);
      func_?(uVar8);
      goto code_?;
    }
  }
  if (ExistingTokenHandle != (SafeTokenHandle *)0x0) {
    bStack_9 = 0;
    mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_DangerousAddRef
              ((SafeHandle *)ExistingTokenHandle,&bStack_9,(MethodInfo *)0x0);
    pvStack_10 = (void *)0x0;
    ppvStack_7 = &pvStack_10;
    iVar11 = (*pcRam_?)((ExistingTokenHandle->fields)._._.handle,ImpersonationLevel);
    func_?();
    if (bStack_9 != 0) {
      mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_DangerousRelease
                ((SafeHandle *)ExistingTokenHandle,(MethodInfo *)0x0);
    }
    this = (SafeTokenHandle *)func_?(TypeInfo__CSUACSelfElevation__SafeTokenHandle);
    mscorlib.dll::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::
    SafeHandleZeroOrMinusOneIsInvalid__ctor
              ((SafeHandleZeroOrMinusOneIsInvalid *)this,1,(MethodInfo *)0x0);
    (this->fields)._._.handle = pvStack_10;
    *DuplicateTokenHandle = this;
    return iVar11 != 0;
  }
code_?:
  uVar8 = func_?(&UNK_?,0);
  func_?(uVar8);
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
    if (pcRam_? == (code *)0x0) {
      uVar8 = func_?(&UNK_?,0,0);
      func_?(uVar8);
      pcVar9 = (code *)swi(3);
      pvVar10 = (void *)(*pcVar9)();
      return pvVar10;
    }
  }
  pvVar10 = (void *)(*pcRam_?)(pSid,nSubAuthority);
  func_?();
  return pvVar10;
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
    if (pcRam_? == (code *)0x0) {
      uVar8 = func_?(&UNK_?,0,0);
      func_?(uVar8);
      goto code_?;
    }
  }
  if (hToken != (SafeTokenHandle *)0x0) {
    bStack_9 = 0;
    mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_DangerousAddRef
              ((SafeHandle *)hToken,&bStack_9,(MethodInfo *)0x0);
    piStack_7 = returnLength;
    iVar10 = (*pcRam_?)((hToken->fields)._._.handle,tokenInfoClass,pTokenInfo,tokenInfoLength);
    func_?();
    if (bStack_9 != 0) {
      mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_DangerousRelease
                ((SafeHandle *)hToken,(MethodInfo *)0x0);
    }
    return iVar10 != 0;
  }
code_?:
  uVar8 = func_?(&UNK_?,0);
  func_?(uVar8);
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Boolean OpenProcessToken(IntPtr, UInt32, SafeTokenHandle ByRef) */

bool Assembly-CSharp.dll::CSUACSelfElevation::NativeMethods::NativeMethods_OpenProcessToken
               (void *hProcess,uint32_t desiredAccess,SafeTokenHandle **hToken,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    if (pcRam_? == (code *)0x0) {
      uVar8 = func_?(&UNK_?,0,0);
      func_?(uVar8);
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
  }
  pvStack_11 = (void *)0x0;
  iVar12 = (*pcRam_?)(hProcess,desiredAccess,&pvStack_11);
  func_?();
  this = (SafeTokenHandle *)func_?(TypeInfo__CSUACSelfElevation__SafeTokenHandle);
  mscorlib.dll::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::
  SafeHandleZeroOrMinusOneIsInvalid__ctor
            ((SafeHandleZeroOrMinusOneIsInvalid *)this,1,(MethodInfo *)0x0);
  (this->fields)._._.handle = pvStack_11;
  *hToken = this;
  return iVar12 != 0;
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
    if (pcRam_? == (code *)0x0) {
      uVar8 = func_?(&UNK_?,0,0);
      func_?(uVar8);
      pcVar9 = (code *)swi(3);
      iVar10 = (*pcVar9)();
      return iVar10;
    }
  }
  iVar10 = (*pcRam_?)(hWnd,Msg,wParam,lParam);
  func_?();
  return iVar10;
}

