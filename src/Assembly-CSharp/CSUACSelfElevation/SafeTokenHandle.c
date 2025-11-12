
/* Boolean CloseHandle(IntPtr) */

bool Assembly-CSharp.dll::CSUACSelfElevation::SafeTokenHandle::SafeTokenHandle_CloseHandle
               (void *handle,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    uStack_1 = 0xc;
    uStack_2 = 0xb;
    uStack_3 = 0;
    uStack_4 = 1;
    uStack_5 = 8;
    uStack_6 = 0;
    pcRam_? = (code *)FUN_?(&puStack_7);
  }
  iVar8 = (*pcRam_?)(handle);
  uVar9 = GetLastError();
  FUN_?(uVar9);
  return iVar8 != 0;
}


/* Boolean ReleaseHandle() */

bool Assembly-CSharp.dll::CSUACSelfElevation::SafeTokenHandle::SafeTokenHandle_ReleaseHandle
               (SafeTokenHandle *this,MethodInfo *method)

{
  pvVar1 = (this->fields)._._.handle;
  if (pcRam_? == (code *)0x0) {
    uStack_2 = 0xc;
    uStack_3 = 0xb;
    uStack_4 = 0;
    uStack_5 = 1;
    uStack_6 = 8;
    uStack_7 = 0;
    pcRam_? = (code *)FUN_?(&puStack_8);
  }
  iVar9 = (*pcRam_?)(pvVar1);
  uVar10 = GetLastError();
  FUN_?(uVar10);
  return iVar9 != 0;
}

