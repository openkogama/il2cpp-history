
/* Void Update() */

void Assembly-CSharp.dll::ThemeTimers::Timer::Timer_1_Update(Timer_1 *this,MethodInfo *method)

{
  fVar1 = (this->fields)._Time_k__BackingField;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  fVar5 = _UNK_?;
  fVar1 = fVar4 * (this->fields).timeScale + fVar1;
  (this->fields)._Time_k__BackingField = fVar1;
  if (fVar5 < fVar1) {
    do {
      fVar1 = fVar1 - fVar5;
    } while (fVar5 < fVar1);
    (this->fields)._Time_k__BackingField = fVar1;
  }
  return;
}


/* Timer(Single, Single) */

void Assembly-CSharp.dll::ThemeTimers::Timer::Timer_1__ctor
               (Timer_1 *this,float initialTime,float cycleLength,MethodInfo *method)

{
  fVar1 = _UNK_? / cycleLength;
  (this->fields)._Time_k__BackingField = initialTime;
  (this->fields).timeScale = fVar1;
  return;
}

