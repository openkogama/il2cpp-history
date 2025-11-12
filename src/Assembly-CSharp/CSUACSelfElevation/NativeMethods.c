
/* Boolean DuplicateToken(SafeTokenHandle, SECURITY_IMPERSONATION_LEVEL, SafeTokenHandle ByRef) */

bool Assembly-CSharp.dll::CSUACSelfElevation::NativeMethods::NativeMethods_DuplicateToken
               (SafeTokenHandle *ExistingTokenHandle,
               SECURITY_IMPERSONATION_LEVEL__Enum ImpersonationLevel,
               SafeTokenHandle **DuplicateTokenHandle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CSUACSelfElevation__SafeTokenHandle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pcRam_? == (code *)0x0) {
    uStack_1 = 0xc;
    uStack_2 = 0xe;
    uStack_3 = 0;
    uStack_4 = 1;
    uStack_5 = 0x14;
    uStack_6 = 0;
    pcRam_? = (code *)FUN_?(&puStack_7);
  }
  if (ExistingTokenHandle == (SafeTokenHandle *)0x0) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar9 = (code *)swi(3);
    bVar10 = (*pcVar9)();
    return bVar10;
  }
  abStackX_8[0] = 0;
  mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_DangerousAddRef
            ((SafeHandle *)ExistingTokenHandle,abStackX_8,(MethodInfo *)0x0);
  iVar11 = (*pcRam_?)((ExistingTokenHandle->fields)._._.handle);
  uVar12 = GetLastError();
  FUN_?(uVar12);
  if (abStackX_8[0] != 0) {
    mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_DangerousReleaseInternal
              ((SafeHandle *)ExistingTokenHandle,0,(MethodInfo *)0x0);
  }
  pSVar13 = (SafeTokenHandle *)FUN_?(TypeInfo__CSUACSelfElevation__SafeTokenHandle);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__GC);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (pSVar13->fields)._._.handle = (void *)0x0;
  (pSVar13->fields)._._._state = 4;
  (pSVar13->fields)._._._ownsHandle = 1;
  (pSVar13->fields)._._._fullyInitialized = 1;
  bVar14 = iRam_? != 0;
  (pSVar13->fields)._._.handle = (void *)0x0;
  *DuplicateTokenHandle = pSVar13;
  if (bVar14) {
    uVar15 = (uint)((ulonglong)DuplicateTokenHandle >> 0xc);
    puVar16 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar17 = *puVar16;
      LOCK();
      uVar18 = *puVar16;
      if (uVar17 == uVar18) {
        *puVar16 = uVar17 | 1L << (uVar15 & 0x3f);
      }
      UNLOCK();
    } while (uVar17 != uVar18);
  }
  return iVar11 != 0;
}


/* IntPtr GetSidSubAuthority(IntPtr, UInt32) */

void * Assembly-CSharp.dll::CSUACSelfElevation::NativeMethods::NativeMethods_GetSidSubAuthority
                 (void *pSid,uint32_t nSubAuthority,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    uStack_1 = 0xc;
    uStack_2 = 0x12;
    uStack_3 = 0;
    uStack_4 = 1;
    uStack_5 = 0xc;
    uStack_6 = 0;
    pcRam_? = (code *)FUN_?(&puStack_7);
  }
  pvVar8 = (void *)(*pcRam_?)(pSid,nSubAuthority);
  uVar9 = GetLastError();
  FUN_?(uVar9);
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
    uStack_5 = 0x20;
    uStack_6 = 0;
    pcRam_? = (code *)FUN_?(&puStack_7);
  }
  if (hToken != (SafeTokenHandle *)0x0) {
    abStackX_8[0] = 0;
    mscorlib.dll::System::Runtime::InteropServices::SafeHandle::SafeHandle_DangerousAddRef
              ((SafeHandle *)hToken,abStackX_8,(MethodInfo *)0x0);
    iVar8 = (*pcRam_?)
                      ((hToken->fields)._._.handle,tokenInfoClass,pTokenInfo,tokenInfoLength,
                       returnLength);
    uVar9 = GetLastError();
    FUN_?(uVar9);
    if (abStackX_8[0] != 0) {
      mscorlib.dll::System::Runtime::InteropServices::SafeHandle::
      SafeHandle_DangerousReleaseInternal((SafeHandle *)hToken,0,(MethodInfo *)0x0);
    }
    return iVar8 != 0;
  }
  uVar10 = func_?(&UNK_?);
  FUN_?(uVar10,0);
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Boolean OpenProcessToken(IntPtr, UInt32, SafeTokenHandle ByRef) */

bool Assembly-CSharp.dll::CSUACSelfElevation::NativeMethods::NativeMethods_OpenProcessToken
               (void *hProcess,uint32_t desiredAccess,SafeTokenHandle **hToken,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CSUACSelfElevation__SafeTokenHandle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pcRam_? == (code *)0x0) {
    uStack_1 = 8;
    uStack_2 = 0x10;
    uStack_3 = 0;
    uStack_4 = 1;
    uStack_5 = 0x14;
    uStack_6 = 0;
    pcRam_? = (code *)FUN_?(&puStack_7);
  }
  apvStackX_18[0] = (void *)0x0;
  iVar8 = (*pcRam_?)(hProcess,desiredAccess,apvStackX_18);
  uVar9 = GetLastError();
  FUN_?(uVar9);
  pSVar10 = (SafeTokenHandle *)FUN_?(TypeInfo__CSUACSelfElevation__SafeTokenHandle);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__GC);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (pSVar10->fields)._._.handle = (void *)0x0;
  (pSVar10->fields)._._._state = 4;
  (pSVar10->fields)._._._ownsHandle = 1;
  (pSVar10->fields)._._._fullyInitialized = 1;
  bVar11 = iRam_? != 0;
  (pSVar10->fields)._._.handle = apvStackX_18[0];
  *hToken = pSVar10;
  if (bVar11) {
    uVar12 = (uint)((ulonglong)hToken >> 0xc);
    puVar13 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar14 = *puVar13;
      LOCK();
      uVar15 = *puVar13;
      if (uVar14 == uVar15) {
        *puVar13 = uVar14 | 1L << (uVar12 & 0x3f);
      }
      UNLOCK();
    } while (uVar14 != uVar15);
  }
  return iVar8 != 0;
}


/* Int32 SendMessage(IntPtr, UInt32, Int32, IntPtr) */

int32_t Assembly-CSharp.dll::CSUACSelfElevation::NativeMethods::NativeMethods_SendMessage
                  (void *hWnd,uint32_t Msg,int32_t wParam,void *lParam,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    uStack_1 = 6;
    uStack_2 = 0xb;
    uStack_3 = 0;
    uStack_4 = 1;
    uStack_5 = 0x18;
    uStack_6 = 0;
    pcRam_? = (code *)FUN_?(&puStack_7);
  }
  iVar8 = (*pcRam_?)(hWnd,Msg,wParam,lParam);
  uVar9 = GetLastError();
  FUN_?(uVar9);
  return iVar8;
}

