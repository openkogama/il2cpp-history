
/* Boolean IsInTimeout() */

bool Assembly-CSharp.dll::TimeoutClock::TimeoutClock_IsInTimeout
               (TimeoutClock *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)();
  if (fVar4 - (this->fields).lastTimeout < (this->fields).timeoutTime) {
    return 1;
  }
  (this->fields).lastTimeout = fVar4;
  return 0;
}


/* TimeoutClock(Single) */

void Assembly-CSharp.dll::TimeoutClock::TimeoutClock__ctor
               (TimeoutClock *this,float timeoutTime,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  (this->fields).timeoutTime = timeoutTime;
  pcVar2 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcVar1)();
  (this->fields).lastTimeout = fVar4;
  return;
}

