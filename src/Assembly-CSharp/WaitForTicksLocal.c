
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  dVar1 = (double)milliseconds;
  if (dVar1 <= _UNK_?) {
    if (0.0 <= dVar1) {
      uVar2 = func_?();
    }
    else {
      uVar2 = (uint32_t)dVar1;
    }
    (this->fields).maxTicks = uVar2;
    iVar3 = mscorlib.dll::System::Environment::Environment_get_TickCount((MethodInfo *)0x0);
    (this->fields).startTicks = iVar3;
    return;
  }
  uVar4 = func_?(&TypeInfo__System__Int32,&milliseconds);
  actualValue = (Object *)func_?(uVar4);
  uVar4 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_00 = (ArgumentOutOfRangeException *)func_?(uVar4);
  func_?(this_00);
  message = (String *)func_?(&StringLiteral_Cannot_wait_for_more_than_Int32_);
  paramName = (String *)func_?(&StringLiteral_milliseconds);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
            (this_00,paramName,actualValue,message,(MethodInfo *)0x0);
  milliseconds = func_?(&MethodInfo__WaitForTicksLocal__WaitForTicksLocal_int_);
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean get_TimeIsUp() */

bool Assembly-CSharp.dll::WaitForTicksLocal::WaitForTicksLocal_get_TimeIsUp
               (WaitForTicksLocal *this,MethodInfo *method)

{
  iVar1 = mscorlib.dll::System::Environment::Environment_get_TickCount((MethodInfo *)0x0);
  return (this->fields).maxTicks <= (uint)(iVar1 - (this->fields).startTicks);
}

