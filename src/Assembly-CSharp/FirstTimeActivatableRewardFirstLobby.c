
/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableRewardFirstLobby::
     FirstTimeActivatableRewardFirstLobby_OnShow
               (FirstTimeActivatableRewardFirstLobby *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__FirstTimeEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = (this->fields)._._._.firstTimeEvent;
  (this->fields)._.setFirstTimeEvent = 1;
  uVar1 = FUN_?(TypeInfo__MV__WorldObject__MetaData__FirstTimeEvent,aiStackX_8);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,3,uVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

