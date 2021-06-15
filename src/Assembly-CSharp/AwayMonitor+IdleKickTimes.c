
/* AwayMonitor+IdleKickTimes(Int32, Int32) */

void Assembly-CSharp.dll::AwayMonitor+IdleKickTimes::AwayMonitor_IdleKickTimes__ctor
               (AwayMonitor_IdleKickTimes *this,int32_t warnAfterMinutes,int32_t kickAfterMinutes,
               MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).idleKickTimeMinutes = kickAfterMinutes;
  (this->fields).warningTimeMinutes = warnAfterMinutes;
  uStack_1 = 0;
  func_?(&uStack_1,0,0,warnAfterMinutes,0,0);
  iVar2 = (this->fields).idleKickTimeMinutes;
  *(undefined4 *)&(this->fields).warningTimeSpan._ticks = (undefined4)uStack_1;
  *(undefined4 *)((int)&(this->fields).warningTimeSpan._ticks + 4) = uStack_1._4_4_;
  uStack_3 = 0;
  func_?(&uStack_3,0,0,iVar2,0,0);
  *(undefined4 *)&(this->fields).idleKickTimeSpan._ticks = (undefined4)uStack_3;
  *(undefined4 *)((int)&(this->fields).idleKickTimeSpan._ticks + 4) = uStack_3._4_4_;
  return;
}

