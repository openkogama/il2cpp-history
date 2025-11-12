
/* Int32 Diff(Int32) */

int32_t Assembly-CSharp.dll::WaitForTicks::WaitForTicks_Diff(int32_t startTicks,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this = (pMVar1->fields).game, this != (MVNetworkGame *)0x0)) {
    iVar2 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this,(MethodInfo *)0x0);
    return iVar2 - startTicks;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* Int32 GetEnvironmentTick(Int32) */

int32_t Assembly-CSharp.dll::WaitForTicks::WaitForTicks_GetEnvironmentTick
                  (int32_t deltaMilliseconds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this = (pMVar1->fields).game, this != (MVNetworkGame *)0x0)) {
    iVar2 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this,(MethodInfo *)0x0);
    return iVar2 + deltaMilliseconds;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* WaitForTicks(Int32) */

void Assembly-CSharp.dll::WaitForTicks::WaitForTicks__ctor
               (WaitForTicks *this,int32_t milliseconds,MethodInfo *method)

{
  if (_UNK_? < (double)milliseconds) {
    aiStackX_10[0] = milliseconds;
    actualValue = (Object *)func_?(uRam_?,aiStackX_10);
    uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_01 = (ArgumentOutOfRangeException *)func_?(uVar1);
    message = (String *)func_?(&StringLiteral_Cannot_wait_for_more_than_Int32_);
    paramName = (String *)func_?(&StringLiteral_milliseconds);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
              (this_01,paramName,actualValue,message,(MethodInfo *)0x0);
    uVar1 = func_?(&MethodInfo__WaitForTicks__WaitForTicks_int_);
    FUN_?(this_01,uVar1);
  }
  else {
    bVar2 = cRam_? == '\0';
    (this->fields).maxTicks = milliseconds;
    if (bVar2) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar3 != (MVGameControllerBase *)0x0) &&
       (this_00 = (pMVar3->fields).game, this_00 != (MVNetworkGame *)0x0)) {
      iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      (this->fields).startTicks = iVar4;
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean get_TimeIsUp() */

bool Assembly-CSharp.dll::WaitForTicks::WaitForTicks_get_TimeIsUp
               (WaitForTicks *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar1->fields).game, this_00 != (MVNetworkGame *)0x0)) {
    iVar2 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    return (this->fields).maxTicks <= (uint)(iVar2 - (this->fields).startTicks);
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}

