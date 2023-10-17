
/* Boolean CloseHandle(IntPtr) */

bool Assembly-CSharp.dll::CSUACSelfElevation::SafeTokenHandle::SafeTokenHandle_CloseHandle
               (void *handle,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcStack_1 = pcRam_?;
    uStack_2 = 0;
    uStack_3 = 0xc;
    uStack_4 = 0xb;
    uStack_5 = 1;
    uStack_6 = 4;
    pcRam_? = (code *)func_?(&puStack_7);
  }
  iVar8 = (*pcRam_?)(handle);
  func_?();
  return iVar8 != 0;
}


/* Boolean ReleaseHandle() */

bool Assembly-CSharp.dll::CSUACSelfElevation::SafeTokenHandle::SafeTokenHandle_ReleaseHandle
               (SafeTokenHandle *this,MethodInfo *method)

{
  pvVar1 = (this->fields)._._.handle;
  if (pcRam_? == (code *)0x0) {
    pcStack_2 = pcRam_?;
    uStack_3 = 0;
    uStack_4 = 0xc;
    uStack_5 = 0xb;
    uStack_6 = 1;
    uStack_7 = 4;
    pcRam_? = (code *)func_?(&puStack_8);
  }
  iVar9 = (*pcRam_?)(pvVar1);
  func_?();
  return iVar9 != 0;
}


/* SafeTokenHandle() */

void Assembly-CSharp.dll::CSUACSelfElevation::SafeTokenHandle::SafeTokenHandle__ctor
               (SafeTokenHandle *this,MethodInfo *method)

{
  mscorlib.dll::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::
  SafeHandleZeroOrMinusOneIsInvalid__ctor
            ((SafeHandleZeroOrMinusOneIsInvalid *)this,1,(MethodInfo *)0x0);
  return;
}

