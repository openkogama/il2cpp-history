
/* Boolean Update() */

bool Assembly-CSharp.dll::IntervalWithRandomSeed::IntervalWithRandomSeed_Update
               (IntervalWithRandomSeed *this,MethodInfo *method)

{
  bVar1 = 0;
  fVar2 = (this->fields).currentDeltaTime;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar3 = fVar3 + fVar2;
  (this->fields).currentDeltaTime = fVar3;
  if (((this->fields).newIteration != 0) && ((this->fields).range <= fVar3)) {
    bVar1 = 1;
    (this->fields).newIteration = 0;
  }
  fVar3 = fVar3 - (this->fields).range;
  if (_UNK_? < fVar3) {
    (this->fields).newIteration = 1;
    (this->fields).currentDeltaTime = fVar3;
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
      (this->fields).currentDeltaTime = fVar1;
      fVar1 = fVar1 - (this->fields).range;
    } while (0.0 < fVar1);
    (this->fields).newIteration = 1;
  }
  return;
}


/* IntervalWithRandomSeed(Single) */

void Assembly-CSharp.dll::IntervalWithRandomSeed::IntervalWithRandomSeed__ctor
               (IntervalWithRandomSeed *this,float interval,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).range = interval;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                    (0.0,interval,(MethodInfo *)0x0);
  (this->fields).currentDeltaTime = fVar1;
  return;
}

