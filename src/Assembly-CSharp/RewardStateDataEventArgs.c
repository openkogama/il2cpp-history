
/* RewardStateDataEventArgs(Int32, Int32) */

void Assembly-CSharp.dll::RewardStateDataEventArgs::RewardStateDataEventArgs__ctor
               (RewardStateDataEventArgs *this,int32_t timeInSeconds,int32_t amountGold,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((longlong)timeInSeconds * 1000 + 0x346dc5d638865U < 0x68db8bac710cb) {
    (this->fields).amountGold = amountGold;
    (this->fields).timeSpan._ticks = (longlong)timeInSeconds * 10000000;
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_00 = (ArgumentOutOfRangeException *)func_?(uVar1);
  message = (String *)func_?(&StringLiteral_TimeSpan_overflowed_because_the_);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (this_00,(String *)0x0,message,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__System__TimeSpan__TimeSpan_int__int__int__int__int_);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

