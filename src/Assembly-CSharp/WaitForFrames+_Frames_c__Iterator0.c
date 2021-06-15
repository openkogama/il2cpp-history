
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WaitForFrames+<Frames>c__Iterator0::
     WaitForFrames_Frames_c_Iterator0_MoveNext
               (WaitForFrames_Frames_c_Iterator0 *this,MethodInfo *method)

{
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if ((iVar1 == 0) || (iVar1 == 1)) {
    iVar1 = (this->fields).frameCount;
    if (0 < iVar1) {
      (this->fields)._current = (Object *)0x0;
      (this->fields).frameCount = iVar1 + -1;
      if ((this->fields)._disposing == 0) {
        (this->fields)._PC = 1;
      }
      return 1;
    }
    this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).callback;
    if (this_00 == (AvatarMotor_OnActiveBounceDelegate *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (this_00,(MethodInfo *)0x0);
    (this->fields)._PC = -1;
  }
  return 0;
}


/* Void Reset() */

void Assembly-CSharp.dll::WaitForFrames+<Frames>c__Iterator0::WaitForFrames_Frames_c_Iterator0_Reset
               (WaitForFrames_Frames_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

