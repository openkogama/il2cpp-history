
/* CloneWorldObjectTreeResponseEventArgs(Boolean, Int32) */

void Assembly-CSharp.dll::CloneWorldObjectTreeResponseEventArgs::
     CloneWorldObjectTreeResponseEventArgs__ctor
               (CloneWorldObjectTreeResponseEventArgs *this,bool success,int32_t rootId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__EventArgs->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__EventArgs->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__EventArgs);
  }
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this,(MethodInfo *)0x0);
  (this->fields).Success = success;
  (this->fields).RootId = rootId;
  return;
}

