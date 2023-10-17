
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

