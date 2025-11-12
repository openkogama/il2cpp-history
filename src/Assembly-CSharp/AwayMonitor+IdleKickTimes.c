
/* AwayMonitor+IdleKickTimes(Int32, Int32) */

void Assembly-CSharp.dll::AwayMonitor+IdleKickTimes::AwayMonitor_IdleKickTimes__ctor
               (AwayMonitor_IdleKickTimes *this,int32_t warnAfterMinutes,int32_t kickAfterMinutes,
               MethodInfo *method)

{
  (this->fields).idleKickTimeMinutes = kickAfterMinutes;
  cVar1 = cRam_?;
  (this->fields).warningTimeMinutes = warnAfterMinutes;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
    cVar1 = cRam_?;
  }
  if ((longlong)warnAfterMinutes * 60000 + 0x346dc5d638865U < 0x68db8bac710cb) {
    lVar2 = (longlong)(this->fields).idleKickTimeMinutes;
    (this->fields).warningTimeSpan._ticks = (longlong)warnAfterMinutes * 600000000;
    if (cVar1 == '\0') {
      FUN_?(&TypeInfo__System__TimeSpan);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (lVar2 * 60000 + 0x346dc5d638865U < 0x68db8bac710cb) {
      (this->fields).idleKickTimeSpan._ticks = lVar2 * 600000000;
      return;
    }
    uVar3 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    pAVar4 = (ArgumentOutOfRangeException *)func_?(uVar3);
    pSVar5 = (String *)func_?(&StringLiteral_TimeSpan_overflowed_because_the_);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (pAVar4,(String *)0x0,pSVar5,(MethodInfo *)0x0);
    uVar3 = func_?(&MethodInfo__System__TimeSpan__TimeSpan_int__int__int__int__int_);
    FUN_?(pAVar4,uVar3);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  pAVar4 = (ArgumentOutOfRangeException *)func_?(uVar3);
  pSVar5 = (String *)func_?(&StringLiteral_TimeSpan_overflowed_because_the_);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (pAVar4,(String *)0x0,pSVar5,(MethodInfo *)0x0);
  uVar3 = func_?(&MethodInfo__System__TimeSpan__TimeSpan_int__int__int__int__int_);
  FUN_?(pAVar4,uVar3);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

