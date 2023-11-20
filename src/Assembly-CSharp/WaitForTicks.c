
/* Int32 Diff(Int32) */

int32_t Assembly-CSharp.dll::WaitForTicks::WaitForTicks_Diff(int32_t startTicks,MethodInfo *method)

{
  this = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this != (MVNetworkGame *)0x0) {
    iVar1 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this,(MethodInfo *)0x0);
    return iVar1 - startTicks;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar1 = (*pcVar4)();
  return iVar1;
}


/* Int32 GetEnvironmentTick(Int32) */

int32_t Assembly-CSharp.dll::WaitForTicks::WaitForTicks_GetEnvironmentTick
                  (int32_t deltaMilliseconds,MethodInfo *method)

{
  this = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this != (MVNetworkGame *)0x0) {
    iVar1 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this,(MethodInfo *)0x0);
    return iVar1 + deltaMilliseconds;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar1 = (*pcVar4)();
  return iVar1;
}


/* WaitForTicks(Int32) */

void Assembly-CSharp.dll::WaitForTicks::WaitForTicks__ctor
               (WaitForTicks *this,int32_t milliseconds,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  dVar1 = (double)milliseconds;
  if (_UNK_? < dVar1) {
    uVar2 = func_?(&TypeInfo__System__Int32,&milliseconds);
    actualValue = (Object *)func_?(uVar2);
    uVar2 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_01 = (ArgumentOutOfRangeException *)func_?(uVar2);
    message = (String *)func_?(&StringLiteral_Cannot_wait_for_more_than_Int32_);
    paramName = (String *)func_?(&StringLiteral_milliseconds);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
              (this_01,paramName,actualValue,message,(MethodInfo *)0x0);
    milliseconds = func_?(&MethodInfo__WaitForTicks__WaitForTicks_int_);
    func_?();
  }
  else {
    if (0.0 <= dVar1) {
      uVar3 = func_?();
    }
    else {
      uVar3 = (uint32_t)dVar1;
    }
    (this->fields).maxTicks = uVar3;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      (this->fields).startTicks = iVar4;
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean get_TimeIsUp() */

bool Assembly-CSharp.dll::WaitForTicks::WaitForTicks_get_TimeIsUp
               (WaitForTicks *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    iVar1 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    return (this->fields).maxTicks <= (uint)(iVar1 - (this->fields).startTicks);
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}

