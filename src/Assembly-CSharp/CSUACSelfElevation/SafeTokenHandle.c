
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
    if (pcRam_? == (code *)0x0) {
      uVar8 = func_?(&UNK_?,0,0);
      func_?(uVar8);
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
  }
  iVar11 = (*pcRam_?)(handle);
  func_?();
  return iVar11 != 0;
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
    if (pcRam_? == (code *)0x0) {
      uVar9 = func_?(&UNK_?,0,0);
      func_?(uVar9);
      pcVar10 = (code *)swi(3);
      bVar11 = (*pcVar10)();
      return bVar11;
    }
  }
  iVar12 = (*pcRam_?)(pvVar1);
  func_?();
  return iVar12 != 0;
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


/* SafeTokenHandle(IntPtr) */

void Assembly-CSharp.dll::CSUACSelfElevation::SafeTokenHandle::SafeTokenHandle__ctor_1
               (SafeTokenHandle *this,void *handle,MethodInfo *method)

{
  mscorlib.dll::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::
  SafeHandleZeroOrMinusOneIsInvalid__ctor
            ((SafeHandleZeroOrMinusOneIsInvalid *)this,1,(MethodInfo *)0x0);
  *(undefined4 *)(in_stack_1 + 8) = in_stack_2;
  return;
}

