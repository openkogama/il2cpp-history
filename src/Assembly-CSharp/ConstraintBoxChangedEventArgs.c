
/* ConstraintBoxChangedEventArgs(Vector3, IntVector, IntVector) */

void Assembly-CSharp.dll::ConstraintBoxChangedEventArgs::ConstraintBoxChangedEventArgs__ctor
               (ConstraintBoxChangedEventArgs *this,Vector3 center,IntVector minCorner,
               IntVector maxCorner,MethodInfo *method)

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
  (this->fields).Center.x = center.x;
  (this->fields).Center.y = center.y;
  (this->fields).Center.z = center.z;
  (this->fields).MinCorner.x = minCorner.x;
  (this->fields).MinCorner.y = minCorner.y;
  (this->fields).MinCorner.z = minCorner.z;
  (this->fields).MaxCorner.x = maxCorner.x;
  (this->fields).MaxCorner.y = maxCorner.y;
  (this->fields).MaxCorner.z = maxCorner.z;
  return;
}

