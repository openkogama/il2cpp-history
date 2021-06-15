
/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableSetEventOnShow::
     FirstTimeActivatableSetEventOnShow_OnShow
               (FirstTimeActivatableSetEventOnShow *this,MethodInfo *method)

{
  (this->fields).setFirstTimeEvent = 1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeActivatableSetEventOnShow::
     FirstTimeActivatableSetEventOnShow_Update
               (FirstTimeActivatableSetEventOnShow *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).setFirstTimeEvent != 0) {
    firstTimeEvent = (this->fields)._._.firstTimeEvent;
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent(firstTimeEvent,(MethodInfo *)0x0)
    ;
    (this->fields).setFirstTimeEvent = 0;
  }
  return;
}

