
/* Boolean IsInTimeout() */

bool Assembly-CSharp.dll::TimeoutClock::TimeoutClock_IsInTimeout
               (TimeoutClock *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((this->fields).timeoutTime <= fVar1 - (this->fields).lastTimeout) {
    (this->fields).lastTimeout = fVar1;
    return 0;
  }
  return 1;
}


/* TimeoutClock(Single) */

void Assembly-CSharp.dll::TimeoutClock::TimeoutClock__ctor
               (TimeoutClock *this,float timeoutTime,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).timeoutTime = timeoutTime;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).lastTimeout = fVar1;
  return;
}

