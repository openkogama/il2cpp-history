
/* RewardStateDataEventArgs(Int32, Int32) */

void Assembly-CSharp.dll::RewardStateDataEventArgs::RewardStateDataEventArgs__ctor
               (RewardStateDataEventArgs *this,int32_t timeInSeconds,int32_t amountGold,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__EventArgs);
  }
  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
  TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)this,(MethodInfo *)0x0);
  TStack_1._ticks = 0;
  mscorlib.dll::System::TimeSpan::TimeSpan__ctor_2(&TStack_1,0,0,0,timeInSeconds,(MethodInfo *)0x0);
  *(undefined4 *)&(this->fields).timeSpan._ticks = (undefined4)TStack_1._ticks;
  *(undefined4 *)((int)&(this->fields).timeSpan._ticks + 4) = TStack_1._ticks._4_4_;
  (this->fields).amountGold = amountGold;
  return;
}

