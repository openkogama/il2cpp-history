
/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableRewardFirstLobby::
     FirstTimeActivatableRewardFirstLobby_OnShow
               (FirstTimeActivatableRewardFirstLobby *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MV__WorldObject__MetaData__FirstTimeEvent);
    cRam_? = '\x01';
  }
  pFVar1 = this;
  FirstTimeActivatableSetEventOnShow::FirstTimeActivatableSetEventOnShow_OnShow
            ((FirstTimeActivatableSetEventOnShow *)this,(MethodInfo *)0x0);
  this = (FirstTimeActivatableRewardFirstLobby *)(pFVar1->fields)._._._.firstTimeEvent;
  message = (Object *)func_?(TypeInfo__MV__WorldObject__MetaData__FirstTimeEvent,&this);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
  return;
}

