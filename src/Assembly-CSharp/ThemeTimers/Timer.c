
/* Void Update() */

void Assembly-CSharp.dll::ThemeTimers::Timer::Timer_1_Update(Timer_1 *this,MethodInfo *method)

{
  fVar1 = (this->fields)._Time_k__BackingField;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar3 = _UNK_?;
  fVar1 = (this->fields).timeScale * fVar2 + fVar1;
  (this->fields)._Time_k__BackingField = fVar1;
  while (fVar3 < fVar1) {
    fVar1 = (this->fields)._Time_k__BackingField - fVar3;
    (this->fields)._Time_k__BackingField = fVar1;
  }
  return;
}


/* Timer(Single, Single) */

void Assembly-CSharp.dll::ThemeTimers::Timer::Timer_1__ctor
               (Timer_1 *this,float initialTime,float cycleLength,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._Time_k__BackingField = initialTime;
  (this->fields).timeScale = _UNK_? / cycleLength;
  return;
}

