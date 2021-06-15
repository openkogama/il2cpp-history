
/* RewardStateDataEventArgs(Int32, Int32) */

void Assembly-CSharp.dll::RewardStateDataEventArgs::RewardStateDataEventArgs__ctor
               (RewardStateDataEventArgs *this,int32_t timeInSeconds,int32_t amountGold,
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
  uStack_1 = 0;
  func_?(&uStack_1,0,0,0,timeInSeconds,0);
  *(undefined4 *)&(this->fields).timeSpan._ticks = (undefined4)uStack_1;
  *(undefined4 *)((int)&(this->fields).timeSpan._ticks + 4) = uStack_1._4_4_;
  (this->fields).amountGold = amountGold;
  return;
}

