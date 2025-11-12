
/* Int32 Diff(Int32) */

int32_t Assembly-CSharp.dll::WaitForTicksLocal::WaitForTicksLocal_Diff
                  (int32_t startTicks,MethodInfo *method)

{
  iVar1 = FUN_?();
  return iVar1 - startTicks;
}


/* Int32 GetEnvironmentTick(Int32) */

int32_t Assembly-CSharp.dll::WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick
                  (int32_t deltaMilliseconds,MethodInfo *method)

{
  iVar1 = FUN_?();
  return iVar1 + deltaMilliseconds;
}


/* WaitForTicksLocal(Int32) */

void Assembly-CSharp.dll::WaitForTicksLocal::WaitForTicksLocal__ctor
               (WaitForTicksLocal *this,int32_t milliseconds,MethodInfo *method)

{
  if ((double)milliseconds <= _UNK_?) {
    (this->fields).maxTicks = milliseconds;
    iVar1 = FUN_?();
    (this->fields).startTicks = iVar1;
    return;
  }
  aiStackX_10[0] = milliseconds;
  actualValue = (Object *)func_?(uRam_?,aiStackX_10);
  uVar2 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_00 = (ArgumentOutOfRangeException *)func_?(uVar2);
  message = (String *)func_?(&StringLiteral_Cannot_wait_for_more_than_Int32_);
  paramName = (String *)func_?(&StringLiteral_milliseconds);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
            (this_00,paramName,actualValue,message,(MethodInfo *)0x0);
  uVar2 = func_?(&MethodInfo__WaitForTicksLocal__WaitForTicksLocal_int_);
  FUN_?(this_00,uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean get_TimeIsUp() */

bool Assembly-CSharp.dll::WaitForTicksLocal::WaitForTicksLocal_get_TimeIsUp
               (WaitForTicksLocal *this,MethodInfo *method)

{
  iVar1 = FUN_?();
  return (this->fields).maxTicks <= (uint)(iVar1 - (this->fields).startTicks);
}

