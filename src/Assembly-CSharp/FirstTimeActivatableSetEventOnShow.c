
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
  if ((this->fields).setFirstTimeEvent != 0) {
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
              ((this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
    (this->fields).setFirstTimeEvent = 0;
  }
  return;
}


/* FirstTimeActivatableSetEventOnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableSetEventOnShow::
     FirstTimeActivatableSetEventOnShow__ctor
               (FirstTimeActivatableSetEventOnShow *this,MethodInfo *method)

{
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

