
/* Int32 Diff(Int32) */

int32_t Assembly-CSharp.dll::WaitForTicks::WaitForTicks_Diff(int32_t startTicks,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this != (MVNetworkGame *)0x0) {
    iVar1 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this,(MethodInfo *)0x0);
    return iVar1 - startTicks;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}


/* Int32 GetEnvironmentTick(Int32) */

int32_t Assembly-CSharp.dll::WaitForTicks::WaitForTicks_GetEnvironmentTick
                  (int32_t deltaMilliseconds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this != (MVNetworkGame *)0x0) {
    iVar1 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this,(MethodInfo *)0x0);
    return iVar1 + deltaMilliseconds;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}


/* WaitForTicks(Int32) */

void Assembly-CSharp.dll::WaitForTicks::WaitForTicks__ctor
               (WaitForTicks *this,int32_t milliseconds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  if (_UNK_? < (double)milliseconds) {
    actualValue = (Object *)func_?(TypeInfo__System__Int32,&milliseconds);
    this_01 = (ArgumentOutOfRangeException *)
              func_?(TypeInfo__System__ArgumentOutOfRangeException);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
              (this_01,StringLiteral_milliseconds,actualValue,
               StringLiteral_Cannot_wait_for_more_than_Int32_,(MethodInfo *)0x0);
    method = MethodInfo__WaitForTicks__WaitForTicks_int_;
    milliseconds = 0;
    func_?();
  }
  else {
    uVar1 = func_?();
    (this->fields).maxTicks = uVar1;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      iVar2 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      (this->fields).startTicks = iVar2;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean get_TimeIsUp() */

bool Assembly-CSharp.dll::WaitForTicks::WaitForTicks_get_TimeIsUp
               (WaitForTicks *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    iVar1 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    return (this->fields).maxTicks <= (uint)(iVar1 - (this->fields).startTicks);
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

