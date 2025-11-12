
/* Boolean Update() */

bool Assembly-CSharp.dll::IntervalWithRandomSeed::IntervalWithRandomSeed_Update
               (IntervalWithRandomSeed *this,MethodInfo *method)

{
  bVar1 = 0;
  fVar2 = (this->fields).currentDeltaTime;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    bVar1 = (*pcVar3)();
    return bVar1;
  }
  pcRam_? = pcVar3;
  fVar5 = (float)(*pcRam_?)();
  fVar5 = fVar5 + fVar2;
  (this->fields).currentDeltaTime = fVar5;
  if (((this->fields).newIteration != 0) && ((this->fields).range <= fVar5)) {
    bVar1 = 1;
    (this->fields).newIteration = 0;
  }
  fVar5 = fVar5 - (this->fields).range;
  if (0.0 < fVar5) {
    (this->fields).currentDeltaTime = fVar5;
    (this->fields).newIteration = 1;
    IntervalWithRandomSeed_WrapDeltaTime(this,(MethodInfo *)0x0);
  }
  return bVar1;
}


/* Void WrapDeltaTime() */

void Assembly-CSharp.dll::IntervalWithRandomSeed::IntervalWithRandomSeed_WrapDeltaTime
               (IntervalWithRandomSeed *this,MethodInfo *method)

{
  fVar1 = (this->fields).currentDeltaTime - (this->fields).range;
  if (0.0 < fVar1) {
    do {
      fVar2 = fVar1;
      fVar1 = fVar2 - (this->fields).range;
    } while (0.0 < fVar1);
    (this->fields).currentDeltaTime = fVar2;
    (this->fields).newIteration = 1;
  }
  return;
}


/* IntervalWithRandomSeed(Single) */

void Assembly-CSharp.dll::IntervalWithRandomSeed::IntervalWithRandomSeed__ctor
               (IntervalWithRandomSeed *this,float interval,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  (this->fields).range = interval;
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
  fVar4 = (float)(*pcVar1)(0,interval);
  (this->fields).currentDeltaTime = fVar4;
  return;
}

