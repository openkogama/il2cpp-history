
/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableRewardFirstLobby::
     FirstTimeActivatableRewardFirstLobby_OnShow
               (FirstTimeActivatableRewardFirstLobby *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.setFirstTimeEvent = 1;
  this = (FirstTimeActivatableRewardFirstLobby *)(this->fields)._._._.firstTimeEvent;
  message = (Object *)func_?(TypeInfo__MV__WorldObject__MetaData__FirstTimeEvent,&this);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
  return;
}

