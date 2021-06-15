
/* Int32 Diff(Int32) */

int32_t Assembly-CSharp.dll::WaitForTicksLocal::WaitForTicksLocal_Diff
                  (int32_t startTicks,MethodInfo *method)

{
  iVar1 = mscorlib.dll::System::Environment::Environment_get_TickCount((MethodInfo *)0x0);
  return iVar1 - startTicks;
}


/* Int32 GetEnvironmentTick(Int32) */

int32_t Assembly-CSharp.dll::WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick
                  (int32_t deltaMilliseconds,MethodInfo *method)

{
  iVar1 = mscorlib.dll::System::Environment::Environment_get_TickCount((MethodInfo *)0x0);
  return iVar1 + deltaMilliseconds;
}


/* WaitForTicksLocal(Int32) */

void Assembly-CSharp.dll::WaitForTicksLocal::WaitForTicksLocal__ctor
               (WaitForTicksLocal *this,int32_t milliseconds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  if ((double)milliseconds <= _UNK_?) {
    uVar1 = func_?();
    (this->fields).maxTicks = uVar1;
    iVar2 = mscorlib.dll::System::Environment::Environment_get_TickCount((MethodInfo *)0x0);
    (this->fields).startTicks = iVar2;
    return;
  }
  actualValue = (Object *)func_?(TypeInfo__System__Int32,&milliseconds);
  this_00 = (ArgumentOutOfRangeException *)
            func_?(TypeInfo__System__ArgumentOutOfRangeException);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
            (this_00,StringLiteral_milliseconds,actualValue,
             StringLiteral_Cannot_wait_for_more_than_Int32_,(MethodInfo *)0x0);
  method = MethodInfo__WaitForTicksLocal__WaitForTicksLocal_int_;
  milliseconds = 0;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean get_TimeIsUp() */

bool Assembly-CSharp.dll::WaitForTicksLocal::WaitForTicksLocal_get_TimeIsUp
               (WaitForTicksLocal *this,MethodInfo *method)

{
  iVar1 = mscorlib.dll::System::Environment::Environment_get_TickCount((MethodInfo *)0x0);
  return (this->fields).maxTicks <= (uint)(iVar1 - (this->fields).startTicks);
}

