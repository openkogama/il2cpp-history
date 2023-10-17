
/* AwayMonitor+IdleKickTimes(Int32, Int32) */

void Assembly-CSharp.dll::AwayMonitor+IdleKickTimes::AwayMonitor_IdleKickTimes__ctor
               (AwayMonitor_IdleKickTimes *this,int32_t warnAfterMinutes,int32_t kickAfterMinutes,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).idleKickTimeMinutes = kickAfterMinutes;
  (this->fields).warningTimeMinutes = warnAfterMinutes;
  TStack_1._ticks = 0;
  mscorlib.dll::System::TimeSpan::TimeSpan__ctor_2
            (&TStack_1,0,0,warnAfterMinutes,0,(MethodInfo *)0x0);
  minutes = (this->fields).idleKickTimeMinutes;
  *(undefined4 *)&(this->fields).warningTimeSpan._ticks = (undefined4)TStack_1._ticks;
  *(undefined4 *)((int)&(this->fields).warningTimeSpan._ticks + 4) = TStack_1._ticks._4_4_;
  TStack_2._ticks = 0;
  mscorlib.dll::System::TimeSpan::TimeSpan__ctor_2(&TStack_2,0,0,minutes,0,(MethodInfo *)0x0);
  *(undefined4 *)&(this->fields).idleKickTimeSpan._ticks = (undefined4)TStack_2._ticks;
  *(undefined4 *)((int)&(this->fields).idleKickTimeSpan._ticks + 4) = TStack_2._ticks._4_4_;
  return;
}

